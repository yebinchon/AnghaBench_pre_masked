
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; scalar_t__ actual; } ;
struct bdc_req {TYPE_2__ usb_req; int epnum; } ;
struct TYPE_3__ {int desc; } ;
struct bdc_ep {int dir; int ep_num; struct bdc* bdc; TYPE_1__ usb_ep; } ;
struct bdc {int dev; int gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bdc*,struct bdc_req*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct bdc_ep *VAR_2, struct bdc_req *VAR_3)
{
 struct bdc *VAR_4;
 int VAR_5 = 0;

 if (!VAR_3 || !VAR_2->usb_ep.desc)
  return -VAR_1;

 VAR_4 = VAR_2->bdc;

 VAR_3->usb_req.actual = 0;
 VAR_3->usb_req.status = -VAR_0;
 VAR_3->epnum = VAR_2->ep_num;

 VAR_5 = FUNC_2(&VAR_4->gadget, &VAR_3->usb_req, VAR_2->dir);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "dma mapping failed\n");
  return VAR_5;
 }

 return FUNC_0(VAR_4, VAR_3);
}
