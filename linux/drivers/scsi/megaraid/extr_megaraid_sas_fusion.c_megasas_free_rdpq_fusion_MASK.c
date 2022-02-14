
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {TYPE_2__* pdev; struct fusion_context* ctrl_context; } ;
struct fusion_context {int rdpq_phys; scalar_t__ rdpq_virt; int reply_frames_desc_pool_align; int reply_frames_desc_pool; TYPE_1__* rdpq_tracker; } ;
struct MPI2_IOC_INIT_RDPQ_ARRAY_ENTRY {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int pool_entry_phys; scalar_t__ pool_entry_virt; int dma_pool_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct megasas_instance *VAR_2) {

 int VAR_3;
 struct fusion_context *VAR_4;

 VAR_4 = VAR_2->ctrl_context;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_4->rdpq_tracker[VAR_3].pool_entry_virt)
   FUNC_2(VAR_4->rdpq_tracker[VAR_3].dma_pool_ptr,
          VAR_4->rdpq_tracker[VAR_3].pool_entry_virt,
          VAR_4->rdpq_tracker[VAR_3].pool_entry_phys);

 }

 FUNC_1(VAR_4->reply_frames_desc_pool);
 FUNC_1(VAR_4->reply_frames_desc_pool_align);

 if (VAR_4->rdpq_virt)
  FUNC_0(&VAR_2->pdev->dev,
   sizeof(struct MPI2_IOC_INIT_RDPQ_ARRAY_ENTRY) * VAR_0,
   VAR_4->rdpq_virt, VAR_4->rdpq_phys);
}
