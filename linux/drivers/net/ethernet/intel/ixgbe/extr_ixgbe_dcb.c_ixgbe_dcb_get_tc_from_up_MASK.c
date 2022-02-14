
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tc_configuration {TYPE_2__* path; } ;
struct TYPE_3__ {int pg_tcs; } ;
struct ixgbe_dcb_config {TYPE_1__ num_tcs; struct tc_configuration* tc_config; } ;
struct TYPE_4__ {int up_to_tc_bitmap; } ;


 int FUNC_0 (int) ;

u8 FUNC_1(struct ixgbe_dcb_config *VAR_0, int VAR_1, u8 VAR_2)
{
 struct tc_configuration *VAR_3 = &VAR_0->tc_config[0];
 u8 VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5 = VAR_0->num_tcs.pg_tcs;


 if (!VAR_5)
  return 0;






 for (VAR_5--; VAR_5; VAR_5--) {
  if (VAR_4 & VAR_3[VAR_5].path[VAR_1].up_to_tc_bitmap)
   break;
 }

 return VAR_5;
}
