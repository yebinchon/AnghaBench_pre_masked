
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int dev; } ;
struct imx_usbmisc {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct imx_usbmisc_data*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct imx_usbmisc_data *VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 struct imx_usbmisc *VAR_7 = FUNC_0(VAR_3->dev);
 int VAR_8;

 FUNC_2(&VAR_7->lock, VAR_5);
 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_7->lock, VAR_5);
  return VAR_8;
 }

 VAR_6 = FUNC_1(VAR_7->base + VAR_2 + VAR_8);
 VAR_6 |= VAR_1 | VAR_0;
 if (VAR_4)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_5(VAR_6, VAR_7->base + VAR_2 + VAR_8);
 FUNC_3(&VAR_7->lock, VAR_5);

 return 0;
}
