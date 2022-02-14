
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int mutex; int uwb_rc; int * dev; } ;
struct TYPE_2__ {int usb_dev; int usb_iface; } ;
struct hwahc {TYPE_1__ wa; struct wusbhc wusbhc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct hwahc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_8(struct hwahc *VAR_0)
{
 struct wusbhc *VAR_1 = &VAR_0->wusbhc;

 FUNC_2(&VAR_1->mutex);
 FUNC_0(&VAR_0->wa);
 FUNC_7(&VAR_0->wusbhc);
 FUNC_1(VAR_0);
 VAR_0->wusbhc.dev = ((void*)0);
 FUNC_6(VAR_1->uwb_rc);
 FUNC_5(VAR_0->wa.usb_iface);
 FUNC_4(VAR_0->wa.usb_dev);
 FUNC_3(&VAR_1->mutex);
}
