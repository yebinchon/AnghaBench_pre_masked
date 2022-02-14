
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int * zbranch; } ;
struct ubifs_info {int tnc_mutex; } ;
struct fscrypt_name {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,struct ubifs_znode*,int) ;
 int FUNC_1 (union ubifs_key const*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*,struct fscrypt_name const*) ;
 int FUNC_5 (struct ubifs_info*,int *,void*) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ubifs_info *VAR_1, const union ubifs_key *VAR_2,
   void *VAR_3, const struct fscrypt_name *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ubifs_znode *VAR_8;

 FUNC_1(VAR_2, "key ");
 FUNC_2(&VAR_1->tnc_mutex);
 VAR_5 = FUNC_7(VAR_1, VAR_2, &VAR_8, &VAR_6);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto out_unlock;
 } else if (VAR_5 < 0) {
  VAR_7 = VAR_5;
  goto out_unlock;
 }

 FUNC_6(VAR_1, VAR_6 >= 0);

 VAR_7 = FUNC_4(VAR_1, VAR_2, &VAR_8, &VAR_6, VAR_4);
 FUNC_0("rc returned %d, znode %p, n %d", VAR_7, VAR_8, VAR_6);
 if (FUNC_8(VAR_7 < 0))
  goto out_unlock;
 if (VAR_7 == 0) {
  VAR_7 = -VAR_0;
  goto out_unlock;
 }

 VAR_7 = FUNC_5(VAR_1, &VAR_8->zbranch[VAR_6], VAR_3);

out_unlock:
 FUNC_3(&VAR_1->tnc_mutex);
 return VAR_7;
}
