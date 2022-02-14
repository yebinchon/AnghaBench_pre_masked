
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wahc {int * dti_buf; int dti_buf_size; int * dti_epd; int * dto_epd; int quirks; } ;
struct device {int dummy; } ;
struct usb_interface {TYPE_3__* cur_altsetting; struct device dev; } ;
typedef int kernel_ulong_t ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wahc*,struct usb_interface*) ;
 int FUNC_5 (struct wahc*) ;
 int FUNC_6 (struct wahc*) ;

int FUNC_7(struct wahc *VAR_3, struct usb_interface *VAR_4,
 kernel_ulong_t VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_4->dev;

 if (VAR_4->cur_altsetting->desc.bNumEndpoints < 3)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 < 0)
  goto error_rpipes_create;
 VAR_3->quirks = VAR_5;

 VAR_3->dti_epd = &VAR_4->cur_altsetting->endpoint[1].desc;
 VAR_3->dto_epd = &VAR_4->cur_altsetting->endpoint[2].desc;
 VAR_3->dti_buf_size = FUNC_3(VAR_3->dti_epd);
 VAR_3->dti_buf = FUNC_2(VAR_3->dti_buf_size, VAR_2);
 if (VAR_3->dti_buf == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto error_dti_buf_alloc;
 }
 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_7, "WA-CDS: can't initialize notif endpoint: %d\n",
   VAR_6);
  goto error_nep_create;
 }
 return 0;

error_nep_create:
 FUNC_1(VAR_3->dti_buf);
error_dti_buf_alloc:
 FUNC_6(VAR_3);
error_rpipes_create:
 return VAR_6;
}
