
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {scalar_t__ size; } ;
typedef int ssize_t ;
typedef size_t loff_t ;


 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct pci_dev*,size_t,size_t,char*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0, struct kobject *VAR_1,
         struct bin_attribute *VAR_2, char *VAR_3,
         loff_t VAR_4, size_t VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(FUNC_0(VAR_1));

 if (VAR_2->size > 0) {
  if (VAR_4 > VAR_2->size)
   VAR_5 = 0;
  else if (VAR_5 > VAR_2->size - VAR_4)
   VAR_5 = VAR_2->size - VAR_4;
 }

 return FUNC_1(VAR_6, VAR_4, VAR_5, VAR_3);
}
