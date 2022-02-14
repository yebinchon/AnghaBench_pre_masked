
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int status; scalar_t__ buf; scalar_t__ complete; int length; int list; } ;
struct cdns3_request {int flags; TYPE_1__* aligned_buf; struct usb_request request; } ;
struct cdns3_endpoint {int endpoint; int dir; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {scalar_t__ dev_ver; scalar_t__ zlp_buf; int lock; int sysdev; } ;
struct TYPE_2__ {int buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct usb_request*) ;
 struct usb_request* FUNC_1 (struct cdns3_device*,struct cdns3_endpoint*,struct cdns3_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cdns3_request*) ;
 int FUNC_7 (int *,struct usb_request*) ;
 int FUNC_8 (int ,struct usb_request*,int ) ;

void FUNC_9(struct cdns3_endpoint *VAR_5,
      struct cdns3_request *VAR_6,
      int VAR_7)
{
 struct cdns3_device *VAR_8 = VAR_5->cdns3_dev;
 struct usb_request *VAR_9 = &VAR_6->request;

 FUNC_2(&VAR_9->list);

 if (VAR_9->status == -VAR_1)
  VAR_9->status = VAR_7;

 FUNC_8(VAR_8->sysdev, VAR_9,
     VAR_5->dir);

 if ((VAR_6->flags & VAR_3) &&
     VAR_5->dir == VAR_4 && !VAR_9->status)
  FUNC_3(VAR_9->buf, VAR_6->aligned_buf->buf,
         VAR_9->length);

 VAR_6->flags &= ~(VAR_2 | VAR_3);
 FUNC_6(VAR_6);

 if (VAR_8->dev_ver < VAR_0) {
  VAR_9 = FUNC_1(VAR_8, VAR_5,
          VAR_6);
  if (!VAR_9)
   return;
 }

 if (VAR_9->complete) {
  FUNC_5(&VAR_8->lock);
  FUNC_7(&VAR_5->endpoint,
         VAR_9);
  FUNC_4(&VAR_8->lock);
 }

 if (VAR_9->buf == VAR_8->zlp_buf)
  FUNC_0(&VAR_5->endpoint, VAR_9);
}
