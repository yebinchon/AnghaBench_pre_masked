
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_lcdfb_pdata {scalar_t__ lcdcon_is_backlight; scalar_t__ lcdcon_pol_negative; } ;
struct atmel_lcdfb_info {struct atmel_lcdfb_pdata pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atmel_lcdfb_info*) ;
 int FUNC_1 (struct atmel_lcdfb_info*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct atmel_lcdfb_info *VAR_5)
{
 struct atmel_lcdfb_pdata *VAR_6 = &VAR_5->pdata;


 if (VAR_6->lcdcon_pol_negative)
  VAR_4 &= ~(VAR_3);


 FUNC_1(VAR_5, VAR_0, VAR_4);
 FUNC_1(VAR_5, VAR_1, VAR_2);

 if (VAR_6->lcdcon_is_backlight)
  FUNC_0(VAR_5);
}
