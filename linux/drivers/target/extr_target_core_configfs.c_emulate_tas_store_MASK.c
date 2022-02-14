
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct se_dev_attrib {int emulate_tas; TYPE_1__* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ export_count; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,char*) ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char const*,int*) ;
 struct se_dev_attrib* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_dev_attrib *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->da_dev->export_count) {
  FUNC_1("dev[%p]: Unable to change SE Device TAS while"
   " export_count is %d\n",
   VAR_4->da_dev, VAR_4->da_dev->export_count);
  return -VAR_0;
 }
 VAR_4->emulate_tas = VAR_5;
 FUNC_0("dev[%p]: SE Device TASK_ABORTED status bit: %s\n",
  VAR_4->da_dev, VAR_5 ? "Enabled" : "Disabled");

 return VAR_3;
}
