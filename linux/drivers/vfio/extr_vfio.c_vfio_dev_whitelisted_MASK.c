
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ hdr_type; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 struct pci_dev* FUNC_3 (struct device*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_2, struct device_driver *VAR_3)
{
 if (FUNC_1(VAR_2)) {
  struct pci_dev *VAR_4 = FUNC_3(VAR_2);

  if (VAR_4->hdr_type != VAR_0)
   return 1;
 }

 return FUNC_2(VAR_1,
       FUNC_0(VAR_1),
       VAR_3->name) >= 0;
}
