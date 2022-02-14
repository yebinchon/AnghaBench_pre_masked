
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {char* buf; size_t length; struct kiocb* context; int complete; } ;
struct kiocb_priv {struct kiocb_priv* to_free; struct usb_request* req; int mm; scalar_t__ actual; struct ep_data* epdata; struct kiocb* iocb; } ;
struct kiocb {struct kiocb_priv* private; } ;
struct ep_data {TYPE_1__* dev; int * ep; } ;
typedef int ssize_t ;
struct TYPE_4__ {int mm; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ep_data*) ;
 int FUNC_1 (struct kiocb_priv*) ;
 int FUNC_2 (struct kiocb*,int ) ;
 int FUNC_3 (struct ep_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 struct usb_request* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct usb_request*) ;
 int FUNC_9 (int *,struct usb_request*,int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct kiocb *VAR_7,
        struct kiocb_priv *VAR_8,
        struct ep_data *VAR_9,
        char *VAR_10,
        size_t VAR_11)
{
 struct usb_request *VAR_12;
 ssize_t VAR_13;

 VAR_7->private = VAR_8;
 VAR_8->iocb = VAR_7;

 FUNC_2(VAR_7, VAR_5);
 FUNC_0(VAR_9);
 VAR_8->epdata = VAR_9;
 VAR_8->actual = 0;
 VAR_8->mm = VAR_4->mm;




 FUNC_4(&VAR_9->dev->lock);
 VAR_13 = -VAR_1;
 if (FUNC_6(VAR_9->ep == ((void*)0)))
  goto fail;

 VAR_12 = FUNC_7(VAR_9->ep, VAR_3);
 VAR_13 = -VAR_2;
 if (FUNC_6(!VAR_12))
  goto fail;

 VAR_8->req = VAR_12;
 VAR_12->buf = VAR_10;
 VAR_12->length = VAR_11;
 VAR_12->complete = VAR_6;
 VAR_12->context = VAR_7;
 VAR_13 = FUNC_9(VAR_9->ep, VAR_12, VAR_3);
 if (FUNC_6(0 != VAR_13)) {
  FUNC_8(VAR_9->ep, VAR_12);
  goto fail;
 }
 FUNC_5(&VAR_9->dev->lock);
 return -VAR_0;

fail:
 FUNC_5(&VAR_9->dev->lock);
 FUNC_1(VAR_8->to_free);
 FUNC_1(VAR_8);
 FUNC_3(VAR_9);
 return VAR_13;
}
