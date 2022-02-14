
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regulation_constraints* constraints; } ;
struct regulation_constraints {int min_uV; int max_uV; int uV_offset; int min_uA; int max_uA; int valid_modes_mask; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,char*,char*) ;
 int FUNC_2 (struct regulator_dev*,char*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*,int ) ;
 scalar_t__ FUNC_5 (char*,size_t,char*,...) ;

__attribute__((used)) static void FUNC_6(struct regulator_dev *VAR_5)
{
 struct regulation_constraints *VAR_6 = VAR_5->constraints;
 char VAR_7[160] = "";
 size_t VAR_8 = sizeof(VAR_7) - 1;
 int VAR_9 = 0;
 int VAR_10;

 if (VAR_6->min_uV && VAR_6->max_uV) {
  if (VAR_6->min_uV == VAR_6->max_uV)
   VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "%d mV ",
        VAR_6->min_uV / 1000);
  else
   VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9,
        "%d <--> %d mV ",
        VAR_6->min_uV / 1000,
        VAR_6->max_uV / 1000);
 }

 if (!VAR_6->min_uV ||
     VAR_6->min_uV != VAR_6->max_uV) {
  VAR_10 = FUNC_3(VAR_5);
  if (VAR_10 > 0)
   VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9,
        "at %d mV ", VAR_10 / 1000);
 }

 if (VAR_6->uV_offset)
  VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "%dmV offset ",
       VAR_6->uV_offset / 1000);

 if (VAR_6->min_uA && VAR_6->max_uA) {
  if (VAR_6->min_uA == VAR_6->max_uA)
   VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "%d mA ",
        VAR_6->min_uA / 1000);
  else
   VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9,
        "%d <--> %d mA ",
        VAR_6->min_uA / 1000,
        VAR_6->max_uA / 1000);
 }

 if (!VAR_6->min_uA ||
     VAR_6->min_uA != VAR_6->max_uA) {
  VAR_10 = FUNC_0(VAR_5);
  if (VAR_10 > 0)
   VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9,
        "at %d mA ", VAR_10 / 1000);
 }

 if (VAR_6->valid_modes_mask & VAR_1)
  VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "fast ");
 if (VAR_6->valid_modes_mask & VAR_3)
  VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "normal ");
 if (VAR_6->valid_modes_mask & VAR_2)
  VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "idle ");
 if (VAR_6->valid_modes_mask & VAR_4)
  VAR_9 += FUNC_5(VAR_7 + VAR_9, VAR_8 - VAR_9, "standby");

 if (!VAR_9)
  FUNC_5(VAR_7, VAR_8, "no parameters");

 FUNC_1(VAR_5, "%s\n", VAR_7);

 if ((VAR_6->min_uV != VAR_6->max_uV) &&
     !FUNC_4(VAR_5, VAR_0))
  FUNC_2(VAR_5,
     "Voltage range but no REGULATOR_CHANGE_VOLTAGE\n");
}
