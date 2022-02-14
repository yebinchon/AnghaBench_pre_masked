
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_pruss_pdata {scalar_t__ sram_pool; int pintc_base; } ;
struct uio_pruss_dev {unsigned long sram_vaddr; struct uio_pruss_dev* info; int pruss_clk; scalar_t__ sram_pool; scalar_t__ ddr_paddr; int ddr_vaddr; int prussio_vaddr; struct uio_pruss_dev* name; struct uio_pruss_dev* priv; int handler; scalar_t__ hostirq_start; scalar_t__ irq; int version; TYPE_1__* mem; scalar_t__ sram_paddr; int pintc_base; } ;
struct uio_info {unsigned long sram_vaddr; struct uio_info* info; int pruss_clk; scalar_t__ sram_pool; scalar_t__ ddr_paddr; int ddr_vaddr; int prussio_vaddr; struct uio_info* name; struct uio_info* priv; int handler; scalar_t__ hostirq_start; scalar_t__ irq; int version; TYPE_1__* mem; scalar_t__ sram_paddr; int pintc_base; } ;
struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {void* memtype; void* size; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 void* VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*) ;
 struct uio_pruss_pdata* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,void*,scalar_t__*,int) ;
 int FUNC_9 (struct device*,void*,int ,scalar_t__) ;
 void* VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__,void*,scalar_t__*) ;
 int FUNC_11 (scalar_t__,unsigned long,void*) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int ) ;
 struct uio_pruss_dev* FUNC_14 (int,char*,int) ;
 struct uio_pruss_dev* FUNC_15 (int,int,int) ;
 int FUNC_16 (struct uio_pruss_dev*) ;
 struct uio_pruss_dev* FUNC_17 (int,int) ;
 scalar_t__ FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct uio_pruss_dev*) ;
 int VAR_9 ;
 void* FUNC_21 (struct resource*) ;
 void* VAR_10 ;
 int FUNC_22 (struct device*,struct uio_pruss_dev*) ;
 int FUNC_23 (struct uio_pruss_dev*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_11)
{
 struct uio_info *VAR_12;
 struct uio_pruss_dev *VAR_13;
 struct resource *VAR_14;
 struct device *VAR_15 = &VAR_11->dev;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 struct uio_pruss_pdata *VAR_20 = FUNC_7(VAR_15);

 VAR_13 = FUNC_17(sizeof(struct uio_pruss_dev), VAR_4);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->info = FUNC_15(VAR_6, sizeof(*VAR_12), VAR_4);
 if (!VAR_13->info) {
  VAR_16 = -VAR_2;
  goto err_free_gdev;
 }


 VAR_13->pruss_clk = FUNC_4(VAR_15, "pruss");
 if (FUNC_0(VAR_13->pruss_clk)) {
  FUNC_6(VAR_15, "Failed to get clock\n");
  VAR_16 = FUNC_1(VAR_13->pruss_clk);
  goto err_free_info;
 }

 VAR_16 = FUNC_3(VAR_13->pruss_clk);
 if (VAR_16) {
  FUNC_6(VAR_15, "Failed to enable clock\n");
  goto err_clk_put;
 }

 VAR_14 = FUNC_19(VAR_11, VAR_5, 0);
 if (!VAR_14) {
  FUNC_6(VAR_15, "No PRUSS I/O resource specified\n");
  VAR_16 = -VAR_1;
  goto err_clk_disable;
 }

 if (!VAR_14->start) {
  FUNC_6(VAR_15, "Invalid memory resource\n");
  VAR_16 = -VAR_1;
  goto err_clk_disable;
 }

 if (VAR_20->sram_pool) {
  VAR_13->sram_pool = VAR_20->sram_pool;
  VAR_13->sram_vaddr =
   (unsigned long)FUNC_10(VAR_13->sram_pool,
     VAR_10, &VAR_13->sram_paddr);
  if (!VAR_13->sram_vaddr) {
   FUNC_6(VAR_15, "Could not allocate SRAM pool\n");
   VAR_16 = -VAR_2;
   goto err_clk_disable;
  }
 }

 VAR_13->ddr_vaddr = FUNC_8(VAR_15, VAR_8,
    &(VAR_13->ddr_paddr), VAR_4 | VAR_3);
 if (!VAR_13->ddr_vaddr) {
  FUNC_6(VAR_15, "Could not allocate external memory\n");
  VAR_16 = -VAR_2;
  goto err_free_sram;
 }

 VAR_19 = FUNC_21(VAR_14);
 VAR_13->prussio_vaddr = FUNC_12(VAR_14->start, VAR_19);
 if (!VAR_13->prussio_vaddr) {
  FUNC_6(VAR_15, "Can't remap PRUSS I/O  address range\n");
  VAR_16 = -VAR_2;
  goto err_free_ddr_vaddr;
 }

 VAR_13->pintc_base = VAR_20->pintc_base;
 VAR_13->hostirq_start = FUNC_18(VAR_11, 0);

 for (VAR_17 = 0, VAR_12 = VAR_13->info; VAR_17 < VAR_6; VAR_17++, VAR_12++) {
  VAR_12->mem[0].addr = VAR_14->start;
  VAR_12->mem[0].size = FUNC_21(VAR_14);
  VAR_12->mem[0].memtype = VAR_7;

  VAR_12->mem[1].addr = VAR_13->sram_paddr;
  VAR_12->mem[1].size = VAR_10;
  VAR_12->mem[1].memtype = VAR_7;

  VAR_12->mem[2].addr = VAR_13->ddr_paddr;
  VAR_12->mem[2].size = VAR_8;
  VAR_12->mem[2].memtype = VAR_7;

  VAR_12->name = FUNC_14(VAR_4, "pruss_evt%d", VAR_17);
  VAR_12->version = VAR_0;


  VAR_12->irq = VAR_13->hostirq_start + VAR_17;
  VAR_12->handler = VAR_9;
  VAR_12->priv = VAR_13;

  VAR_16 = FUNC_22(VAR_15, VAR_12);
  if (VAR_16 < 0) {
   FUNC_16(VAR_12->name);
   goto err_unloop;
  }
 }

 FUNC_20(VAR_11, VAR_13);
 return 0;

err_unloop:
 for (VAR_18 = 0, VAR_12 = VAR_13->info; VAR_18 < VAR_17; VAR_18++, VAR_12++) {
  FUNC_23(VAR_12);
  FUNC_16(VAR_12->name);
 }
 FUNC_13(VAR_13->prussio_vaddr);
err_free_ddr_vaddr:
 FUNC_9(VAR_15, VAR_8, VAR_13->ddr_vaddr,
     VAR_13->ddr_paddr);
err_free_sram:
 if (VAR_20->sram_pool)
  FUNC_11(VAR_13->sram_pool, VAR_13->sram_vaddr, VAR_10);
err_clk_disable:
 FUNC_2(VAR_13->pruss_clk);
err_clk_put:
 FUNC_5(VAR_13->pruss_clk);
err_free_info:
 FUNC_16(VAR_13->info);
err_free_gdev:
 FUNC_16(VAR_13);

 return VAR_16;
}
