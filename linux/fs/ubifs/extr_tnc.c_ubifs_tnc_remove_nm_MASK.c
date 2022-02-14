
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {scalar_t__ cnext; } ;
struct ubifs_info {int tnc_mutex; scalar_t__ replaying; } ;
struct fscrypt_name {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_info*,int ) ;
 int FUNC_3 (char*,int,struct ubifs_znode*,int) ;
 int FUNC_4 (union ubifs_key const*,char*) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*,struct fscrypt_name const*,int ) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*,struct fscrypt_name const*) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_znode*,int) ;
 int FUNC_12 (struct ubifs_znode*) ;

int FUNC_13(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1,
   const struct fscrypt_name *VAR_2)
{
 int VAR_3, VAR_4;
 struct ubifs_znode *VAR_5;

 FUNC_8(&VAR_0->tnc_mutex);
 FUNC_4(VAR_1, "key ");
 VAR_4 = FUNC_7(VAR_0, VAR_1, &VAR_5, &VAR_3);
 if (VAR_4 < 0)
  goto out_unlock;

 if (VAR_4) {
  if (VAR_0->replaying)
   VAR_4 = FUNC_6(VAR_0, VAR_1, &VAR_5, &VAR_3,
        VAR_2, 0);
  else
   VAR_4 = FUNC_10(VAR_0, VAR_1, &VAR_5, &VAR_3, VAR_2);
  FUNC_3("rc returned %d, znode %p, n %d", VAR_4, VAR_5, VAR_3);
  if (VAR_4 < 0)
   goto out_unlock;
  if (VAR_4) {

   if (VAR_5->cnext || !FUNC_12(VAR_5)) {
    VAR_5 = FUNC_5(VAR_0, VAR_5);
    if (FUNC_0(VAR_5)) {
     VAR_4 = FUNC_1(VAR_5);
     goto out_unlock;
    }
   }
   VAR_4 = FUNC_11(VAR_0, VAR_5, VAR_3);
  }
 }

out_unlock:
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_0, 0);
 FUNC_9(&VAR_0->tnc_mutex);
 return VAR_4;
}
