
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76x02_dev {int dummy; } ;
typedef enum mt76x2_cal_channel_group { ____Placeholder_mt76x2_cal_channel_group } mt76x2_cal_channel_group ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u8
FUNC_2(struct mt76x02_dev *VAR_3, u8 VAR_4)
{
 enum mt76x2_cal_channel_group VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 switch (VAR_5) {
 case 132:
  return FUNC_0(VAR_3,
       VAR_0);
 case 131:
  return FUNC_0(VAR_3,
       VAR_0) >> 8;
 case 130:
  return FUNC_0(VAR_3,
       VAR_1);
 case 129:
  return FUNC_0(VAR_3,
       VAR_1) >> 8;
 case 128:
  return FUNC_0(VAR_3,
       VAR_2);
 default:
  return FUNC_0(VAR_3,
       VAR_2) >> 8;
 }
}
