
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct octeon_device *VAR_0, u64 VAR_1)
{
 FUNC_1(&VAR_0->pci_dev->dev, "Error Intr: 0x%016llx\n",
  FUNC_0(VAR_1));
}
