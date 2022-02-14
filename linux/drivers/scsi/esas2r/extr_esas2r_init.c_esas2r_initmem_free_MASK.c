
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct esas2r_mem_desc {int phys_addr; int * virt_addr; scalar_t__ esas2r_data; scalar_t__ esas2r_param; } ;
struct esas2r_adapter {TYPE_1__* pcid; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,size_t,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct esas2r_adapter *VAR_0,
    struct esas2r_mem_desc *VAR_1)
{
 if (VAR_1->virt_addr == ((void*)0))
  return;
 if (VAR_1->phys_addr) {
  int VAR_2 = ((u8 *)VAR_1->virt_addr) -
         ((u8 *)VAR_1->esas2r_data);

  FUNC_0(&VAR_0->pcid->dev,
      (size_t)VAR_1->esas2r_param,
      VAR_1->esas2r_data,
      (dma_addr_t)(VAR_1->phys_addr - VAR_2));
 } else {
  FUNC_1(VAR_1->esas2r_data);
 }

 VAR_1->virt_addr = ((void*)0);
}
