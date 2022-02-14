
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {TYPE_1__* platdata; } ;
struct TYPE_2__ {scalar_t__ phy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ci_hdrc*,int ,int ) ;
 int FUNC_1 (int) ;

int FUNC_2(struct ci_hdrc *VAR_4)
{
 int VAR_5 = 100000;

 if (VAR_4->platdata->phy_mode != VAR_3)
  return 0;

 while (VAR_5-- > 0) {
  if (FUNC_0(VAR_4, VAR_1, VAR_2))
   return 0;
  FUNC_1(1);
 }

 return -VAR_0;
}
