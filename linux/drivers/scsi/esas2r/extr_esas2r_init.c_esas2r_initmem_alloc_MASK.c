
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct esas2r_mem_desc {scalar_t__ size; int * virt_addr; scalar_t__ phys_addr; int * esas2r_data; scalar_t__ esas2r_param; } ;
struct esas2r_adapter {TYPE_1__* pcid; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (int *,size_t,int *,int ) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct esas2r_adapter *VAR_2,
     struct esas2r_mem_desc *VAR_3,
     u32 VAR_4)
{
 VAR_3->esas2r_param = VAR_3->size + VAR_4;
 VAR_3->virt_addr = ((void*)0);
 VAR_3->phys_addr = 0;
 VAR_3->esas2r_data = FUNC_2(&VAR_2->pcid->dev,
         (size_t)VAR_3->
         esas2r_param,
         (dma_addr_t *)&VAR_3->
         phys_addr,
         VAR_1);

 if (VAR_3->esas2r_data == ((void*)0)) {
  FUNC_3(VAR_0,
      "failed to allocate %lu bytes of consistent memory!",
      (long
       unsigned
       int)VAR_3->esas2r_param);
  return 0;
 }

 VAR_3->virt_addr = FUNC_1(VAR_3->esas2r_data, VAR_4);
 VAR_3->phys_addr = FUNC_0(VAR_3->phys_addr, VAR_4);
 FUNC_4(VAR_3->virt_addr, 0, VAR_3->size);
 return 1;
}
