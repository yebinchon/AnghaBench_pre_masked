
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int index; int pwr_pol; scalar_t__ hsic; scalar_t__ oc_pol_configured; scalar_t__ oc_pol_active_low; scalar_t__ disable_oc; int dev; } ;
struct imx_usbmisc {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct imx_usbmisc_data*,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct imx_usbmisc_data *VAR_9)
{
 struct imx_usbmisc *VAR_10 = FUNC_0(VAR_9->dev);
 unsigned long VAR_11;
 u32 VAR_12;

 if (VAR_9->index > 3)
  return -VAR_0;

 FUNC_2(&VAR_10->lock, VAR_11);

 VAR_12 = FUNC_1(VAR_10->base + VAR_9->index * 4);
 if (VAR_9->disable_oc) {
  VAR_12 |= VAR_4;
 } else {
  VAR_12 &= ~VAR_4;





  if (VAR_9->oc_pol_configured && VAR_9->oc_pol_active_low)
   VAR_12 |= VAR_5;
  else if (VAR_9->oc_pol_configured)
   VAR_12 &= ~VAR_5;
 }

 if (VAR_9->pwr_pol == 1)
  VAR_12 |= VAR_6;
 FUNC_5(VAR_12, VAR_10->base + VAR_9->index * 4);


 VAR_12 = FUNC_1(VAR_10->base + VAR_9->index * 4);
 FUNC_5(VAR_12 | VAR_3,
   VAR_10->base + VAR_9->index * 4);


 if (VAR_9->hsic) {
  VAR_12 = FUNC_1(VAR_10->base + VAR_9->index * 4);
  FUNC_5(VAR_12 | VAR_7,
   VAR_10->base + VAR_9->index * 4);
  VAR_12 = FUNC_1(VAR_10->base + VAR_8
   + (VAR_9->index - 2) * 4);
  VAR_12 |= VAR_2 | VAR_1;
  FUNC_5(VAR_12, VAR_10->base + VAR_8
   + (VAR_9->index - 2) * 4);
 }

 FUNC_3(&VAR_10->lock, VAR_11);

 FUNC_4(VAR_9, 0);

 return 0;
}
