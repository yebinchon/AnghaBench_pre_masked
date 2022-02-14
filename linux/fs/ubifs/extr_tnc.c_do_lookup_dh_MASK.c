
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int uint32_t ;
struct ubifs_znode {int dummy; } ;
struct ubifs_info {int tnc_mutex; } ;
struct ubifs_dent_node {int dummy; } ;


 int FUNC_0 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_1 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*,struct ubifs_dent_node*,int ,struct ubifs_znode**,int*,int) ;
 int FUNC_6 (struct ubifs_info*,int ) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1,
   struct ubifs_dent_node *VAR_2, uint32_t VAR_3)
{
 int VAR_4, VAR_5;
 struct ubifs_znode *VAR_6;
 union ubifs_key VAR_7;

 FUNC_6(VAR_0, FUNC_0(VAR_0, VAR_1));

 FUNC_2(VAR_0, &VAR_7, FUNC_1(VAR_0, VAR_1));

 FUNC_3(&VAR_0->tnc_mutex);
 VAR_5 = FUNC_7(VAR_0, &VAR_7, &VAR_6, &VAR_4);
 if (FUNC_8(VAR_5 < 0))
  goto out_unlock;

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6, &VAR_4, VAR_5);

out_unlock:
 FUNC_4(&VAR_0->tnc_mutex);
 return VAR_5;
}
