
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_mem_chunks; TYPE_2__* mem_chunks; } ;
struct ath10k {TYPE_1__ wmi; int dev; } ;
struct TYPE_4__ {int paddr; int vaddr; int len; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct ath10k *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->wmi.num_mem_chunks; VAR_1++) {
  FUNC_0(VAR_0->dev,
      VAR_0->wmi.mem_chunks[VAR_1].len,
      VAR_0->wmi.mem_chunks[VAR_1].vaddr,
      VAR_0->wmi.mem_chunks[VAR_1].paddr);
 }

 VAR_0->wmi.num_mem_chunks = 0;
}
