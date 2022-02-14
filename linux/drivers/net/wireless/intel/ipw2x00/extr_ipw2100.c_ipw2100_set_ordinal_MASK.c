
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipw2100_ordinals {scalar_t__ table1_addr; } ;
struct ipw2100_priv {int net_dev; struct ipw2100_ordinals ordinals; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ipw2100_ordinals*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ipw2100_ordinals*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ipw2100_priv *VAR_2, u32 VAR_3, u32 * VAR_4,
          u32 * VAR_5)
{
 struct ipw2100_ordinals *VAR_6 = &VAR_2->ordinals;
 u32 VAR_7;

 if (FUNC_1(VAR_6, VAR_3)) {
  if (*VAR_5 != VAR_1) {
   *VAR_5 = VAR_1;
   FUNC_0("wrong size\n");
   return -VAR_0;
  }

  FUNC_3(VAR_2->net_dev,
          VAR_6->table1_addr + (VAR_3 << 2), &VAR_7);

  FUNC_4(VAR_2->net_dev, VAR_7, *VAR_4);

  *VAR_5 = VAR_1;

  return 0;
 }

 FUNC_0("wrong table\n");
 if (FUNC_2(VAR_6, VAR_3))
  return -VAR_0;

 return -VAR_0;
}
