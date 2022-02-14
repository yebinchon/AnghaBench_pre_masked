
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct as3711_bl_supply {TYPE_1__* pdata; struct as3711* as3711; } ;
struct as3711 {int regmap; } ;
struct TYPE_2__ {int su2_fbprot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct as3711_bl_supply *VAR_2)
{
 struct as3711 *VAR_3 = VAR_2->as3711;
 int VAR_4 = FUNC_0(VAR_3->regmap, VAR_1,
         3, VAR_2->pdata->su2_fbprot);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3->regmap,
      VAR_0, 1, 0);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3->regmap,
      VAR_0, 1, 1);
 return VAR_4;
}
