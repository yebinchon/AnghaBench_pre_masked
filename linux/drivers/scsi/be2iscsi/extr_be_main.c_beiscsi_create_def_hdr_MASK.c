
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct phys_addr {int dummy; } ;
struct hwi_controller {int dummy; } ;
struct hwi_context_memory {struct be_queue_info* be_def_hdrq; struct be_queue_info* be_cq; } ;
struct TYPE_10__ {int defpdu_hdr_sz; } ;
struct beiscsi_hba {TYPE_5__ params; int ctrl; struct be_mem_descriptor* init_mem; } ;
struct be_dma_mem {unsigned long dma; } ;
struct be_queue_info {int id; struct be_dma_mem dma_mem; } ;
struct be_mem_descriptor {TYPE_4__* mem_array; } ;
struct TYPE_6__ {scalar_t__ address; } ;
struct TYPE_7__ {TYPE_1__ a64; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_9__ {int size; TYPE_3__ bus_address; void* virtual_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,struct be_queue_info*,struct be_queue_info*,unsigned int,int ,int ,size_t) ;
 int FUNC_1 (struct be_queue_info*,int,int,void*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,size_t,...) ;

__attribute__((used)) static int
FUNC_3(struct beiscsi_hba *VAR_6,
         struct hwi_context_memory *VAR_7,
         struct hwi_controller *VAR_8,
         unsigned int VAR_9, uint8_t VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;
 struct be_queue_info *VAR_13, *VAR_14;
 struct be_dma_mem *VAR_15;
 struct be_mem_descriptor *VAR_16;
 void *VAR_17;

 VAR_11 = 0;
 VAR_13 = &VAR_7->be_def_hdrq[VAR_10];
 VAR_14 = &VAR_7->be_cq[0];
 VAR_15 = &VAR_13->dma_mem;
 VAR_16 = VAR_6->init_mem;
 VAR_16 += VAR_2 +
      (VAR_10 * VAR_5);
 VAR_17 = VAR_16->mem_array[VAR_11].virtual_address;
 VAR_12 = FUNC_1(VAR_13, VAR_16->mem_array[0].size /
       sizeof(struct phys_addr),
       sizeof(struct phys_addr), VAR_17);
 if (VAR_12) {
  FUNC_2(VAR_6, VAR_3, VAR_1,
       "BM_%d : be_fill_queue Failed for DEF PDU HDR on ULP : %d\n",
       VAR_10);

  return VAR_12;
 }
 VAR_15->dma = (unsigned long)VAR_16->mem_array[VAR_11].
      bus_address.u.a64.address;
 VAR_12 = FUNC_0(&VAR_6->ctrl, VAR_14, VAR_13,
           VAR_9,
           VAR_6->params.defpdu_hdr_sz,
           VAR_0, VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_6, VAR_3, VAR_1,
       "BM_%d : be_cmd_create_default_pdu_queue Failed DEFHDR on ULP : %d\n",
       VAR_10);

  return VAR_12;
 }

 FUNC_2(VAR_6, VAR_4, VAR_1,
      "BM_%d : iscsi hdr def pdu id for ULP : %d is %d\n",
      VAR_10,
      VAR_7->be_def_hdrq[VAR_10].id);
 return 0;
}
