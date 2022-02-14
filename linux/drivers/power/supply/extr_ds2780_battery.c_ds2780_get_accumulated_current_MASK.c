
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2780_device_info {int dev; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ds2780_device_info*,int*,int ) ;
 int FUNC_2 (struct ds2780_device_info*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct ds2780_device_info *VAR_4,
 int *VAR_5)
{
 int VAR_6, VAR_7;
 s16 VAR_8;
 u8 VAR_9;





 VAR_6 = FUNC_2(VAR_4, &VAR_9, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_9 == 0) {
  FUNC_0(VAR_4->dev, "sense resistor value is 0\n");
  return -VAR_3;
 }
 VAR_7 = 1000 / VAR_9;
 VAR_6 = FUNC_1(VAR_4, &VAR_8, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_5 = VAR_8 * (VAR_1 / VAR_7);
 return 0;
}
