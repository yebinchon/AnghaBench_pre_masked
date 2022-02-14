
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_request {char* buf; int length; int zero; int * complete; int status; } ;
struct TYPE_10__ {TYPE_3__* ops; } ;
struct TYPE_6__ {struct usb_request req; } ;
struct TYPE_7__ {int dir_in; TYPE_1__ req; } ;
struct ast_vhub_ep {scalar_t__ d_idx; TYPE_4__* vhub; TYPE_5__ ep; TYPE_2__ ep0; } ;
struct TYPE_9__ {int lock; } ;
struct TYPE_8__ {scalar_t__ (* queue ) (TYPE_5__*,struct usb_request*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_5__*,struct usb_request*,int ) ;

int FUNC_4(struct ast_vhub_ep *VAR_5, char *VAR_6, int VAR_7)
{
 struct usb_request *VAR_8 = &VAR_5->ep0.req.req;
 int VAR_9;

 if (FUNC_0(VAR_5->d_idx != 0))
  return VAR_4;
 if (FUNC_0(!VAR_5->ep0.dir_in))
  return VAR_4;
 if (FUNC_0(VAR_7 > VAR_0))
  return VAR_4;
 if (FUNC_0(VAR_8->status == -VAR_1))
  return VAR_4;

 VAR_8->buf = VAR_6;
 VAR_8->length = VAR_7;
 VAR_8->complete = ((void*)0);
 VAR_8->zero = 1;






 FUNC_2(&VAR_5->vhub->lock);
 if (VAR_5->ep.ops->queue(&VAR_5->ep, VAR_8, VAR_2))
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_3;
 FUNC_1(&VAR_5->vhub->lock);
 return VAR_9;
}
