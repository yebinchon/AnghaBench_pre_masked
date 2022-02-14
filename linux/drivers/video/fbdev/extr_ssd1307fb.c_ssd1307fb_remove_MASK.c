
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssd1307fb_par {int pwm; TYPE_2__* device_info; int client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; int bl_dev; struct ssd1307fb_par* par; } ;
struct TYPE_4__ {scalar_t__ need_pwm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int ) ;
 struct fb_info* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct fb_info*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_6(VAR_1);
 struct ssd1307fb_par *VAR_3 = VAR_2->par;

 FUNC_9(VAR_3->client, VAR_0);

 FUNC_2(VAR_2->bl_dev);

 FUNC_10(VAR_2);
 if (VAR_3->device_info->need_pwm) {
  FUNC_7(VAR_3->pwm);
  FUNC_8(VAR_3->pwm);
 }
 FUNC_3(VAR_2);
 FUNC_0(FUNC_1(VAR_2->fix.smem_start), FUNC_5(VAR_2->fix.smem_len));
 FUNC_4(VAR_2);

 return 0;
}
