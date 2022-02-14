
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds3232 {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ds3232* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, unsigned int VAR_3)
{
 struct ds3232 *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->regmap, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3)

  VAR_5 |= VAR_1;
 else

  VAR_5 &= ~(VAR_1);
 VAR_6 = FUNC_2(VAR_4->regmap, VAR_0, VAR_5);

 return VAR_6;
}
