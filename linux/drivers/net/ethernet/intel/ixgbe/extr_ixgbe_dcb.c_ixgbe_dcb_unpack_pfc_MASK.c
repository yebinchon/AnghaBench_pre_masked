
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc_configuration {scalar_t__ dcb_pfc; } ;
struct ixgbe_dcb_config {struct tc_configuration* tc_config; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(struct ixgbe_dcb_config *VAR_2, u8 *VAR_3)
{
 struct tc_configuration *VAR_4 = &VAR_2->tc_config[0];
 int VAR_5;

 for (*VAR_3 = 0, VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4[VAR_5].dcb_pfc != VAR_1)
   *VAR_3 |= FUNC_0(VAR_5);
 }
}
