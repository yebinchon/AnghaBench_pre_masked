
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {scalar_t__ active; int dev; } ;
struct wusb_port {int status; int change; struct wusb_dev* wusb_dev; } ;
struct wusb_dev {int cack_node; int port_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wusb_dev*) ;
 int FUNC_4 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_5(struct wusbhc *VAR_8,
        struct wusb_port *VAR_9)
{
 struct wusb_dev *VAR_10 = VAR_9->wusb_dev;

 VAR_9->status &= ~(VAR_0 | VAR_3
     | VAR_7 | VAR_6
     | VAR_5 | VAR_4);
 VAR_9->change |= VAR_1 | VAR_2;
 if (VAR_10) {
  FUNC_0(VAR_8->dev, "disconnecting device from port %d\n", VAR_10->port_idx);
  if (!FUNC_2(&VAR_10->cack_node))
   FUNC_1(&VAR_10->cack_node);

  FUNC_3(VAR_10);
 }
 VAR_9->wusb_dev = ((void*)0);



 if (VAR_8->active)
  FUNC_4(VAR_8);





}
