
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_ops {int (* list_voltage ) (struct regulator_dev*,int) ;} ;
struct regulator_dev {TYPE_2__* desc; TYPE_1__* constraints; } ;
struct regulation_constraints {int min_uV; int max_uV; } ;
struct TYPE_4__ {int n_voltages; struct regulator_ops* ops; } ;
struct TYPE_3__ {int min_uV; int max_uV; scalar_t__ apply_uV; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (struct regulator_dev*,char*,int,int) ;
 int FUNC_2 (struct regulator_dev*,char*,...) ;
 int FUNC_3 (struct regulator_dev*,char*,int,int,...) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_4,
 struct regulation_constraints *VAR_5)
{
 const struct regulator_ops *VAR_6 = VAR_4->desc->ops;
 int VAR_7;


 if (VAR_4->constraints->apply_uV &&
     VAR_4->constraints->min_uV && VAR_4->constraints->max_uV) {
  int VAR_8, VAR_9;
  int VAR_10 = FUNC_4(VAR_4);

  if (VAR_10 == -VAR_1) {

   FUNC_3(VAR_4, "Setting %d-%duV\n",
      VAR_4->constraints->min_uV,
      VAR_4->constraints->max_uV);
   FUNC_0(VAR_4,
        VAR_4->constraints->min_uV,
        VAR_4->constraints->max_uV);
   VAR_10 = FUNC_4(VAR_4);
  }

  if (VAR_10 < 0) {
   FUNC_2(VAR_4,
     "failed to get the current voltage(%d)\n",
     VAR_10);
   return VAR_10;
  }






  VAR_8 = VAR_10;
  VAR_9 = VAR_10;

  if (VAR_10 < VAR_4->constraints->min_uV) {
   VAR_8 = VAR_4->constraints->min_uV;
   VAR_9 = VAR_4->constraints->min_uV;
  }

  if (VAR_10 > VAR_4->constraints->max_uV) {
   VAR_8 = VAR_4->constraints->max_uV;
   VAR_9 = VAR_4->constraints->max_uV;
  }

  if (VAR_8 != VAR_10 || VAR_9 != VAR_10) {
   FUNC_3(VAR_4, "Bringing %duV into %d-%duV\n",
      VAR_10, VAR_8, VAR_9);
   VAR_7 = FUNC_0(
    VAR_4, VAR_8, VAR_9);
   if (VAR_7 < 0) {
    FUNC_2(VAR_4,
     "failed to apply %d-%duV constraint(%d)\n",
     VAR_8, VAR_9, VAR_7);
    return VAR_7;
   }
  }
 }




 if (VAR_6->list_voltage && VAR_4->desc->n_voltages) {
  int VAR_11 = VAR_4->desc->n_voltages;
  int VAR_12;
  int VAR_13 = VAR_2;
  int VAR_14 = VAR_3;
  int VAR_15 = VAR_5->min_uV;
  int VAR_16 = VAR_5->max_uV;



  if (VAR_11 == 1 && !VAR_15) {
   VAR_15 = 1;
   VAR_16 = VAR_2;
   VAR_5->min_uV = VAR_15;
   VAR_5->max_uV = VAR_16;
  }


  if ((VAR_15 == 0) && (VAR_16 == 0))
   return 0;


  if (VAR_15 <= 0 || VAR_16 <= 0 || VAR_16 < VAR_15) {
   FUNC_2(VAR_4, "invalid voltage constraints\n");
   return -VAR_0;
  }


  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   int VAR_17;

   VAR_17 = VAR_6->list_voltage(VAR_4, VAR_12);
   if (VAR_17 <= 0)
    continue;


   if (VAR_17 >= VAR_15 && VAR_17 < VAR_13)
    VAR_13 = VAR_17;
   if (VAR_17 <= VAR_16 && VAR_17 > VAR_14)
    VAR_14 = VAR_17;
  }


  if (VAR_14 < VAR_13) {
   FUNC_2(VAR_4,
     "unsupportable voltage constraints %u-%uuV\n",
     VAR_13, VAR_14);
   return -VAR_0;
  }


  if (VAR_5->min_uV < VAR_13) {
   FUNC_1(VAR_4, "override min_uV, %d -> %d\n",
     VAR_5->min_uV, VAR_13);
   VAR_5->min_uV = VAR_13;
  }
  if (VAR_5->max_uV > VAR_14) {
   FUNC_1(VAR_4, "override max_uV, %d -> %d\n",
     VAR_5->max_uV, VAR_14);
   VAR_5->max_uV = VAR_14;
  }
 }

 return 0;
}
