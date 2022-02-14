
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct reg_field {size_t reg; int msb; int lsb; } ;
struct ocelot {size_t** map; int * regfields; int * targets; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int ,struct reg_field) ;

int FUNC_3(struct ocelot *VAR_3,
     const struct reg_field *const VAR_4)
{
 unsigned int VAR_5;
 u16 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct reg_field VAR_7 = {};
  u32 VAR_8 = VAR_4[VAR_5].reg;

  if (!VAR_8)
   continue;

  VAR_6 = VAR_4[VAR_5].reg >> VAR_2;

  VAR_7.reg = VAR_3->map[VAR_6][VAR_8 & VAR_1];
  VAR_7.lsb = VAR_4[VAR_5].lsb;
  VAR_7.msb = VAR_4[VAR_5].msb;

  VAR_3->regfields[VAR_5] =
  FUNC_2(VAR_3->dev,
     VAR_3->targets[VAR_6],
     VAR_7);

  if (FUNC_0(VAR_3->regfields[VAR_5]))
   return FUNC_1(VAR_3->regfields[VAR_5]);
 }

 return 0;
}
