
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct netxen_adapter {scalar_t__ (* pci_mem_write ) (struct netxen_adapter*,int ,int ) ;} ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 struct netxen_adapter* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (struct netxen_adapter*,int ,size_t) ;
 scalar_t__ FUNC_4 (struct netxen_adapter*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_1, struct kobject *VAR_2,
  struct bin_attribute *VAR_3, char *VAR_4,
  loff_t VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = FUNC_1(VAR_2);
 struct netxen_adapter *VAR_8 = FUNC_0(VAR_7);
 u64 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_5, VAR_6);
 if (VAR_10 != 0)
  return VAR_10;

 FUNC_2(&VAR_9, VAR_4, VAR_6);

 if (VAR_8->pci_mem_write(VAR_8, VAR_5, VAR_9))
  return -VAR_0;

 return VAR_6;
}
