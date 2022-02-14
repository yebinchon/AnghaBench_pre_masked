
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mipid_platform_data {unsigned int (* get_bklight_level ) (struct mipid_platform_data*) ;} ;
struct mipid_device {TYPE_2__* spi; } ;
struct lcd_panel {int dummy; } ;
struct TYPE_3__ {struct mipid_platform_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct mipid_platform_data*) ;
 struct mipid_device* FUNC_1 (struct lcd_panel*) ;

__attribute__((used)) static unsigned int FUNC_2(struct lcd_panel *VAR_1)
{
 struct mipid_device *VAR_2 = FUNC_1(VAR_1);
 struct mipid_platform_data *VAR_3 = VAR_2->spi->dev.platform_data;

 if (VAR_3->get_bklight_level == ((void*)0))
  return -VAR_0;
 return VAR_3->get_bklight_level(VAR_3);
}
