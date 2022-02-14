
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int u8 ;
struct ubifs_wbuf {int dummy; } ;
struct ubifs_inode {int data_len; int ui_lock; int ui_size; int synced_i_size; int ui_mutex; } ;
typedef void ubifs_ino_node ;
struct ubifs_info {TYPE_1__* jheads; } ;
struct inode {scalar_t__ i_nlink; int i_ino; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct ubifs_info*,size_t,int) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ubifs_info*,void*,struct inode const*,int) ;
 int FUNC_11 (struct ubifs_info*,size_t) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_16 (struct ubifs_info*) ;
 struct ubifs_inode* FUNC_17 (struct inode const*) ;
 int FUNC_18 (struct ubifs_info*,void*,int *) ;
 int FUNC_19 (struct ubifs_info*,int) ;
 int FUNC_20 (struct ubifs_info*,union ubifs_key*,int,int,int,int *) ;
 int FUNC_21 (struct ubifs_wbuf*,int ) ;
 int FUNC_22 (struct ubifs_info*,size_t,void*,int,int*,int*,int ) ;

int FUNC_23(struct ubifs_info *VAR_5, const struct inode *VAR_6,
      const struct inode *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct ubifs_inode *VAR_15 = FUNC_17(VAR_7);
 struct ubifs_ino_node *VAR_16;
 union ubifs_key VAR_17;
 int VAR_18 = FUNC_1(VAR_7);
 u8 VAR_19[VAR_3];
 u8 VAR_20[VAR_3];

 FUNC_2("ino %lu, ino %lu", VAR_7->i_ino, VAR_6->i_ino);
 FUNC_15(VAR_5, VAR_7->i_nlink > 0);
 FUNC_15(VAR_5, VAR_6->i_nlink > 0);
 FUNC_15(VAR_5, FUNC_9(&VAR_15->ui_mutex));

 VAR_9 = VAR_4 + VAR_15->data_len;
 VAR_10 = VAR_4 + FUNC_17(VAR_6)->data_len;
 VAR_12 = FUNC_0(VAR_9, 8);
 VAR_11 = VAR_12 + FUNC_0(VAR_10, 8);

 VAR_11 += FUNC_16(VAR_5);

 VAR_16 = FUNC_6(VAR_11, VAR_2);
 if (!VAR_16)
  return -VAR_1;


 VAR_8 = FUNC_7(VAR_5, VAR_0, VAR_11);
 if (VAR_8)
  goto out_free;

 FUNC_10(VAR_5, VAR_16, VAR_7, 0);
 VAR_8 = FUNC_18(VAR_5, VAR_16, VAR_19);
 if (VAR_8)
  goto out_release;
 FUNC_10(VAR_5, (void *)VAR_16 + VAR_12, VAR_6, 1);
 VAR_8 = FUNC_18(VAR_5, (void *)VAR_16 + VAR_12, VAR_20);
 if (VAR_8)
  goto out_release;

 VAR_8 = FUNC_22(VAR_5, VAR_0, VAR_16, VAR_11, &VAR_13, &VAR_14, 0);
 if (!VAR_18 && !VAR_8) {
  struct ubifs_wbuf *VAR_21 = &VAR_5->jheads[VAR_0].wbuf;

  FUNC_21(VAR_21, VAR_7->i_ino);
  FUNC_21(VAR_21, VAR_6->i_ino);
 }
 FUNC_11(VAR_5, VAR_0);
 if (VAR_8)
  goto out_ro;

 FUNC_14(VAR_5, VAR_13);

 FUNC_4(VAR_5, &VAR_17, VAR_7->i_ino);
 VAR_8 = FUNC_20(VAR_5, &VAR_17, VAR_13, VAR_14, VAR_9, VAR_19);
 if (VAR_8)
  goto out_ro;

 FUNC_4(VAR_5, &VAR_17, VAR_6->i_ino);
 VAR_8 = FUNC_20(VAR_5, &VAR_17, VAR_13, VAR_14 + VAR_12, VAR_10, VAR_20);
 if (VAR_8)
  goto out_ro;

 FUNC_3(VAR_5);
 FUNC_12(&VAR_15->ui_lock);
 VAR_15->synced_i_size = VAR_15->ui_size;
 FUNC_13(&VAR_15->ui_lock);
 FUNC_8(VAR_5, VAR_15);
 FUNC_5(VAR_16);
 return 0;

out_release:
 FUNC_11(VAR_5, VAR_0);
out_ro:
 FUNC_19(VAR_5, VAR_8);
 FUNC_3(VAR_5);
out_free:
 FUNC_5(VAR_16);
 return VAR_8;
}
