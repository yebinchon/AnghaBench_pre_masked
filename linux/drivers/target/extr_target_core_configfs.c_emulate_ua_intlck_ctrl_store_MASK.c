
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_dev_attrib {int emulate_ua_intlck_ctrl; TYPE_1__* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ export_count; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (char*,...) ;
 struct se_dev_attrib* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_dev_attrib *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 != 0 && VAR_5 != 1 && VAR_5 != 2) {
  FUNC_2("Illegal value %d\n", VAR_5);
  return -VAR_0;
 }

 if (VAR_4->da_dev->export_count) {
  FUNC_2("dev[%p]: Unable to change SE Device"
   " UA_INTRLCK_CTRL while export_count is %d\n",
   VAR_4->da_dev, VAR_4->da_dev->export_count);
  return -VAR_0;
 }
 VAR_4->emulate_ua_intlck_ctrl = VAR_5;
 FUNC_1("dev[%p]: SE Device UA_INTRLCK_CTRL flag: %d\n",
  VAR_4->da_dev, VAR_5);
 return VAR_3;
}
