
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wusbhc {int dummy; } ;
struct whc {int dn_work; int workqueue; int periodic_list_wq; int async_list_wq; TYPE_1__* umc; int cmd_wq; scalar_t__ base; } ;
struct usb_hcd {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct whc*) ;
 struct wusbhc* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (int *) ;
 struct whc* FUNC_7 (struct wusbhc*) ;

irqreturn_t FUNC_8(struct usb_hcd *VAR_11)
{
 struct wusbhc *VAR_12 = FUNC_5(VAR_11);
 struct whc *VAR_13 = FUNC_7(VAR_12);
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_13->base + VAR_2);
 if (!(VAR_14 & VAR_9))
  return VAR_1;
 FUNC_2(VAR_14 & VAR_9, VAR_13->base + VAR_2);

 if (VAR_14 & VAR_6)
  FUNC_6(&VAR_13->cmd_wq);

 if (VAR_14 & VAR_7)
  FUNC_0(&VAR_13->umc->dev, "FIXME: host system error\n");

 if (VAR_14 & VAR_3)
  FUNC_6(&VAR_13->async_list_wq);

 if (VAR_14 & VAR_10)
  FUNC_6(&VAR_13->periodic_list_wq);

 if (VAR_14 & VAR_4)
  FUNC_3(VAR_13->workqueue, &VAR_13->dn_work);





 if (VAR_14 & (VAR_8 | VAR_5))
  FUNC_4(VAR_13);

 return VAR_0;
}
