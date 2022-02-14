
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_fgu_data *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->regmap,
     VAR_3->base + VAR_1,
     VAR_0,
     VAR_0);
 if (VAR_5)
  return VAR_5;







 FUNC_1(200);

 VAR_5 = FUNC_0(VAR_3->regmap,
     VAR_3->base + VAR_2,
     VAR_0, VAR_4);
 if (VAR_5)
  return VAR_5;







 FUNC_1(200);






 return FUNC_0(VAR_3->regmap,
      VAR_3->base + VAR_1,
      VAR_0, 0);
}
