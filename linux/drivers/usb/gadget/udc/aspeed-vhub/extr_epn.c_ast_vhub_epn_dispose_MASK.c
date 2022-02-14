
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_ep {int dummy; } ;
struct TYPE_9__ {int * descs; } ;
struct TYPE_6__ {int * name; int ep_list; } ;
struct ast_vhub_ep {int d_idx; TYPE_5__* dev; TYPE_4__ epn; int * buf; int buf_dma; TYPE_3__* vhub; TYPE_1__ ep; } ;
struct TYPE_10__ {int ** epns; } ;
struct TYPE_8__ {TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ast_vhub_ep*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ast_vhub_ep* FUNC_5 (struct usb_ep*) ;

__attribute__((used)) static void FUNC_6(struct usb_ep *VAR_2)
{
 struct ast_vhub_ep *VAR_3 = FUNC_5(VAR_2);

 if (FUNC_1(!VAR_3->dev || !VAR_3->d_idx))
  return;

 FUNC_0(VAR_3, "Releasing endpoint\n");


 FUNC_4(&VAR_3->ep.ep_list);


 VAR_3->dev->epns[VAR_3->d_idx - 1] = ((void*)0);


 FUNC_3(VAR_3->ep.name);
 VAR_3->ep.name = ((void*)0);
 FUNC_2(&VAR_3->vhub->pdev->dev,
     VAR_1 +
     8 * VAR_0,
     VAR_3->buf, VAR_3->buf_dma);
 VAR_3->buf = ((void*)0);
 VAR_3->epn.descs = ((void*)0);


 VAR_3->dev = ((void*)0);
}
