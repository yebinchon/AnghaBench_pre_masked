
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rlb_enabled; } ;
struct bonding {TYPE_1__ alb_info; } ;


 int FUNC_0 (struct bonding*) ;
 int FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct bonding*) ;

int FUNC_3(struct bonding *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {
  VAR_0->alb_info.rlb_enabled = 1;
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2) {
   FUNC_1(VAR_0);
   return VAR_2;
  }
 } else {
  VAR_0->alb_info.rlb_enabled = 0;
 }

 return 0;
}
