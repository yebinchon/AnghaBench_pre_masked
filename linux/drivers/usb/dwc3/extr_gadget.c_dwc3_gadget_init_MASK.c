
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sg_supported; char* name; int lpm_capable; int max_speed; int speed; int * ops; } ;
struct dwc3 {int irq_gadget; scalar_t__ revision; int ep0_trb_addr; void* ep0_trb; int sysdev; int setup_buf; int bounce_addr; void* bounce; int maximum_speed; TYPE_1__ gadget; int dev; int num_eps; int dis_metastability_quirk; int ep0_in_setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 void* FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ,int,void*,int ) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*) ;
 int FUNC_6 (struct dwc3*,int ) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;

int FUNC_12(struct dwc3 *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto err0;
 }

 VAR_7->irq_gadget = VAR_9;

 VAR_7->ep0_trb = FUNC_2(VAR_7->sysdev,
       sizeof(*VAR_7->ep0_trb) * 2,
       &VAR_7->ep0_trb_addr, VAR_4);
 if (!VAR_7->ep0_trb) {
  FUNC_0(VAR_7->dev, "failed to allocate ep0 trb\n");
  VAR_8 = -VAR_3;
  goto err0;
 }

 VAR_7->setup_buf = FUNC_10(VAR_1, VAR_4);
 if (!VAR_7->setup_buf) {
  VAR_8 = -VAR_3;
  goto err1;
 }

 VAR_7->bounce = FUNC_2(VAR_7->sysdev, VAR_0,
   &VAR_7->bounce_addr, VAR_4);
 if (!VAR_7->bounce) {
  VAR_8 = -VAR_3;
  goto err2;
 }

 FUNC_8(&VAR_7->ep0_in_setup);

 VAR_7->gadget.ops = &VAR_6;
 VAR_7->gadget.speed = VAR_5;
 VAR_7->gadget.sg_supported = 1;
 VAR_7->gadget.name = "dwc3-gadget";
 VAR_7->gadget.lpm_capable = 1;
 if (VAR_7->revision < VAR_2 &&
     !VAR_7->dis_metastability_quirk)
  FUNC_1(VAR_7->dev, "changing max_speed on rev %08x\n",
    VAR_7->revision);

 VAR_7->gadget.max_speed = VAR_7->maximum_speed;






 VAR_8 = FUNC_6(VAR_7, VAR_7->num_eps);
 if (VAR_8)
  goto err3;

 VAR_8 = FUNC_11(VAR_7->dev, &VAR_7->gadget);
 if (VAR_8) {
  FUNC_0(VAR_7->dev, "failed to register udc\n");
  goto err4;
 }

 FUNC_7(&VAR_7->gadget, VAR_7->maximum_speed);

 return 0;

err4:
 FUNC_4(VAR_7);

err3:
 FUNC_3(VAR_7->sysdev, VAR_0, VAR_7->bounce,
   VAR_7->bounce_addr);

err2:
 FUNC_9(VAR_7->setup_buf);

err1:
 FUNC_3(VAR_7->sysdev, sizeof(*VAR_7->ep0_trb) * 2,
   VAR_7->ep0_trb, VAR_7->ep0_trb_addr);

err0:
 return VAR_8;
}
