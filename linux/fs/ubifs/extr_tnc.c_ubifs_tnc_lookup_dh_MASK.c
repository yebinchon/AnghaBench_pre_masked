
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef scalar_t__ uint32_t ;
struct ubifs_info {int double_hash; } ;
struct ubifs_dent_node {int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,union ubifs_key const*,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key const*,void*) ;

int FUNC_3(struct ubifs_info *VAR_1, const union ubifs_key *VAR_2,
   void *VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 const struct ubifs_dent_node *VAR_6 = VAR_3;

 if (!VAR_1->double_hash)
  return -VAR_0;





 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (FUNC_1(VAR_6->cookie) == VAR_4)
  return 0;





 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
