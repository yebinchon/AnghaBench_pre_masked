
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int dvsec_afu_control_pos; } ;
struct ocxl_afu {TYPE_1__ config; } ;


 int FUNC_0 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0, struct ocxl_afu *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->config.dvsec_afu_control_pos, 1);

 return 0;
}
