
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct thermal_zone_device {struct thermal_device_info* devdata; } ;
struct thermal_device_info {int chnl_addr; int curr_temp; int direct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_3, int *VAR_4)
{
 struct thermal_device_info *VAR_5 = VAR_3->devdata;
 uint16_t VAR_6, VAR_7;
 uint8_t VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 VAR_7 = VAR_5->chnl_addr;


 VAR_9 = FUNC_2(VAR_0, VAR_1);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_0, VAR_2);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_6 = (VAR_8 << 2);
 VAR_7++;

 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_8 &= 03;
 VAR_6 += VAR_8;


 VAR_9 = FUNC_0(VAR_5->direct, VAR_6, &VAR_10);
 if (VAR_9 == 0)
  *VAR_4 = VAR_5->curr_temp = VAR_10;
 return VAR_9;
}
