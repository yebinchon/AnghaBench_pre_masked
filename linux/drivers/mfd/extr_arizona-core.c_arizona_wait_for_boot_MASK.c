
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arizona*,int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct arizona *VAR_3)
{
 int VAR_4;






 VAR_4 = FUNC_0(VAR_3, 30, VAR_1,
          VAR_0, VAR_0);

 if (!VAR_4)
  FUNC_2(VAR_3->regmap, VAR_2,
        VAR_0);

 FUNC_1(VAR_3->dev);

 return VAR_4;
}
