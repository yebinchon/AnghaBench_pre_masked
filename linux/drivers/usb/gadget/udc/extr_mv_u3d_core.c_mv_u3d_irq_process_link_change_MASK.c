
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int speed; } ;
struct mv_u3d {int vbus_valid_detect; int lock; TYPE_2__ gadget; int vbus; void* usb_state; int dev; void* resume_state; int ep0_state; int ep0_dir; TYPE_1__* vuc_regs; } ;
struct TYPE_3__ {int ltssmstate; int linkchange; } ;


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
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mv_u3d *VAR_15)
{
 u32 VAR_16;

 VAR_16 = FUNC_1(&VAR_15->vuc_regs->linkchange);
 FUNC_2(VAR_16, &VAR_15->vuc_regs->linkchange);

 FUNC_0(VAR_15->dev, "linkchange: 0x%x\n", VAR_16);

 if (VAR_16 & VAR_4) {
  FUNC_0(VAR_15->dev, "link up: ltssm state: 0x%x\n",
   FUNC_1(&VAR_15->vuc_regs->ltssmstate));

  VAR_15->usb_state = VAR_12;
  VAR_15->ep0_dir = VAR_0;
  VAR_15->ep0_state = VAR_9;


  VAR_15->gadget.speed = VAR_10;
 }

 if (VAR_16 & VAR_6) {
  FUNC_0(VAR_15->dev, "link suspend\n");
  VAR_15->resume_state = VAR_15->usb_state;
  VAR_15->usb_state = VAR_14;
 }

 if (VAR_16 & VAR_5) {
  FUNC_0(VAR_15->dev, "link resume\n");
  VAR_15->usb_state = VAR_15->resume_state;
  VAR_15->resume_state = 0;
 }

 if (VAR_16 & VAR_8) {
  FUNC_0(VAR_15->dev, "warm reset\n");
  VAR_15->usb_state = VAR_13;
 }

 if (VAR_16 & VAR_2) {
  FUNC_0(VAR_15->dev, "hot reset\n");
  VAR_15->usb_state = VAR_12;
 }

 if (VAR_16 & VAR_3)
  FUNC_0(VAR_15->dev, "inactive\n");

 if (VAR_16 & VAR_1)
  FUNC_0(VAR_15->dev, "ss.disabled\n");

 if (VAR_16 & VAR_7) {
  FUNC_0(VAR_15->dev, "vbus invalid\n");
  VAR_15->usb_state = VAR_11;
  VAR_15->vbus_valid_detect = 1;



  if (!VAR_15->vbus) {
   FUNC_5(&VAR_15->lock);
   FUNC_3(&VAR_15->gadget, 0);
   FUNC_4(&VAR_15->lock);
  }
 }
}
