
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hwi_context_memory {TYPE_2__* be_eq; } ;
struct TYPE_4__ {int num_eq_entries; } ;
struct beiscsi_hba {int num_cpus; TYPE_3__* pcidev; int ctrl; TYPE_1__ params; } ;
struct be_dma_mem {int dma; void* va; } ;
struct be_queue_info {struct be_dma_mem dma_mem; int id; } ;
struct be_eq_entry {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; scalar_t__ msix_enabled; } ;
struct TYPE_5__ {struct be_queue_info q; struct beiscsi_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct be_queue_info*,int,int,void*) ;
 int FUNC_2 (int *,struct be_queue_info*,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,...) ;
 void* FUNC_4 (int *,unsigned int,int *,int ) ;
 int FUNC_5 (int *,unsigned int,void*,int ) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_7,
        struct hwi_context_memory *VAR_8)
{
 int VAR_9 = -VAR_2, VAR_10;
 unsigned int VAR_11, VAR_12;
 struct be_queue_info *VAR_13;
 struct be_dma_mem *VAR_14;
 void *VAR_15;
 dma_addr_t VAR_16;

 VAR_12 = FUNC_0(VAR_7->params.num_eq_entries * sizeof(struct be_eq_entry));


 if (VAR_7->pcidev->msix_enabled)
  VAR_10 = 1;
 else
  VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < (VAR_7->num_cpus + VAR_10); VAR_11++) {
  VAR_13 = &VAR_8->be_eq[VAR_11].q;
  VAR_14 = &VAR_13->dma_mem;
  VAR_8->be_eq[VAR_11].phba = VAR_7;
  VAR_15 = FUNC_4(&VAR_7->pcidev->dev,
         VAR_12 * VAR_6,
         &VAR_16, VAR_3);
  if (!VAR_15) {
   VAR_9 = -VAR_2;
   goto create_eq_error;
  }

  VAR_14->va = VAR_15;
  VAR_9 = FUNC_1(VAR_13, VAR_7->params.num_eq_entries,
        sizeof(struct be_eq_entry), VAR_15);
  if (VAR_9) {
   FUNC_3(VAR_7, VAR_4, VAR_1,
        "BM_%d : be_fill_queue Failed for EQ\n");
   goto create_eq_error;
  }

  VAR_14->dma = VAR_16;
  VAR_9 = FUNC_2(&VAR_7->ctrl, VAR_13,
         VAR_0);
  if (VAR_9) {
   FUNC_3(VAR_7, VAR_4, VAR_1,
        "BM_%d : beiscsi_cmd_eq_create"
        "Failed for EQ\n");
   goto create_eq_error;
  }

  FUNC_3(VAR_7, VAR_5, VAR_1,
       "BM_%d : eqid = %d\n",
       VAR_8->be_eq[VAR_11].q.id);
 }
 return 0;

create_eq_error:
 for (VAR_11 = 0; VAR_11 < (VAR_7->num_cpus + VAR_10); VAR_11++) {
  VAR_13 = &VAR_8->be_eq[VAR_11].q;
  VAR_14 = &VAR_13->dma_mem;
  if (VAR_14->va)
   FUNC_5(&VAR_7->pcidev->dev, VAR_12
         * VAR_6,
         VAR_14->va, VAR_14->dma);
 }
 return VAR_9;
}
