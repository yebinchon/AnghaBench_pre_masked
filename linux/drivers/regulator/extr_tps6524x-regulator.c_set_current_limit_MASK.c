
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6524x {int dummy; } ;
struct supply_info {int n_ilimsels; int* ilimsels; int ilimsel; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 struct tps6524x* FUNC_0 (struct regulator_dev*) ;
 size_t FUNC_1 (struct regulator_dev*) ;
 struct supply_info* VAR_1 ;
 int FUNC_2 (struct tps6524x*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2, int VAR_3,
        int VAR_4)
{
 const struct supply_info *VAR_5;
 struct tps6524x *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_2);
 VAR_5 = &VAR_1[FUNC_1(VAR_2)];

 if (VAR_5->n_ilimsels == 1)
  return -VAR_0;

 for (VAR_7 = VAR_5->n_ilimsels - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_3 <= VAR_5->ilimsels[VAR_7] &&
      VAR_4 >= VAR_5->ilimsels[VAR_7])
   return FUNC_2(VAR_6, &VAR_5->ilimsel, VAR_7);
 }

 return -VAR_0;
}
