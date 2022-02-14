
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pci_ecam_ops {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 struct of_device_id* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct platform_device*,struct pci_ecam_ops*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 const struct of_device_id *VAR_2;
 struct pci_ecam_ops *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1->dev.of_node);
 VAR_3 = (struct pci_ecam_ops *)VAR_2->data;

 return FUNC_1(VAR_1, VAR_3);
}
