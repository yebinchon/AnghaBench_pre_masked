
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int mutex; int cluster_id; } ;
struct usb_hcd {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wusbhc* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_0)
{
 struct wusbhc *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->mutex);
 FUNC_3(VAR_1->cluster_id);
 FUNC_1(&VAR_1->mutex);
}
