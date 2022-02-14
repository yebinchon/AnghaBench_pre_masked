
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmi_host_mem_chunks {struct host_memory_chunk* items; void* count; } ;
struct host_memory_chunk {void* req_id; void* size; void* ptr; } ;
struct TYPE_4__ {int num_mem_chunks; TYPE_1__* mem_chunks; } ;
struct ath10k {TYPE_2__ wmi; } ;
struct TYPE_3__ {int paddr; int len; int req_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int,int,unsigned long long) ;

void FUNC_2(struct ath10k *VAR_1,
        struct wmi_host_mem_chunks *VAR_2)
{
 struct host_memory_chunk *VAR_3;
 int VAR_4;

 VAR_2->count = FUNC_0(VAR_1->wmi.num_mem_chunks);

 for (VAR_4 = 0; VAR_4 < VAR_1->wmi.num_mem_chunks; VAR_4++) {
  VAR_3 = &VAR_2->items[VAR_4];
  VAR_3->ptr = FUNC_0(VAR_1->wmi.mem_chunks[VAR_4].paddr);
  VAR_3->size = FUNC_0(VAR_1->wmi.mem_chunks[VAR_4].len);
  VAR_3->req_id = FUNC_0(VAR_1->wmi.mem_chunks[VAR_4].req_id);

  FUNC_1(VAR_1, VAR_0,
      "wmi chunk %d len %d requested, addr 0x%llx\n",
      VAR_4,
      VAR_1->wmi.mem_chunks[VAR_4].len,
      (unsigned long long)VAR_1->wmi.mem_chunks[VAR_4].paddr);
 }
}
