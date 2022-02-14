
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx51_device_info {int dev; int channel_vbat; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct rx51_device_info *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->channel_vbat);

 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "Could not read ADC: %d\n", VAR_1);
  return VAR_1;
 }

 return 1000 * (10000 * VAR_1 / 1705);
}
