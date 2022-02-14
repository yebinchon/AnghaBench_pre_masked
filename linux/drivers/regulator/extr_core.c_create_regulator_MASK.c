
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct regulator_dev {int debugfs; TYPE_1__ dev; int consumer_list; } ;
struct regulator {int always_on; int list; int debugfs; TYPE_2__* voltage; int uA_load; int * supply_name; struct device* dev; struct regulator_dev* rdev; } ;
struct TYPE_6__ {char* name; } ;
struct device {TYPE_3__ kobj; } ;
struct TYPE_5__ {int max_uV; int min_uV; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int,int ,struct regulator*,int *) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int FUNC_4 (struct regulator*) ;
 int * FUNC_5 (char*,int ) ;
 int * FUNC_6 (char const*,int ) ;
 struct regulator* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct regulator_dev*,char*,...) ;
 int FUNC_11 (struct regulator_dev*) ;
 int FUNC_12 (struct regulator_dev*,int ) ;
 int FUNC_13 (struct regulator_dev*) ;
 int FUNC_14 (char*,int,char*,char*,char const*) ;
 int FUNC_15 (int *,TYPE_3__*,char*) ;

__attribute__((used)) static struct regulator *FUNC_16(struct regulator_dev *VAR_5,
       struct device *VAR_6,
       const char *VAR_7)
{
 struct regulator *VAR_8;
 char VAR_9[VAR_3];
 int VAR_10, VAR_11;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 FUNC_11(VAR_5);
 VAR_8->rdev = VAR_5;
 FUNC_8(&VAR_8->list, &VAR_5->consumer_list);

 if (VAR_6) {
  VAR_8->dev = VAR_6;


  VAR_11 = FUNC_14(VAR_9, VAR_3, "%s-%s",
    VAR_6->kobj.name, VAR_7);
  if (VAR_11 >= VAR_3)
   goto overflow_err;

  VAR_8->supply_name = FUNC_5(VAR_9, VAR_0);
  if (VAR_8->supply_name == ((void*)0))
   goto overflow_err;

  VAR_10 = FUNC_15(&VAR_5->dev.kobj, &VAR_6->kobj,
     VAR_9);
  if (VAR_10) {
   FUNC_10(VAR_5, "could not add device link %s err %d\n",
      VAR_6->kobj.name, VAR_10);

  }
 } else {
  VAR_8->supply_name = FUNC_6(VAR_7, VAR_0);
  if (VAR_8->supply_name == ((void*)0))
   goto overflow_err;
 }

 VAR_8->debugfs = FUNC_1(VAR_8->supply_name,
      VAR_5->debugfs);
 if (!VAR_8->debugfs) {
  FUNC_10(VAR_5, "Failed to create debugfs directory\n");
 } else {
  FUNC_3("uA_load", 0444, VAR_8->debugfs,
       &VAR_8->uA_load);
  FUNC_3("min_uV", 0444, VAR_8->debugfs,
       &VAR_8->voltage[VAR_1].min_uV);
  FUNC_3("max_uV", 0444, VAR_8->debugfs,
       &VAR_8->voltage[VAR_1].max_uV);
  FUNC_2("constraint_flags", 0444,
        VAR_8->debugfs, VAR_8,
        &VAR_4);
 }






 if (!FUNC_12(VAR_5, VAR_2) &&
     FUNC_0(VAR_5))
  VAR_8->always_on = 1;

 FUNC_13(VAR_5);
 return VAR_8;
overflow_err:
 FUNC_9(&VAR_8->list);
 FUNC_4(VAR_8);
 FUNC_13(VAR_5);
 return ((void*)0);
}
