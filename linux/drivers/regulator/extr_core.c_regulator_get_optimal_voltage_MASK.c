
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_2__ {int base; } ;
struct coupling_desc {struct regulator_dev** coupled_rdevs; } ;
struct regulator_dev {TYPE_1__ mutex; struct regulation_constraints* constraints; struct coupling_desc coupling_desc; } ;
struct regulation_constraints {int min_uV; int max_uV; int* max_spread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct regulator_dev*,int*,int*,int ) ;
 int FUNC_5 (struct regulator_dev*,int*,int*) ;
 int FUNC_6 (struct regulator_dev*) ;
 int FUNC_7 (struct regulator_dev*,int*,int*) ;

__attribute__((used)) static int FUNC_8(struct regulator_dev *VAR_3,
      int *VAR_4,
      int *VAR_5, int *VAR_6,
      suspend_state_t VAR_7,
      int VAR_8)
{
 struct coupling_desc *VAR_9 = &VAR_3->coupling_desc;
 struct regulator_dev **VAR_10 = VAR_9->coupled_rdevs;
 struct regulation_constraints *VAR_11 = VAR_3->constraints;
 int VAR_12 = 0, VAR_13 = VAR_1;
 int VAR_14 = 0, VAR_15 = VAR_1;
 int VAR_16 = 0, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;
 bool VAR_22;

 *VAR_4 = -1;





 if (VAR_8 == 1) {




  VAR_12 = VAR_11->min_uV;
  VAR_13 = VAR_11->max_uV;

  VAR_20 = FUNC_4(VAR_3,
      &VAR_12,
      &VAR_13, VAR_7);
  if (VAR_20 < 0)
   return VAR_20;

  VAR_18 = VAR_12;
  VAR_22 = 1;

  goto finish;
 }


 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
  int VAR_23 = 0;
  int VAR_24 = VAR_1;

  FUNC_1(&VAR_10[VAR_19]->mutex.base);

  VAR_20 = FUNC_4(VAR_10[VAR_19],
      &VAR_23,
      &VAR_24, VAR_7);
  if (VAR_20 < 0)
   return VAR_20;

  VAR_20 = FUNC_5(VAR_10[VAR_19], &VAR_23, &VAR_24);
  if (VAR_20 < 0)
   return VAR_20;

  VAR_16 = FUNC_2(VAR_16, VAR_23);

  if (VAR_19 == 0) {
   VAR_12 = VAR_23;
   VAR_13 = VAR_24;
  }
 }

 VAR_21 = VAR_11->max_spread[0];






 VAR_17 = FUNC_2(VAR_12, VAR_16 - VAR_21);





 for (VAR_19 = 1; VAR_19 < VAR_8; VAR_19++) {
  int VAR_25;

  if (!FUNC_0(VAR_10[VAR_19]))
   continue;

  VAR_25 = FUNC_6(VAR_10[VAR_19]);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_15 = FUNC_3(VAR_25, VAR_15);
  VAR_14 = FUNC_2(VAR_25, VAR_14);
 }


 if (VAR_14 == 0) {
  VAR_18 = VAR_17;
 } else {




  VAR_18 = FUNC_2(VAR_17, VAR_14 - VAR_21);
  VAR_18 = FUNC_3(VAR_18, VAR_15 + VAR_21);
 }

 if (VAR_18 > VAR_13)
  return -VAR_0;

 VAR_22 = (VAR_18 == VAR_17);
 VAR_12 = VAR_18;

finish:

 if (VAR_7 == VAR_2) {
  VAR_20 = FUNC_7(VAR_3, VAR_4,
         &VAR_12);
  if (VAR_20 < 0)
   return VAR_20;

  if (VAR_20 == 0)
   VAR_22 = 0;
 }


 if (VAR_8 > 1 && *VAR_4 == -1) {

  if (FUNC_0(VAR_3)) {
   VAR_20 = FUNC_6(VAR_3);
   if (VAR_20 < 0)
    return VAR_20;

   *VAR_4 = VAR_20;
  } else {
   *VAR_4 = VAR_12;
  }
 }

 *VAR_5 = VAR_12;
 *VAR_6 = VAR_13;

 return VAR_22;
}
