
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_otg {int default_a; TYPE_3__* gadget; TYPE_2__* host; } ;
struct otg_fsm {int id; scalar_t__ a_conn; scalar_t__ b_conn; } ;
struct TYPE_5__ {struct usb_otg* otg; } ;
struct fsl_otg {int otg_event; TYPE_1__ phy; struct otg_fsm fsm; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {int otgsc; } ;
struct TYPE_7__ {int is_a_peripheral; } ;
struct TYPE_6__ {int is_b_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct otg_fsm*,int ) ;
 int FUNC_3 (struct otg_fsm*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct otg_fsm*,int) ;
 int FUNC_7 (int *,int) ;
 TYPE_4__* VAR_5 ;

irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct otg_fsm *VAR_8 = &((struct fsl_otg *)VAR_7)->fsm;
 struct usb_otg *VAR_9 = ((struct fsl_otg *)VAR_7)->phy.otg;
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_4(&VAR_5->otgsc);
 VAR_10 = VAR_11 & VAR_2 & (VAR_11 >> 8);


 FUNC_5(VAR_11, &VAR_5->otgsc);


 VAR_8->id = (VAR_11 & VAR_4) ? 1 : 0;
 VAR_9->default_a = (VAR_8->id == 0);


 if (VAR_10) {
  if (VAR_10 & VAR_3) {
   VAR_8->id = (VAR_11 & VAR_4) ? 1 : 0;
   VAR_9->default_a = (VAR_8->id == 0);

   if (VAR_8->id)
    VAR_8->b_conn = 0;
   else
    VAR_8->a_conn = 0;

   if (VAR_9->host)
    VAR_9->host->is_b_host = VAR_8->id;
   if (VAR_9->gadget)
    VAR_9->gadget->is_a_peripheral = !VAR_8->id;
   FUNC_0("ID int (ID is %d)\n", VAR_8->id);

   if (VAR_8->id) {
    FUNC_7(
     &((struct fsl_otg *)VAR_7)->otg_event,
     100);
   } else {
    FUNC_1(&
          ((struct fsl_otg *)VAR_7)->
          otg_event);
    FUNC_2(VAR_8, 0);
    FUNC_6(VAR_8, 1);
    FUNC_3(VAR_8, 1);
   }
   return VAR_0;
  }
 }
 return VAR_1;
}
