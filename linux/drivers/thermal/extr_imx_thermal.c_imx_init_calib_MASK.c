
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct platform_device {int dev; } ;
struct imx_thermal_data {int c1; int c2; TYPE_1__* socdata; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int) ;
 struct imx_thermal_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2, u32 VAR_3)
{
 struct imx_thermal_data *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;
 u64 VAR_6;

 if (VAR_3 == 0 || VAR_3 == ~0) {
  FUNC_0(&VAR_2->dev, "invalid sensor calibration data\n");
  return -VAR_0;
 }





 if (VAR_4->socdata->version == VAR_1) {
  VAR_4->c1 = (VAR_3 >> 9) & 0x1ff;
  return 0;
 }
 VAR_5 = VAR_3 >> 20;

 VAR_6 = 10000000;
 VAR_6 *= 1000;
 FUNC_1(VAR_6, 15423 * VAR_5 - 4148468);
 VAR_4->c1 = VAR_6;
 VAR_4->c2 = VAR_5 * VAR_4->c1 + 28581;

 return 0;
}
