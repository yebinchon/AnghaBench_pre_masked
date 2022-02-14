
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ofa_memory {int bytes_allocated; int signature; int version; } ;
struct pqi_ctrl_info {struct pqi_ofa_memory* pqi_ofa_mem_virt_addr; int pqi_ofa_mem_dma_handle; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 struct pqi_ofa_memory* FUNC_2 (struct device*,int ,int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct pqi_ctrl_info *VAR_4,
 u32 VAR_5)
{
 struct pqi_ofa_memory *VAR_6;
 struct device *VAR_7;

 VAR_7 = &VAR_4->pci_dev->dev;
 VAR_6 = FUNC_2(VAR_7,
         VAR_1,
         &VAR_4->pqi_ofa_mem_dma_handle,
         VAR_0);

 if (!VAR_6)
  return;

 FUNC_5(VAR_3, &VAR_6->version);
 FUNC_3(&VAR_6->signature, VAR_2,
     sizeof(VAR_6->signature));
 VAR_6->bytes_allocated = FUNC_0(VAR_5);

 VAR_4->pqi_ofa_mem_virt_addr = VAR_6;

 if (FUNC_4(VAR_4) < 0) {
  FUNC_1(VAR_7, "Failed to allocate host buffer of size = %u",
   VAR_5);
 }
}
