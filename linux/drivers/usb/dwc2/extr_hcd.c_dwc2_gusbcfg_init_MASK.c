
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int otg_cap; } ;
struct TYPE_3__ {int op_mode; } ;
struct dwc2_hsotg {TYPE_2__ params; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_6 &= ~(VAR_3 | VAR_4);

 switch (VAR_5->hw_params.op_mode) {
 case 134:
  if (VAR_5->params.otg_cap ==
    VAR_0)
   VAR_6 |= VAR_3;
  if (VAR_5->params.otg_cap !=
    VAR_1)
   VAR_6 |= VAR_4;
  break;

 case 128:
 case 130:
 case 129:
  if (VAR_5->params.otg_cap !=
    VAR_1)
   VAR_6 |= VAR_4;
  break;

 case 133:
 case 132:
 case 131:
 default:
  break;
 }

 FUNC_1(VAR_5, VAR_6, VAR_2);
}
