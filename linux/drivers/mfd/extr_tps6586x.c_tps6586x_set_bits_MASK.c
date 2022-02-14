
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps6586x {int regmap; } ;
struct device {int dummy; } ;


 struct tps6586x* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int,int ,int ) ;

int FUNC_2(struct device *VAR_0, int VAR_1, uint8_t VAR_2)
{
 struct tps6586x *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3->regmap, VAR_1, VAR_2, VAR_2);
}
