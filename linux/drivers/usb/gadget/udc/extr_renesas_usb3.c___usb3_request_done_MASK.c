
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int actual; int length; } ;
struct renesas_usb3_request {TYPE_1__ req; int queue; } ;
struct renesas_usb3_ep {int started; int ep; int num; } ;
struct renesas_usb3 {int lock; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct renesas_usb3* FUNC_4 (struct renesas_usb3_ep*) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct renesas_usb3_ep *VAR_0,
    struct renesas_usb3_request *VAR_1,
    int VAR_2)
{
 struct renesas_usb3 *VAR_3 = FUNC_4(VAR_0);

 FUNC_0(FUNC_5(VAR_3), "giveback: ep%2d, %u, %u, %d\n",
  VAR_0->num, VAR_1->req.length, VAR_1->req.actual,
  VAR_2);
 VAR_1->req.status = VAR_2;
 VAR_0->started = 0;
 FUNC_1(&VAR_1->queue);
 FUNC_3(&VAR_3->lock);
 FUNC_6(&VAR_0->ep, &VAR_1->req);
 FUNC_2(&VAR_3->lock);
}
