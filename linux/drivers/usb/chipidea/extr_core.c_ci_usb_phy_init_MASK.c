
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {TYPE_1__* platdata; } ;
struct TYPE_2__ {int flags; int phy_mode; } ;


 int VAR_0 ;





 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct ci_hdrc *VAR_1)
{
 int VAR_2;

 if (VAR_1->platdata->flags & VAR_0)
  return 0;

 switch (VAR_1->platdata->phy_mode) {
 case 129:
 case 128:
 case 132:
  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_2)
   FUNC_2();
  else
   return VAR_2;
  FUNC_1(VAR_1);
  break;
 case 130:
 case 131:
  FUNC_1(VAR_1);
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   return VAR_2;
  break;
 default:
  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_2)
   FUNC_2();
 }

 return VAR_2;
}
