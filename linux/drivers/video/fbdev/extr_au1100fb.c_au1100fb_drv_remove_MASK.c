
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_5__ {int cmap; } ;
struct au1100fb_device {scalar_t__ lcdclk; TYPE_2__ info; TYPE_1__* regs; } ;
struct TYPE_4__ {int lcd_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 struct au1100fb_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(struct platform_device *VAR_3)
{
 struct au1100fb_device *VAR_4 = ((void*)0);

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_3);




 VAR_4->regs->lcd_control &= ~VAR_1;


 FUNC_5(&VAR_4->info);

 FUNC_3(&VAR_4->info.cmap);

 if (VAR_4->lcdclk) {
  FUNC_1(VAR_4->lcdclk);
  FUNC_2(VAR_4->lcdclk);
 }

 return 0;
}
