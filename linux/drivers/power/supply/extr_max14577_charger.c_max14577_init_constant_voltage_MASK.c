
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max14577_charger {TYPE_1__* max14577; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct max14577_charger *VAR_6,
  unsigned int VAR_7)
{
 u8 VAR_8;

 if (VAR_7 < VAR_4 ||
   VAR_7 > VAR_3)
  return -VAR_1;

 if (VAR_7 == 4200000)
  VAR_8 = 0x0;
 else if (VAR_7 == VAR_3)
  VAR_8 = 0x1f;
 else if (VAR_7 <= 4280000) {
  unsigned int VAR_9 = VAR_7;

  VAR_9 -= VAR_4;
  VAR_9 /= VAR_5;
  if (VAR_7 <= 4180000)
   VAR_8 = 0x1 + VAR_9;
  else
   VAR_8 = VAR_9;
 } else
  return -VAR_1;

 VAR_8 <<= VAR_0;

 return FUNC_0(VAR_6->max14577->regmap,
   VAR_2, VAR_8);
}
