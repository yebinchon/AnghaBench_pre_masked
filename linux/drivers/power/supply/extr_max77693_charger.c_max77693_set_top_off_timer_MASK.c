
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_charger {TYPE_1__* max77693; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct max77693_charger *VAR_4,
  unsigned long VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5 > 70)
  return -VAR_2;

 VAR_6 = VAR_5 / 10;
 VAR_6 <<= VAR_1;

 return FUNC_0(VAR_4->max77693->regmap,
   VAR_3,
   VAR_0, VAR_6);
}
