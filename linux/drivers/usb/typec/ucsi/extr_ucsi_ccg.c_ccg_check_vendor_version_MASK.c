
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct version_format {int build; } ;
struct ucsi_ccg {scalar_t__ fw_build; struct device* dev; } ;
struct TYPE_2__ {int build; } ;
struct fw_config_table {TYPE_1__ app; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ucsi_ccg *VAR_0,
         struct version_format *VAR_1,
         struct fw_config_table *VAR_2)
{
 struct device *VAR_3 = VAR_0->dev;


 if (FUNC_1(VAR_1->build) != VAR_0->fw_build) {
  FUNC_0(VAR_3, "current fw is not from supported vendor\n");
  return 0;
 }


 if (FUNC_1(VAR_2->app.build) != VAR_0->fw_build) {
  FUNC_0(VAR_3, "new fw is not from supported vendor\n");
  return 0;
 }
 return 1;
}
