
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwparams3; } ;
struct dwc3 {int imod_interval; scalar_t__ revision; int maximum_speed; TYPE_1__ hwparams; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;


 if (VAR_2->imod_interval && !FUNC_3(VAR_2)) {
  FUNC_2(VAR_2->dev, "Interrupt moderation not supported\n");
  VAR_2->imod_interval = 0;
 }
 if (!VAR_2->imod_interval &&
     (VAR_2->revision == VAR_1))
  VAR_2->imod_interval = 1;


 switch (VAR_2->maximum_speed) {
 case 131:
 case 133:
 case 132:
 case 130:
 case 129:
  break;
 default:
  FUNC_1(VAR_3, "invalid maximum_speed parameter %d\n",
   VAR_2->maximum_speed);

 case 128:

  VAR_2->maximum_speed = 130;




  if (FUNC_4(VAR_2) &&
      (FUNC_0(VAR_2->hwparams.hwparams3) ==
       VAR_0))
   VAR_2->maximum_speed = 129;

  break;
 }
}
