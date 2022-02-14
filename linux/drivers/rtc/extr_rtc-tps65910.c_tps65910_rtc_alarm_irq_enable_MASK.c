
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps65910 {int regmap; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tps65910* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
      unsigned int VAR_3)
{
 struct tps65910 *VAR_4 = FUNC_0(VAR_2->parent);
 u8 VAR_5 = 0;

 if (VAR_3)
  VAR_5 = VAR_1;

 return FUNC_1(VAR_4->regmap, VAR_0, VAR_5);
}
