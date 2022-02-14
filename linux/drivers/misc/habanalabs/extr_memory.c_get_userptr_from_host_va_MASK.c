
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hl_userptr {int dma_mapped; int vm_type; int dir; TYPE_3__* sgt; } ;
struct TYPE_4__ {int mem_size; int host_virt_addr; } ;
struct hl_mem_in {TYPE_1__ map_host; } ;
struct hl_device {int dev; TYPE_2__* asic_funcs; } ;
struct TYPE_6__ {int nents; int sgl; } ;
struct TYPE_5__ {int (* asic_dma_map_sg ) (struct hl_device*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hl_device*,int ,int ,struct hl_userptr*) ;
 int FUNC_2 (struct hl_device*,struct hl_userptr*) ;
 int FUNC_3 (struct hl_userptr*) ;
 struct hl_userptr* FUNC_4 (int,int ) ;
 int FUNC_5 (struct hl_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_4,
  struct hl_mem_in *VAR_5, struct hl_userptr **VAR_6)
{
 struct hl_userptr *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto userptr_err;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5->map_host.host_virt_addr,
   VAR_5->map_host.mem_size, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "Failed to pin host memory\n");
  goto pin_err;
 }

 VAR_8 = VAR_4->asic_funcs->asic_dma_map_sg(VAR_4, VAR_7->sgt->sgl,
     VAR_7->sgt->nents, VAR_0);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "failed to map sgt with DMA region\n");
  goto dma_map_err;
 }

 VAR_7->dma_mapped = 1;
 VAR_7->dir = VAR_0;
 VAR_7->vm_type = VAR_3;

 *VAR_6 = VAR_7;

 return 0;

dma_map_err:
 FUNC_2(VAR_4, VAR_7);
pin_err:
 FUNC_3(VAR_7);
userptr_err:

 return VAR_8;
}
