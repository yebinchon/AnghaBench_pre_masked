
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mipid_platform_data {unsigned int (* get_bklight_max ) (struct mipid_platform_data*) ;int (* set_bklight_level ) (struct mipid_platform_data*,unsigned int) ;} ;
struct mipid_device {unsigned int saved_bklight_level; int enabled; TYPE_2__* spi; } ;
struct lcd_panel {int dummy; } ;
struct TYPE_3__ {struct mipid_platform_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct mipid_platform_data*) ;
 int FUNC_1 (struct mipid_platform_data*,unsigned int) ;
 struct mipid_device* FUNC_2 (struct lcd_panel*) ;

__attribute__((used)) static int FUNC_3(struct lcd_panel *VAR_2, unsigned int VAR_3)
{
 struct mipid_device *VAR_4 = FUNC_2(VAR_2);
 struct mipid_platform_data *VAR_5 = VAR_4->spi->dev.platform_data;

 if (VAR_5->get_bklight_max == ((void*)0) || VAR_5->set_bklight_level == ((void*)0))
  return -VAR_1;
 if (VAR_3 > VAR_5->get_bklight_max(VAR_5))
  return -VAR_0;
 if (!VAR_4->enabled) {
  VAR_4->saved_bklight_level = VAR_3;
  return 0;
 }
 VAR_5->set_bklight_level(VAR_5, VAR_3);

 return 0;
}
