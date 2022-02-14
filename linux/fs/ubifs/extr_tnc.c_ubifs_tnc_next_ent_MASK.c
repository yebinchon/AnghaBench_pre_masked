
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {union ubifs_key key; int len; } ;
struct ubifs_info {int tnc_mutex; scalar_t__ replaying; } ;
struct ubifs_dent_node {int dummy; } ;
struct fscrypt_name {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_dent_node* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,struct ubifs_znode*,int) ;
 int FUNC_2 (union ubifs_key*,char*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*,struct fscrypt_name const*,int ) ;
 scalar_t__ FUNC_4 (struct fscrypt_name const*) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_8 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*,struct fscrypt_name const*) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_dent_node*) ;
 int FUNC_15 (struct ubifs_info*,int ) ;
 int FUNC_16 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;
 scalar_t__ FUNC_17 (int) ;

struct ubifs_dent_node *FUNC_18(struct ubifs_info *VAR_3,
        union ubifs_key *VAR_4,
        const struct fscrypt_name *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = FUNC_7(VAR_3, VAR_4);
 struct ubifs_znode *VAR_9;
 struct ubifs_dent_node *VAR_10;
 struct ubifs_zbranch *VAR_11;
 union ubifs_key *VAR_12;

 FUNC_2(VAR_4, "key ");
 FUNC_15(VAR_3, FUNC_5(VAR_3, VAR_4));

 FUNC_10(&VAR_3->tnc_mutex);
 VAR_7 = FUNC_16(VAR_3, VAR_4, &VAR_9, &VAR_6);
 if (FUNC_17(VAR_7 < 0))
  goto out_unlock;

 if (FUNC_4(VAR_5) > 0) {
  if (VAR_7) {

   if (VAR_3->replaying)
    VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_9, &VAR_6,
        VAR_5, 0);
   else
    VAR_7 = FUNC_12(VAR_3, VAR_4, &VAR_9, &VAR_6, VAR_5);
   FUNC_1("rc returned %d, znode %p, n %d",
    VAR_7, VAR_9, VAR_6);
   if (FUNC_17(VAR_7 < 0))
    goto out_unlock;
  }


  VAR_7 = FUNC_13(VAR_3, &VAR_9, &VAR_6);
  if (FUNC_17(VAR_7))
   goto out_unlock;
 } else {





  if (!VAR_7) {





   VAR_7 = FUNC_13(VAR_3, &VAR_9, &VAR_6);
   if (VAR_7)
    goto out_unlock;
  }
 }

 VAR_11 = &VAR_9->zbranch[VAR_6];
 VAR_10 = FUNC_9(VAR_11->len, VAR_2);
 if (FUNC_17(!VAR_10)) {
  VAR_7 = -VAR_1;
  goto out_unlock;
 }





 VAR_12 = &VAR_11->key;
 if (FUNC_6(VAR_3, VAR_12) != FUNC_6(VAR_3, VAR_4) ||
     FUNC_7(VAR_3, VAR_12) != VAR_8) {
  VAR_7 = -VAR_0;
  goto out_free;
 }

 VAR_7 = FUNC_14(VAR_3, VAR_11, VAR_10);
 if (FUNC_17(VAR_7))
  goto out_free;

 FUNC_11(&VAR_3->tnc_mutex);
 return VAR_10;

out_free:
 FUNC_8(VAR_10);
out_unlock:
 FUNC_11(&VAR_3->tnc_mutex);
 return FUNC_0(VAR_7);
}
