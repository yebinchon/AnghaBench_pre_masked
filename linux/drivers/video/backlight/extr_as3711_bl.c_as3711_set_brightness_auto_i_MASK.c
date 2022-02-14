
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3711_bl_supply {struct as3711_bl_pdata* pdata; struct as3711* as3711; } ;
struct as3711_bl_pdata {scalar_t__ su2_auto_curr3; scalar_t__ su2_auto_curr2; scalar_t__ su2_auto_curr1; } ;
struct as3711_bl_data {int dummy; } ;
struct as3711 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct as3711_bl_supply* FUNC_1 (struct as3711_bl_data*) ;

__attribute__((used)) static int FUNC_2(struct as3711_bl_data *VAR_3,
     unsigned int VAR_4)
{
 struct as3711_bl_supply *VAR_5 = FUNC_1(VAR_3);
 struct as3711 *VAR_6 = VAR_5->as3711;
 const struct as3711_bl_pdata *VAR_7 = VAR_5->pdata;
 int VAR_8 = 0;


 if (VAR_7->su2_auto_curr1)
  VAR_8 = FUNC_0(VAR_6->regmap, VAR_0,
       VAR_4);
 if (!VAR_8 && VAR_7->su2_auto_curr2)
  VAR_8 = FUNC_0(VAR_6->regmap, VAR_1,
       VAR_4);
 if (!VAR_8 && VAR_7->su2_auto_curr3)
  VAR_8 = FUNC_0(VAR_6->regmap, VAR_2,
       VAR_4);

 return VAR_8;
}
