
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {TYPE_1__* zbranch; } ;
struct ubifs_info {int tnc_mutex; } ;
struct inode {scalar_t__ i_ino; int i_mode; } ;
typedef int loff_t ;
struct TYPE_2__ {union ubifs_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ubifs_info*,union ubifs_key*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key*,scalar_t__) ;
 unsigned int FUNC_5 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key*,union ubifs_key*,union ubifs_key*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_10 (struct ubifs_info*,int) ;
 int FUNC_11 (struct ubifs_info*,struct inode const*) ;
 int FUNC_12 (struct ubifs_info*,char*,unsigned long,int,int) ;
 int FUNC_13 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;

int FUNC_14(struct ubifs_info *VAR_4, const struct inode *VAR_5,
    loff_t VAR_6)
{
 int VAR_7, VAR_8;
 union ubifs_key VAR_9, VAR_10, *VAR_11;
 struct ubifs_znode *VAR_12;
 unsigned int VAR_13;

 if (!FUNC_0(VAR_5->i_mode))
  return 0;
 if (!FUNC_2(VAR_4))
  return 0;

 VAR_13 = (VAR_6 + VAR_3 - 1) >> VAR_2;
 FUNC_1(VAR_4, &VAR_9, VAR_5->i_ino, VAR_13);
 FUNC_4(VAR_4, &VAR_10, VAR_5->i_ino);

 FUNC_7(&VAR_4->tnc_mutex);
 VAR_7 = FUNC_13(VAR_4, &VAR_9, &VAR_12, &VAR_8);
 if (VAR_7 < 0)
  goto out_unlock;

 if (VAR_7) {
  VAR_11 = &VAR_9;
  goto out_dump;
 }

 VAR_7 = FUNC_9(VAR_4, &VAR_12, &VAR_8);
 if (VAR_7 == -VAR_1) {
  VAR_7 = 0;
  goto out_unlock;
 }
 if (VAR_7 < 0)
  goto out_unlock;

 FUNC_10(VAR_4, VAR_7 == 0);
 VAR_11 = &VAR_12->zbranch[VAR_8].key;
 if (!FUNC_6(VAR_4, VAR_11, &VAR_9, &VAR_10))
  goto out_unlock;

out_dump:
 VAR_13 = FUNC_5(VAR_4, VAR_11);
 FUNC_12(VAR_4, "inode %lu has size %lld, but there are data at offset %lld",
    (unsigned long)VAR_5->i_ino, VAR_6,
    ((loff_t)VAR_13) << VAR_2);
 FUNC_8(&VAR_4->tnc_mutex);
 FUNC_11(VAR_4, VAR_5);
 FUNC_3();
 return -VAR_0;

out_unlock:
 FUNC_8(&VAR_4->tnc_mutex);
 return VAR_7;
}
