
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_set_sel_req {int u2_pel; int u2_sel; int u1_pel; int u1_sel; } ;
struct usb_request {int buf; } ;
struct usb_ep {int dummy; } ;
struct mtu3_request {struct mtu3* mtu; } ;
struct mtu3 {int dev; } ;
typedef int sel ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct usb_set_sel_req*,int ,int) ;
 struct mtu3_request* FUNC_2 (struct usb_request*) ;

__attribute__((used)) static void FUNC_3(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct mtu3_request *VAR_2;
 struct mtu3 *VAR_3;
 struct usb_set_sel_req VAR_4;

 FUNC_1(&VAR_4, VAR_1->buf, sizeof(VAR_4));

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = VAR_2->mtu;
 FUNC_0(VAR_3->dev, "u1sel:%d, u1pel:%d, u2sel:%d, u2pel:%d\n",
  VAR_4.u1_sel, VAR_4.u1_pel, VAR_4.u2_sel, VAR_4.u2_pel);
}
