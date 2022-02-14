
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int port_connect_status_change; scalar_t__ port_connect_status; } ;
struct TYPE_4__ {TYPE_1__ b; } ;
struct dwc2_hsotg {scalar_t__ op_state; int dev; TYPE_2__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 int FUNC_4 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_5 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_6 (struct dwc2_hsotg*) ;
 int FUNC_7 (struct dwc2_hsotg*) ;
 int FUNC_8 (struct dwc2_hsotg*,int ) ;
 int FUNC_9 (struct dwc2_hsotg*,int,int ) ;

void FUNC_10(struct dwc2_hsotg *VAR_9, bool VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;


 VAR_9->flags.b.port_connect_status_change = 1;
 VAR_9->flags.b.port_connect_status = 0;






 VAR_11 = FUNC_8(VAR_9, VAR_0);
 VAR_11 &= ~(VAR_3 | VAR_4 | VAR_2);
 FUNC_9(VAR_9, VAR_11, VAR_0);
 VAR_11 = VAR_3 | VAR_4 | VAR_2;
 FUNC_9(VAR_9, VAR_11, VAR_1);






 if (FUNC_5(VAR_9)) {
  if (VAR_9->op_state != VAR_8) {
   FUNC_0(VAR_9->dev, "Disconnect: PortPower off\n");
   FUNC_9(VAR_9, 0, VAR_5);
  }

  FUNC_1(VAR_9);
 }


 FUNC_7(VAR_9);

 if (FUNC_6(VAR_9))

  FUNC_2(VAR_9);

 FUNC_4(VAR_9);
 if (!VAR_10) {
  VAR_12 = FUNC_8(VAR_9, VAR_5);
  if (!(VAR_12 & VAR_6) && (VAR_12 & VAR_7))
   FUNC_3(VAR_9);
 }
}
