
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ src_addr; } ;
struct TYPE_3__ {int lock; int * virt; int chan; int wait; int phys; TYPE_2__ config; } ;
struct tegra_fuse {TYPE_1__ apbdma; int clk; scalar_t__ phys; } ;
struct dma_async_tx_descriptor {struct tegra_fuse* callback_param; int callback; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (int ,int ,int,int ,unsigned long) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (int *,int ) ;

__attribute__((used)) static u32 FUNC_13(struct tegra_fuse *VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7 = VAR_2 | VAR_0;
 struct dma_async_tx_descriptor *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10 = 0;
 int VAR_11;

 FUNC_9(&VAR_5->apbdma.lock);

 VAR_5->apbdma.config.src_addr = VAR_5->phys + VAR_3 + VAR_6;

 VAR_11 = FUNC_5(VAR_5->apbdma.chan, &VAR_5->apbdma.config);
 if (VAR_11)
  goto out;

 VAR_8 = FUNC_4(VAR_5->apbdma.chan,
            VAR_5->apbdma.phys,
            sizeof(u32), VAR_1,
            VAR_7);
 if (!VAR_8)
  goto out;

 VAR_8->callback = VAR_4;
 VAR_8->callback_param = VAR_5;

 FUNC_11(&VAR_5->apbdma.wait);

 FUNC_2(VAR_5->clk);

 FUNC_6(VAR_8);
 FUNC_3(VAR_5->apbdma.chan);
 VAR_9 = FUNC_12(&VAR_5->apbdma.wait,
      FUNC_8(50));

 if (FUNC_0(VAR_9 == 0, "apb read dma timed out"))
  FUNC_7(VAR_5->apbdma.chan);
 else
  VAR_10 = *VAR_5->apbdma.virt;

 FUNC_1(VAR_5->clk);

out:
 FUNC_10(&VAR_5->apbdma.lock);
 return VAR_10;
}
