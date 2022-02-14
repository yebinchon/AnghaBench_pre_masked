
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3_event_devt {int type; int event_info; } ;
struct TYPE_2__ {int state; } ;
struct dwc3 {int dev; TYPE_1__ gadget; int revision; int has_hibernation; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*,int ) ;
 int FUNC_5 (struct dwc3*,int ) ;
 int FUNC_6 (struct dwc3*) ;
 int FUNC_7 (struct dwc3*,int ) ;
 int FUNC_8 (struct dwc3*) ;

__attribute__((used)) static void FUNC_9(struct dwc3 *VAR_2,
  const struct dwc3_event_devt *VAR_3)
{
 switch (VAR_3->type) {
 case 136:
  FUNC_3(VAR_2);
  break;
 case 130:
  FUNC_6(VAR_2);
  break;
 case 137:
  FUNC_2(VAR_2);
  break;
 case 128:
  FUNC_8(VAR_2);
  break;
 case 133:
  if (FUNC_1(VAR_2->dev, !VAR_2->has_hibernation,
     "unexpected hibernation event\n"))
   break;

  FUNC_4(VAR_2, VAR_3->event_info);
  break;
 case 132:
  FUNC_5(VAR_2, VAR_3->event_info);
  break;
 case 135:

  if (VAR_2->revision >= VAR_0) {




   if (VAR_2->gadget.state >= VAR_1)
    FUNC_7(VAR_2,
      VAR_3->event_info);
  }
  break;
 case 129:
 case 134:
 case 138:
 case 131:
  break;
 default:
  FUNC_0(VAR_2->dev, "UNKNOWN IRQ %d\n", VAR_3->type);
 }
}
