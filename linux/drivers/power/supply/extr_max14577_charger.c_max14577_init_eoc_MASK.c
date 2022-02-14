
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct max14577_charger {TYPE_1__* max14577; } ;
struct TYPE_2__ {int dev_type; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct max14577_charger *VAR_7,
  unsigned int VAR_8)
{
 unsigned int VAR_9 = 0xf;
 u8 VAR_10;

 switch (VAR_7->max14577->dev_type) {
 case 128:
  if (VAR_8 < 5000)
   return -VAR_2;

  if (VAR_8 >= 7500 && VAR_8 < 10000)
   VAR_9 = 0x0;
  else if (VAR_8 <= 50000) {

   VAR_9 = VAR_8 / 5000;
  } else {
   VAR_8 = FUNC_1(VAR_8, 100000U) - 50000U;
   VAR_9 = 0xa + VAR_8 / 10000;
  }
  break;

 case 129:
 default:
  if (VAR_8 < VAR_4)
   return -VAR_2;

  VAR_8 = FUNC_1(VAR_8, VAR_3);
  VAR_8 -= VAR_4;
  VAR_9 = VAR_8 / VAR_5;
  break;
 }

 VAR_10 = VAR_9 << VAR_1;

 return FUNC_0(VAR_7->max14577->regmap,
   VAR_6, VAR_0,
   VAR_10);
}
