
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {int dummy; } ;
struct platform_device {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct platform_device*,struct property_entry*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_2, struct platform_device *VAR_3)
{
 if (VAR_2->vendor == VAR_1 &&
     VAR_2->device == VAR_0) {
  struct property_entry VAR_4[] = {
   { },
  };

  return FUNC_0(VAR_3, VAR_4);
 }

 return 0;
}
