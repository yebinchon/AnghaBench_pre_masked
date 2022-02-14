
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5k6a3 {int dev; TYPE_1__* supplies; int gpio_reset; int clock; int clock_frequency; } ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct s5k6a3 *VAR_2)
{
 int VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->clock, VAR_2->clock_frequency);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_2->dev);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_2->supplies[VAR_3].consumer);
 if (VAR_4 < 0)
  goto error_rpm_put;

 VAR_4 = FUNC_0(VAR_2->clock);
 if (VAR_4 < 0)
  goto error_reg_dis;

 for (VAR_3++; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_7(VAR_2->supplies[VAR_3].consumer);
  if (VAR_4 < 0)
   goto error_reg_dis;
 }

 FUNC_2(VAR_2->gpio_reset, 1);
 FUNC_8(600, 800);
 FUNC_2(VAR_2->gpio_reset, 0);
 FUNC_8(600, 800);
 FUNC_2(VAR_2->gpio_reset, 1);


 FUNC_3(20);
 return 0;

error_reg_dis:
 for (--VAR_3; VAR_3 >= 0; --VAR_3)
  FUNC_6(VAR_2->supplies[VAR_3].consumer);
error_rpm_put:
 FUNC_5(VAR_2->dev);
 return VAR_4;
}
