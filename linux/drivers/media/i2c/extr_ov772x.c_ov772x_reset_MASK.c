
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov772x_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ov772x_priv *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->regmap, VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(1000, 5000);

 return FUNC_0(VAR_4->regmap, VAR_0, VAR_3,
      VAR_3);
}
