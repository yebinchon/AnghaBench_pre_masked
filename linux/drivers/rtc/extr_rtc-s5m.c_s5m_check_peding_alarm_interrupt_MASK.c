
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5m_rtc_info {int device_type; TYPE_1__* s5m87xx; int regmap; } ;
struct rtc_wkalrm {int pending; } ;
struct TYPE_2__ {int regmap_pmic; } ;


 int VAR_0 ;


 int VAR_1 ;

 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct s5m_rtc_info *VAR_5,
  struct rtc_wkalrm *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;

 switch (VAR_5->device_type) {
 case 128:
 case 129:
  VAR_7 = FUNC_0(VAR_5->regmap, VAR_4, &VAR_8);
  VAR_8 &= VAR_3;
  break;
 case 130:
 case 131:
 case 132:
  VAR_7 = FUNC_0(VAR_5->s5m87xx->regmap_pmic, VAR_1,
    &VAR_8);
  VAR_8 &= VAR_2;
  break;
 default:
  return -VAR_0;
 }
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_8)
  VAR_6->pending = 1;
 else
  VAR_6->pending = 0;

 return 0;
}
