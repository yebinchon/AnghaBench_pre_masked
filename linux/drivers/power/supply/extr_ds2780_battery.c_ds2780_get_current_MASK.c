
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2780_device_info {int dev; } ;
typedef int s16 ;
typedef enum current_types { ____Placeholder_current_types } current_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ds2780_device_info*,int*,int) ;
 int FUNC_2 (struct ds2780_device_info*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct ds2780_device_info *VAR_7,
 enum current_types VAR_8, int *VAR_9)
{
 int VAR_10, VAR_11;
 s16 VAR_12;
 u8 VAR_13, VAR_14;





 VAR_10 = FUNC_2(VAR_7, &VAR_13, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_13 == 0) {
  FUNC_0(VAR_7->dev, "sense resistor value is 0\n");
  return -VAR_6;
 }
 VAR_11 = 1000 / VAR_13;

 if (VAR_8 == VAR_1)
  VAR_14 = VAR_2;
 else if (VAR_8 == VAR_0)
  VAR_14 = VAR_4;
 else
  return -VAR_6;
 VAR_10 = FUNC_1(VAR_7, &VAR_12, VAR_14);
 if (VAR_10 < 0)
  return VAR_10;

 *VAR_9 = VAR_12 * (VAR_3 / VAR_11);
 return 0;
}
