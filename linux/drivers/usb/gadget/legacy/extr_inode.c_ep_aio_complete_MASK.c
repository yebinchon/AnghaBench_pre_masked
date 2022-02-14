
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {scalar_t__ actual; scalar_t__ status; struct kiocb_priv* buf; struct kiocb* context; } ;
struct usb_ep {int name; } ;
struct kiocb_priv {scalar_t__ actual; int work; struct kiocb_priv* buf; struct kiocb_priv* to_free; struct ep_data* epdata; int * req; } ;
struct kiocb {int (* ki_complete ) (struct kiocb*,scalar_t__,scalar_t__) ;struct kiocb_priv* private; } ;
struct ep_data {TYPE_1__* dev; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct kiocb_priv*) ;
 int FUNC_3 (struct ep_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kiocb*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct usb_ep*,struct usb_request*) ;

__attribute__((used)) static void FUNC_10(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct kiocb *VAR_3 = VAR_2->context;
 struct kiocb_priv *VAR_4 = VAR_3->private;
 struct ep_data *VAR_5 = VAR_4->epdata;


 FUNC_5(&VAR_5->dev->lock);
 VAR_4->req = ((void*)0);
 VAR_4->epdata = ((void*)0);





 if (VAR_4->to_free == ((void*)0) || FUNC_8(VAR_2->actual == 0)) {
  FUNC_2(VAR_2->buf);
  FUNC_2(VAR_4->to_free);
  FUNC_2(VAR_4);
  VAR_3->private = ((void*)0);


  VAR_3->ki_complete(VAR_3, VAR_2->actual ? VAR_2->actual : VAR_2->status,
    VAR_2->status);
 } else {

  if (FUNC_8(0 != VAR_2->status))
   FUNC_0(VAR_5->dev, "%s fault %d len %d\n",
    VAR_1->name, VAR_2->status, VAR_2->actual);

  VAR_4->buf = VAR_2->buf;
  VAR_4->actual = VAR_2->actual;
  FUNC_1(&VAR_4->work, VAR_0);
  FUNC_4(&VAR_4->work);
 }

 FUNC_9(VAR_1, VAR_2);
 FUNC_6(&VAR_5->dev->lock);
 FUNC_3(VAR_5);
}
