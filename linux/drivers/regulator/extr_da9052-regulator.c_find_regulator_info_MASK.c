
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int id; } ;
struct da9052_regulator_info {TYPE_1__ reg_desc; } ;


 int FUNC_0 (struct da9052_regulator_info*) ;





 struct da9052_regulator_info* VAR_0 ;
 struct da9052_regulator_info* VAR_1 ;

__attribute__((used)) static inline struct da9052_regulator_info *FUNC_1(u8 VAR_2,
         int VAR_3)
{
 struct da9052_regulator_info *VAR_4;
 int VAR_5;

 switch (VAR_2) {
 case 132:
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
   VAR_4 = &VAR_0[VAR_5];
   if (VAR_4->reg_desc.id == VAR_3)
    return VAR_4;
  }
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   VAR_4 = &VAR_1[VAR_5];
   if (VAR_4->reg_desc.id == VAR_3)
    return VAR_4;
  }
  break;
 }

 return ((void*)0);
}
