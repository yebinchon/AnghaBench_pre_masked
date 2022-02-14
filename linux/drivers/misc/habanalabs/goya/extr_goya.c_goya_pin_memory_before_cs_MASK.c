
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct packet_lin_dma {int tsize; } ;
struct hl_userptr {int dma_mapped; int dir; TYPE_2__* sgt; int job_node; } ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct hl_cs_parser {int patched_cb_size; int job_userptr_list; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int nents; int sgl; } ;
struct TYPE_3__ {int (* asic_dma_map_sg ) (struct hl_device*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct hl_device*,TYPE_2__*) ;
 int FUNC_2 (struct hl_device*,int ,int ,struct hl_userptr*) ;
 int FUNC_3 (struct hl_device*,struct hl_userptr*) ;
 scalar_t__ FUNC_4 (struct hl_device*,int ,int ,int ,struct hl_userptr**) ;
 int FUNC_5 (struct hl_userptr*) ;
 struct hl_userptr* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct hl_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct hl_device *VAR_2,
    struct hl_cs_parser *VAR_3,
    struct packet_lin_dma *VAR_4,
    u64 VAR_5, enum dma_data_direction VAR_6)
{
 struct hl_userptr *VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_2, VAR_5, FUNC_7(VAR_4->tsize),
   VAR_3->job_userptr_list, &VAR_7))
  goto already_pinned;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2, VAR_5, FUNC_7(VAR_4->tsize),
    VAR_7);
 if (VAR_8)
  goto free_userptr;

 FUNC_8(&VAR_7->job_node, VAR_3->job_userptr_list);

 VAR_8 = VAR_2->asic_funcs->asic_dma_map_sg(VAR_2, VAR_7->sgt->sgl,
     VAR_7->sgt->nents, VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_2->dev, "failed to map sgt with DMA region\n");
  goto unpin_memory;
 }

 VAR_7->dma_mapped = 1;
 VAR_7->dir = VAR_6;

already_pinned:
 VAR_3->patched_cb_size +=
   FUNC_1(VAR_2, VAR_7->sgt);

 return 0;

unpin_memory:
 FUNC_3(VAR_2, VAR_7);
free_userptr:
 FUNC_5(VAR_7);
 return VAR_8;
}
