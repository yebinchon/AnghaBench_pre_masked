
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gadc_thermal_info {int dev; int channel; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gadc_thermal_info*,int) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int *VAR_1)
{
 struct gadc_thermal_info *VAR_2 = VAR_0;
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->channel, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "IIO channel read failed %d\n", VAR_4);
  return VAR_4;
 }
 *VAR_1 = FUNC_1(VAR_2, VAR_3);

 return 0;
}
