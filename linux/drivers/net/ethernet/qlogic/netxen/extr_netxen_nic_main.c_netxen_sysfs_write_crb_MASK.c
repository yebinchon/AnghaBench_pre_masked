
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct netxen_adapter*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct netxen_adapter* FUNC_3 (struct device*) ;
 struct device* FUNC_4 (struct kobject*) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (struct netxen_adapter*,int ,int ) ;
 int FUNC_7 (struct netxen_adapter*,int ,size_t) ;

__attribute__((used)) static ssize_t
FUNC_8(struct file *VAR_2, struct kobject *VAR_3,
  struct bin_attribute *VAR_4,
  char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct device *VAR_8 = FUNC_4(VAR_3);
 struct netxen_adapter *VAR_9 = FUNC_3(VAR_8);
 u32 VAR_10;
 u64 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_9, VAR_6, VAR_7);
 if (VAR_12 != 0)
  return VAR_12;

 if (FUNC_2(VAR_9->ahw.revision_id) &&
  FUNC_0(VAR_6, VAR_0,
     VAR_1)) {
  FUNC_5(&VAR_11, VAR_5, VAR_7);
  FUNC_6(VAR_9, VAR_6, VAR_11);
 } else {
  FUNC_5(&VAR_10, VAR_5, VAR_7);
  FUNC_1(VAR_9, VAR_6, VAR_10);
 }

 return VAR_7;
}
