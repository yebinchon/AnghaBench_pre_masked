
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dvsec_afu_control_pos; } ;
struct ocxl_afu {TYPE_3__ config; TYPE_2__* fn; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ocxl_afu *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0->fn->dev.parent);

 FUNC_0(VAR_1, VAR_0->config.dvsec_afu_control_pos, 0);
}
