
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int dev; } ;
struct imx_usbmisc {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct imx_usbmisc_data*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct imx_usbmisc_data *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;
 struct imx_usbmisc *VAR_5 = FUNC_0(VAR_2->dev);
 int VAR_6;

 FUNC_2(&VAR_5->lock, VAR_3);
 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6 < 0) {
  FUNC_3(&VAR_5->lock, VAR_3);
  return VAR_6;
 }

 VAR_4 = FUNC_1(VAR_5->base + VAR_1 + VAR_6);
 if (!(VAR_4 & VAR_0))
  FUNC_5(VAR_4 | VAR_0,
   VAR_5->base + VAR_1 + VAR_6);

 FUNC_3(&VAR_5->lock, VAR_3);

 return 0;
}
