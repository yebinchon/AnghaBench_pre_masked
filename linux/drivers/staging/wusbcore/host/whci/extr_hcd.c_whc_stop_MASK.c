
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int mutex; int cluster_id; } ;
struct whc {scalar_t__ base; TYPE_1__* umc; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wusbhc* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct whc*,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int ,int ,int,char*) ;
 int FUNC_6 (int ) ;
 struct whc* FUNC_7 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_8(struct usb_hcd *VAR_4)
{
 struct wusbhc *VAR_5 = FUNC_3(VAR_4);
 struct whc *VAR_6 = FUNC_7(VAR_5);

 FUNC_1(&VAR_5->mutex);


 FUNC_0(0, VAR_6->base + VAR_1);
 FUNC_4(VAR_6, VAR_0, 0);
 FUNC_5(&VAR_6->umc->dev, VAR_6->base + VAR_2,
        VAR_3, VAR_3,
        100, "HC to halt");

 FUNC_6(VAR_5->cluster_id);

 FUNC_2(&VAR_5->mutex);
}
