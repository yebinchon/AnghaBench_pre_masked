
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_lcdfb_pdata {int (* atmel_lcdfb_power_control ) (struct atmel_lcdfb_pdata*,int) ;} ;
struct atmel_lcdfb_info {TYPE_1__* pdev; scalar_t__ reg_lcd; struct atmel_lcdfb_pdata pdata; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct atmel_lcdfb_pdata*,int) ;

__attribute__((used)) static inline void FUNC_4(struct atmel_lcdfb_info *VAR_0, int VAR_1)
{
 int VAR_2;
 struct atmel_lcdfb_pdata *VAR_3 = &VAR_0->pdata;

 if (VAR_3->atmel_lcdfb_power_control)
  VAR_3->atmel_lcdfb_power_control(VAR_3, VAR_1);
 else if (VAR_0->reg_lcd) {
  if (VAR_1) {
   VAR_2 = FUNC_2(VAR_0->reg_lcd);
   if (VAR_2)
    FUNC_0(&VAR_0->pdev->dev,
     "lcd regulator enable failed:	%d\n", VAR_2);
  } else {
   VAR_2 = FUNC_1(VAR_0->reg_lcd);
   if (VAR_2)
    FUNC_0(&VAR_0->pdev->dev,
     "lcd regulator disable failed: %d\n", VAR_2);
  }
 }
}
