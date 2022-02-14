
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int index; int pwr_pol; scalar_t__ oc_pol_configured; scalar_t__ oc_pol_active_low; scalar_t__ disable_oc; int dev; } ;
struct imx_usbmisc {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct imx_usbmisc_data*,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct imx_usbmisc_data *VAR_7)
{
 struct imx_usbmisc *VAR_8 = FUNC_0(VAR_7->dev);
 unsigned long VAR_9;
 u32 VAR_10;

 if (VAR_7->index >= 1)
  return -VAR_0;

 FUNC_2(&VAR_8->lock, VAR_9);
 VAR_10 = FUNC_1(VAR_8->base);
 if (VAR_7->disable_oc) {
  VAR_10 |= VAR_1;
 } else {
  VAR_10 &= ~VAR_1;





  if (VAR_7->oc_pol_configured && VAR_7->oc_pol_active_low)
   VAR_10 |= VAR_2;
  else if (VAR_7->oc_pol_configured)
   VAR_10 &= ~VAR_2;
 }

 if (VAR_7->pwr_pol == 1)
  VAR_10 |= VAR_3;
 FUNC_5(VAR_10, VAR_8->base);

 VAR_10 = FUNC_1(VAR_8->base + VAR_4);
 VAR_10 &= ~VAR_6;
 FUNC_5(VAR_10 | VAR_5,
   VAR_8->base + VAR_4);

 FUNC_3(&VAR_8->lock, VAR_9);

 FUNC_4(VAR_7, 0);

 return 0;
}
