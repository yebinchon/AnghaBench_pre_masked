
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; scalar_t__ export_count; } ;
struct se_dev_attrib {struct se_device* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* format_prot ) (struct se_device*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct se_device*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct se_device*) ;
 int FUNC_4 (struct se_device*) ;
 struct se_dev_attrib* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct se_dev_attrib *VAR_6 = FUNC_5(VAR_3);
 struct se_device *VAR_7 = VAR_6->da_dev;
 bool VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_8)
  return VAR_5;

 if (!VAR_7->transport->format_prot) {
  FUNC_1("DIF protection format not supported by backend %s\n",
         VAR_7->transport->name);
  return -VAR_2;
 }
 if (!FUNC_4(VAR_7)) {
  FUNC_1("DIF protection format requires device to be configured\n");
  return -VAR_1;
 }
 if (VAR_7->export_count) {
  FUNC_1("dev[%p]: Unable to format SE Device PROT type while"
         " export_count is %d\n", VAR_7, VAR_7->export_count);
  return -VAR_0;
 }

 VAR_9 = VAR_7->transport->format_prot(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_0("dev[%p]: SE Device Protection Format complete\n", VAR_7);
 return VAR_5;
}
