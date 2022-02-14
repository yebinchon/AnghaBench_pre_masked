
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int src_maxburst; int dst_maxburst; int device_fc; int direction; void* dst_addr_width; void* src_addr_width; } ;
struct TYPE_4__ {int lock; int wait; TYPE_1__ config; int chan; int virt; int phys; } ;
struct tegra_fuse {int read; TYPE_2__ apbdma; int dev; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct tegra_fuse *VAR_8)
{
 dma_cap_mask_t VAR_9;

 FUNC_2(VAR_9);
 FUNC_1(VAR_1, VAR_9);

 VAR_8->apbdma.chan = FUNC_4(VAR_9, VAR_6, ((void*)0));
 if (!VAR_8->apbdma.chan)
  return -VAR_4;

 VAR_8->apbdma.virt = FUNC_0(VAR_8->dev, sizeof(u32),
            &VAR_8->apbdma.phys,
            VAR_5);
 if (!VAR_8->apbdma.virt) {
  FUNC_3(VAR_8->apbdma.chan);
  return -VAR_3;
 }

 VAR_8->apbdma.config.src_addr_width = VAR_2;
 VAR_8->apbdma.config.dst_addr_width = VAR_2;
 VAR_8->apbdma.config.src_maxburst = 1;
 VAR_8->apbdma.config.dst_maxburst = 1;
 VAR_8->apbdma.config.direction = VAR_0;
 VAR_8->apbdma.config.device_fc = 0;

 FUNC_5(&VAR_8->apbdma.wait);
 FUNC_6(&VAR_8->apbdma.lock);
 VAR_8->read = VAR_7;

 return 0;
}
