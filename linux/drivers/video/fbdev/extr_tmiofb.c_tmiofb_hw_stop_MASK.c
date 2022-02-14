
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmiofb_par {scalar_t__ lcr; scalar_t__ ccr; } ;
struct tmio_fb_data {int (* lcd_set_power ) (struct platform_device*,int ) ;} ;
struct platform_device {int dev; } ;
struct fb_info {struct tmiofb_par* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tmio_fb_data* FUNC_0 (int *) ;
 struct fb_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct tmio_fb_data *VAR_4 = FUNC_0(&VAR_3->dev);
 struct fb_info *VAR_5 = FUNC_1(VAR_3);
 struct tmiofb_par *VAR_6 = VAR_5->par;

 FUNC_3(0, VAR_6->ccr + VAR_0);
 FUNC_3(0, VAR_6->lcr + VAR_1);
 VAR_4->lcd_set_power(VAR_3, 0);
 FUNC_3(0x0010, VAR_6->lcr + VAR_2);

 return 0;
}
