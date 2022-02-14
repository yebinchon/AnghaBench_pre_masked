
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct regulator_dev {int bypass_count; int debugfs; int open_count; int use_count; TYPE_2__* desc; TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int name ;
struct TYPE_4__ {char const* name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int VAR_1 ;
 char* FUNC_2 (struct device*) ;
 char* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*,char*) ;
 int FUNC_5 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static void FUNC_6(struct regulator_dev *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev.parent;
 const char *VAR_4 = FUNC_3(VAR_2);
 char VAR_5[VAR_0];


 if (VAR_3 && VAR_4 == VAR_2->desc->name) {
  FUNC_5(VAR_5, sizeof(VAR_5), "%s-%s", FUNC_2(VAR_3),
    VAR_4);
  VAR_4 = VAR_5;
 }

 VAR_2->debugfs = FUNC_0(VAR_4, VAR_1);
 if (!VAR_2->debugfs) {
  FUNC_4(VAR_2, "Failed to create debugfs directory\n");
  return;
 }

 FUNC_1("use_count", 0444, VAR_2->debugfs,
      &VAR_2->use_count);
 FUNC_1("open_count", 0444, VAR_2->debugfs,
      &VAR_2->open_count);
 FUNC_1("bypass_count", 0444, VAR_2->debugfs,
      &VAR_2->bypass_count);
}
