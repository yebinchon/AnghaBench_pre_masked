
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int uint32_t ;
struct ubifs_znode {scalar_t__ cnext; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int dummy; } ;
struct ubifs_info {int tnc_mutex; int double_hash; } ;
struct ubifs_dent_node {int cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_znode*) ;
 int VAR_3 ;
 int FUNC_2 (struct ubifs_info*,int ) ;
 struct ubifs_znode* FUNC_3 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_5 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ubifs_info*,union ubifs_key const*,struct ubifs_dent_node*,int ,struct ubifs_znode**,int*,int) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_znode*,int) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_dent_node*) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;
 int FUNC_16 (struct ubifs_znode*) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(struct ubifs_info *VAR_4, const union ubifs_key *VAR_5,
   uint32_t VAR_6)
{
 int VAR_7, VAR_8;
 struct ubifs_znode *VAR_9;
 struct ubifs_dent_node *VAR_10;
 struct ubifs_zbranch *VAR_11;

 if (!VAR_4->double_hash)
  return -VAR_1;

 FUNC_10(&VAR_4->tnc_mutex);
 VAR_8 = FUNC_8(VAR_4, VAR_5, &VAR_9, &VAR_7);
 if (VAR_8 <= 0)
  goto out_unlock;

 VAR_11 = &VAR_9->zbranch[VAR_7];
 VAR_10 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_10) {
  VAR_8 = -VAR_0;
  goto out_unlock;
 }

 VAR_8 = FUNC_14(VAR_4, VAR_11, VAR_10);
 if (VAR_8)
  goto out_free;


 if (FUNC_7(VAR_10->cookie) != VAR_6) {
  union ubifs_key VAR_12;

  FUNC_9(VAR_4, &VAR_12, FUNC_4(VAR_4, VAR_5));

  VAR_8 = FUNC_15(VAR_4, &VAR_12, &VAR_9, &VAR_7);
  if (FUNC_17(VAR_8 < 0))
   goto out_free;

  VAR_8 = FUNC_12(VAR_4, VAR_5, VAR_10, VAR_6, &VAR_9, &VAR_7, VAR_8);
  if (VAR_8)
   goto out_free;
 }

 if (VAR_9->cnext || !FUNC_16(VAR_9)) {
  VAR_9 = FUNC_3(VAR_4, VAR_9);
  if (FUNC_0(VAR_9)) {
   VAR_8 = FUNC_1(VAR_9);
   goto out_free;
  }
 }
 VAR_8 = FUNC_13(VAR_4, VAR_9, VAR_7);

out_free:
 FUNC_5(VAR_10);
out_unlock:
 if (!VAR_8)
  VAR_8 = FUNC_2(VAR_4, 0);
 FUNC_11(&VAR_4->tnc_mutex);
 return VAR_8;
}
