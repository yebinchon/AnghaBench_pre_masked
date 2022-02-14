
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ flags; } ;
struct pci_dev {struct resource* resource; scalar_t__ subordinate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,struct resource*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,char*,unsigned long long,unsigned long long,unsigned long long) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(VAR_2);
 char *VAR_6 = VAR_4;
 int VAR_7;
 int VAR_8;
 resource_size_t VAR_9, VAR_10;

 if (VAR_5->subordinate)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct resource *VAR_11 = &VAR_5->resource[VAR_7];
  FUNC_0(VAR_5, VAR_7, VAR_11, &VAR_9, &VAR_10);
  VAR_6 += FUNC_1(VAR_6, "0x%016llx 0x%016llx 0x%016llx\n",
          (unsigned long long)VAR_9,
          (unsigned long long)VAR_10,
          (unsigned long long)VAR_11->flags);
 }
 return (VAR_6 - VAR_4);
}
