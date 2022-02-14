
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {int ep_type; int hc_num; int ep_is_in; int complete_split; int do_split; int error_state; int do_ping; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 scalar_t__ FUNC_1 (struct dwc2_host_chan*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct dwc2_hsotg*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_10,
          struct dwc2_host_chan *VAR_11)
{
 u32 VAR_12 = VAR_2;

 switch (VAR_11->ep_type) {
 case 130:
 case 131:
  FUNC_4(VAR_10->dev, "control/bulk\n");
  VAR_12 |= VAR_9;
  VAR_12 |= VAR_7;
  VAR_12 |= VAR_8;
  VAR_12 |= VAR_3;
  if (VAR_11->ep_is_in) {
   VAR_12 |= VAR_1;
  } else {
   VAR_12 |= VAR_5;
   VAR_12 |= VAR_6;
   if (VAR_11->do_ping)
    VAR_12 |= VAR_0;
  }

  if (VAR_11->do_split) {
   VAR_12 |= VAR_5;
   if (VAR_11->complete_split)
    VAR_12 |= VAR_6;
   else
    VAR_12 |= VAR_0;
  }

  if (VAR_11->error_state)
   VAR_12 |= VAR_0;
  break;

 case 129:
  if (FUNC_2())
   FUNC_4(VAR_10->dev, "intr\n");
  VAR_12 |= VAR_9;
  VAR_12 |= VAR_5;
  VAR_12 |= VAR_7;
  VAR_12 |= VAR_8;
  VAR_12 |= VAR_3;
  VAR_12 |= VAR_4;

  if (VAR_11->ep_is_in)
   VAR_12 |= VAR_1;
  if (VAR_11->error_state)
   VAR_12 |= VAR_0;
  if (VAR_11->do_split) {
   if (VAR_11->complete_split)
    VAR_12 |= VAR_6;
   else
    VAR_12 |= VAR_0;
  }
  break;

 case 128:
  if (FUNC_2())
   FUNC_4(VAR_10->dev, "isoc\n");
  VAR_12 |= VAR_9;
  VAR_12 |= VAR_4;
  VAR_12 |= VAR_0;

  if (VAR_11->ep_is_in) {
   VAR_12 |= VAR_8;
   VAR_12 |= VAR_1;
  }
  break;
 default:
  FUNC_3(VAR_10->dev, "## Unknown EP type ##\n");
  break;
 }

 FUNC_5(VAR_10, VAR_12, FUNC_0(VAR_11->hc_num));
 if (FUNC_1(VAR_11))
  FUNC_4(VAR_10->dev, "set HCINTMSK to %08x\n", VAR_12);
}
