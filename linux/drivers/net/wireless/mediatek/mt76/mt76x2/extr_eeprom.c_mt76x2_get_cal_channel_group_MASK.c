
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mt76x2_cal_channel_group { ____Placeholder_mt76x2_cal_channel_group } mt76x2_cal_channel_group ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum mt76x2_cal_channel_group
FUNC_0(int VAR_6)
{
 if (VAR_6 >= 184 && VAR_6 <= 196)
  return VAR_0;
 if (VAR_6 <= 48)
  return VAR_1;
 if (VAR_6 <= 64)
  return VAR_2;
 if (VAR_6 <= 114)
  return VAR_3;
 if (VAR_6 <= 144)
  return VAR_4;
 return VAR_5;
}
