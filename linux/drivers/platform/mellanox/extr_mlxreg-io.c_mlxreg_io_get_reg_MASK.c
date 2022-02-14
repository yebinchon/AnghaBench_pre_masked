
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxreg_core_data {int mask; scalar_t__ bit; int reg; } ;


 int FUNC_0 (void*,int ,int*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, struct mlxreg_core_data *VAR_1, u32 VAR_2,
    bool VAR_3, u32 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1->reg, VAR_4);
 if (VAR_5)
  goto access_error;
 if (!VAR_1->bit) {

  if (VAR_3) {

   *VAR_4 = !!(*VAR_4 & ~VAR_1->mask);
  } else {

   *VAR_4 &= VAR_1->mask;
   if (VAR_2)
    *VAR_4 |= ~VAR_1->mask;
  }
 } else if (VAR_1->mask) {

  if (VAR_3) {

   *VAR_4 = FUNC_2(*VAR_4 & VAR_1->mask, (VAR_1->bit - 1));
  } else {

   VAR_2 = FUNC_1(VAR_2, VAR_1->bit - 1) & VAR_1->mask;

   *VAR_4 = (*VAR_4 & ~VAR_1->mask) | VAR_2;
  }
 }

access_error:
 return VAR_5;
}
