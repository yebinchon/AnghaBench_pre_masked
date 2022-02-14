
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct da9055_regulator_info {TYPE_1__ reg_desc; } ;


 int FUNC_0 (struct da9055_regulator_info*) ;
 struct da9055_regulator_info* VAR_0 ;

__attribute__((used)) static inline struct da9055_regulator_info *FUNC_1(int VAR_1)
{
 struct da9055_regulator_info *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->reg_desc.id == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
