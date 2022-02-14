
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct host_memory_chunk {void* req_id; void* size; void* ptr; } ;
struct TYPE_4__ {int num_mem_chunks; TYPE_1__* mem_chunks; } ;
struct ath10k {TYPE_2__ wmi; } ;
typedef void* __le16 ;
struct TYPE_3__ {scalar_t__ req_id; scalar_t__ paddr; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,scalar_t__,unsigned long long,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ath10k *VAR_2, void *VAR_3)
{
 struct host_memory_chunk *VAR_4;
 struct wmi_tlv *VAR_5;
 int VAR_6;
 __le16 VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_1);
 VAR_7 = FUNC_0(sizeof(*VAR_4));
 for (VAR_6 = 0; VAR_6 < VAR_2->wmi.num_mem_chunks; VAR_6++) {
  VAR_5 = VAR_3;
  VAR_5->tag = VAR_8;
  VAR_5->len = VAR_7;
  VAR_4 = (void *)VAR_5->value;

  VAR_4->ptr = FUNC_1(VAR_2->wmi.mem_chunks[VAR_6].paddr);
  VAR_4->size = FUNC_1(VAR_2->wmi.mem_chunks[VAR_6].len);
  VAR_4->req_id = FUNC_1(VAR_2->wmi.mem_chunks[VAR_6].req_id);

  FUNC_2(VAR_2, VAR_0,
      "wmi-tlv chunk %d len %d, addr 0x%llx, id 0x%x\n",
      VAR_6,
      VAR_2->wmi.mem_chunks[VAR_6].len,
      (unsigned long long)VAR_2->wmi.mem_chunks[VAR_6].paddr,
      VAR_2->wmi.mem_chunks[VAR_6].req_id);

  VAR_3 += sizeof(*VAR_5);
  VAR_3 += sizeof(*VAR_4);
 }
}
