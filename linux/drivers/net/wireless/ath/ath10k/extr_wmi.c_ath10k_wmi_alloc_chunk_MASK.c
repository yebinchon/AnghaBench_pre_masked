
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_mem_chunks; TYPE_1__* mem_chunks; } ;
struct ath10k {TYPE_2__ wmi; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int len; int req_id; int paddr; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_2, u32 VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 dma_addr_t VAR_6;
 u32 VAR_7;
 int VAR_8 = VAR_2->wmi.num_mem_chunks;
 void *VAR_9;

 VAR_7 = VAR_4 * FUNC_1(VAR_5, 4);
 VAR_9 = FUNC_0(VAR_2->dev, VAR_7, &VAR_6, VAR_1);

 if (!VAR_9)
  return -VAR_0;

 VAR_2->wmi.mem_chunks[VAR_8].vaddr = VAR_9;
 VAR_2->wmi.mem_chunks[VAR_8].paddr = VAR_6;
 VAR_2->wmi.mem_chunks[VAR_8].len = VAR_7;
 VAR_2->wmi.mem_chunks[VAR_8].req_id = VAR_3;
 VAR_2->wmi.num_mem_chunks++;

 return VAR_4;
}
