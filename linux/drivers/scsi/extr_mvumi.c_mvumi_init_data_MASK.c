
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mvumi_res {unsigned int bus_addr; void* virt_addr; } ;
struct mvumi_ob_data {int list; } ;
struct TYPE_4__ {int size; void* stack; } ;
struct mvumi_hba {int fw_flag; unsigned int ib_max_size; unsigned int max_io; int hba_capability; int ob_max_size; unsigned int ib_list_phys; unsigned int ib_frame_phys; unsigned int ib_shadow_phys; unsigned int ob_shadow_phys; unsigned int ob_list_phys; unsigned int max_target_id; void* target_map; void* tag_cmd; TYPE_2__ tag_pool; TYPE_1__* pdev; int ob_data_list; void* ob_list; void* ob_shadow; void* ib_shadow; void* ib_frame; void* ib_list; } ;
struct mvumi_dyn_list_entry {int dummy; } ;
struct mvumi_cmd {int dummy; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_3__ {scalar_t__ device; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 struct mvumi_res* FUNC_2 (struct mvumi_hba*,int ,unsigned int) ;
 int FUNC_3 (struct mvumi_hba*) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(struct mvumi_hba *VAR_5)
{
 struct mvumi_ob_data *VAR_6;
 struct mvumi_res *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 void *VAR_11, *VAR_12;
 dma_addr_t VAR_13;

 if (VAR_5->fw_flag & VAR_1)
  return 0;

 VAR_8 = VAR_5->ib_max_size * VAR_5->max_io;
 if (VAR_5->hba_capability & VAR_0)
  VAR_8 += sizeof(struct mvumi_dyn_list_entry) * VAR_5->max_io;

 VAR_8 += 128 + VAR_5->ob_max_size * VAR_5->max_io;
 VAR_8 += 8 + sizeof(u32)*2 + 16;

 VAR_7 = FUNC_2(VAR_5,
     VAR_4, VAR_8);
 if (!VAR_7) {
  FUNC_0(&VAR_5->pdev->dev,
   "failed to allocate memory for inbound list\n");
  goto fail_alloc_dma_buf;
 }

 VAR_13 = VAR_7->bus_addr;
 VAR_12 = VAR_7->virt_addr;

 VAR_9 = FUNC_4(VAR_13, 128) - VAR_13;
 VAR_13 += VAR_9;
 VAR_12 += VAR_9;
 VAR_5->ib_list = VAR_12;
 VAR_5->ib_list_phys = VAR_13;
 if (VAR_5->hba_capability & VAR_0) {
  VAR_12 += sizeof(struct mvumi_dyn_list_entry) * VAR_5->max_io;
  VAR_13 += sizeof(struct mvumi_dyn_list_entry) * VAR_5->max_io;
  VAR_5->ib_frame = VAR_12;
  VAR_5->ib_frame_phys = VAR_13;
 }
 VAR_12 += VAR_5->ib_max_size * VAR_5->max_io;
 VAR_13 += VAR_5->ib_max_size * VAR_5->max_io;


 VAR_9 = FUNC_4(VAR_13, 8) - VAR_13;
 VAR_13 += VAR_9;
 VAR_12 += VAR_9;
 VAR_5->ib_shadow = VAR_12;
 VAR_5->ib_shadow_phys = VAR_13;
 VAR_13 += sizeof(u32)*2;
 VAR_12 += sizeof(u32)*2;

 if (VAR_5->pdev->device == VAR_2) {
  VAR_9 = FUNC_4(VAR_13, 8) - VAR_13;
  VAR_13 += VAR_9;
  VAR_12 += VAR_9;
  VAR_5->ob_shadow = VAR_12;
  VAR_5->ob_shadow_phys = VAR_13;
  VAR_13 += 8;
  VAR_12 += 8;
 } else {
  VAR_9 = FUNC_4(VAR_13, 4) - VAR_13;
  VAR_13 += VAR_9;
  VAR_12 += VAR_9;
  VAR_5->ob_shadow = VAR_12;
  VAR_5->ob_shadow_phys = VAR_13;
  VAR_13 += 4;
  VAR_12 += 4;
 }


 VAR_9 = FUNC_4(VAR_13, 128) - VAR_13;
 VAR_13 += VAR_9;
 VAR_12 += VAR_9;

 VAR_5->ob_list = VAR_12;
 VAR_5->ob_list_phys = VAR_13;


 VAR_8 = VAR_5->max_io * (VAR_5->ob_max_size + sizeof(*VAR_6));
 VAR_8 = FUNC_4(VAR_8, 8);

 VAR_7 = FUNC_2(VAR_5,
    VAR_3, VAR_8);
 if (!VAR_7) {
  FUNC_0(&VAR_5->pdev->dev,
   "failed to allocate memory for outbound data buffer\n");
  goto fail_alloc_dma_buf;
 }
 VAR_11 = VAR_7->virt_addr;

 for (VAR_10 = VAR_5->max_io; VAR_10 != 0; VAR_10--) {
  VAR_6 = (struct mvumi_ob_data *) VAR_11;
  FUNC_1(&VAR_6->list, &VAR_5->ob_data_list);
  VAR_11 += VAR_5->ob_max_size + sizeof(*VAR_6);
 }

 VAR_8 = sizeof(unsigned short) * VAR_5->max_io +
    sizeof(struct mvumi_cmd *) * VAR_5->max_io;
 VAR_8 += FUNC_4(VAR_5->max_target_id, sizeof(unsigned char) * 8) /
      (sizeof(unsigned char) * 8);

 VAR_7 = FUNC_2(VAR_5,
    VAR_3, VAR_8);
 if (!VAR_7) {
  FUNC_0(&VAR_5->pdev->dev,
   "failed to allocate memory for tag and target map\n");
  goto fail_alloc_dma_buf;
 }

 VAR_11 = VAR_7->virt_addr;
 VAR_5->tag_pool.stack = VAR_11;
 VAR_5->tag_pool.size = VAR_5->max_io;
 FUNC_5(&VAR_5->tag_pool, VAR_5->max_io);
 VAR_11 += sizeof(unsigned short) * VAR_5->max_io;

 VAR_5->tag_cmd = VAR_11;
 VAR_11 += sizeof(struct mvumi_cmd *) * VAR_5->max_io;

 VAR_5->target_map = VAR_11;

 VAR_5->fw_flag |= VAR_1;
 return 0;

fail_alloc_dma_buf:
 FUNC_3(VAR_5);
 return -1;
}
