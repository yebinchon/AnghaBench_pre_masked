
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int region_count; int id; } ;
struct device {int dummy; } ;
struct fsl_mc_device {int mc_io; int mc_handle; TYPE_2__* regions; TYPE_1__ obj_desc; struct device dev; } ;
struct dpio_priv {int io; } ;
struct dpio_attr {int num_priorities; int qbman_version; } ;
struct dpaa2_io_desc {int receives_notifications; int has_8prio; int cpu; int regs_cinh; void* regs_cena; int dpio_id; int qman_version; } ;
struct TYPE_4__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct dpio_priv*) ;
 int FUNC_8 (struct device*,int ,int ) ;
 struct dpio_priv* FUNC_9 (struct device*,int,int ) ;
 void* FUNC_10 (struct device*,int ,int ,int ) ;
 int FUNC_11 (struct fsl_mc_device*,int) ;
 int FUNC_12 (struct dpaa2_io_desc*,struct device*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,struct dpio_attr*) ;
 int FUNC_17 (int ,int ,int ,int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ,int) ;
 int FUNC_20 (struct fsl_mc_device*) ;
 int FUNC_21 (struct fsl_mc_device*) ;
 int FUNC_22 (struct fsl_mc_device*,int ,int *) ;
 int FUNC_23 (int ) ;
 int VAR_7 ;
 int FUNC_24 (struct fsl_mc_device*,int) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_27(struct fsl_mc_device *VAR_8)
{
 struct dpio_attr VAR_9;
 struct dpaa2_io_desc VAR_10;
 struct dpio_priv *VAR_11;
 int VAR_12 = -VAR_0;
 struct device *VAR_13 = &VAR_8->dev;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_9(VAR_13, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  goto err_priv_alloc;

 FUNC_7(VAR_13, VAR_11);

 VAR_12 = FUNC_22(VAR_8, 0, &VAR_8->mc_io);
 if (VAR_12) {
  FUNC_4(VAR_13, "MC portal allocation failed\n");
  VAR_12 = -VAR_1;
  goto err_priv_alloc;
 }

 VAR_12 = FUNC_17(VAR_8->mc_io, 0, VAR_8->obj_desc.id,
   &VAR_8->mc_handle);
 if (VAR_12) {
  FUNC_5(VAR_13, "dpio_open() failed\n");
  goto err_open;
 }

 VAR_12 = FUNC_18(VAR_8->mc_io, 0, VAR_8->mc_handle);
 if (VAR_12) {
  FUNC_5(VAR_13, "dpio_reset() failed\n");
  goto err_reset;
 }

 VAR_12 = FUNC_16(VAR_8->mc_io, 0, VAR_8->mc_handle,
      &VAR_9);
 if (VAR_12) {
  FUNC_5(VAR_13, "dpio_get_attributes() failed %d\n", VAR_12);
  goto err_get_attr;
 }
 VAR_10.qman_version = VAR_9.qbman_version;

 VAR_12 = FUNC_15(VAR_8->mc_io, 0, VAR_8->mc_handle);
 if (VAR_12) {
  FUNC_5(VAR_13, "dpio_enable() failed %d\n", VAR_12);
  goto err_get_attr;
 }


 VAR_10.receives_notifications = VAR_9.num_priorities ? 1 : 0;
 VAR_10.has_8prio = VAR_9.num_priorities == 8 ? 1 : 0;
 VAR_10.dpio_id = VAR_8->obj_desc.id;


 VAR_14 = FUNC_3(VAR_6);
 if (VAR_14 >= VAR_7) {
  FUNC_5(VAR_13, "probe failed. Number of DPIOs exceeds NR_CPUS.\n");
  VAR_12 = -VAR_2;
  goto err_allocate_irqs;
 }
 VAR_10.cpu = VAR_14;
 FUNC_2(VAR_14, VAR_6);

 VAR_15 = FUNC_11(VAR_8, VAR_10.cpu);
 if (VAR_15 >= 0) {
  VAR_12 = FUNC_19(VAR_8->mc_io, 0,
          VAR_8->mc_handle,
          VAR_15);
  if (VAR_12)
   FUNC_5(VAR_13, "dpio_set_stashing_destination failed for cpu%d\n",
    VAR_10.cpu);
 }

 if (VAR_8->obj_desc.region_count < 3) {






  VAR_10.regs_cena = FUNC_10(VAR_13, VAR_8->regions[1].start,
     FUNC_25(&VAR_8->regions[1]),
     VAR_5);
 } else {
  VAR_10.regs_cena = FUNC_10(VAR_13, VAR_8->regions[2].start,
     FUNC_25(&VAR_8->regions[2]),
     VAR_4);
 }

 if (FUNC_0(VAR_10.regs_cena)) {
  FUNC_5(VAR_13, "devm_memremap failed\n");
  VAR_12 = FUNC_1(VAR_10.regs_cena);
  goto err_allocate_irqs;
 }

 VAR_10.regs_cinh = FUNC_8(VAR_13, VAR_8->regions[1].start,
          FUNC_25(&VAR_8->regions[1]));
 if (!VAR_10.regs_cinh) {
  VAR_12 = -VAR_0;
  FUNC_5(VAR_13, "devm_ioremap failed\n");
  goto err_allocate_irqs;
 }

 VAR_12 = FUNC_20(VAR_8);
 if (VAR_12) {
  FUNC_5(VAR_13, "fsl_mc_allocate_irqs failed. err=%d\n", VAR_12);
  goto err_allocate_irqs;
 }

 VAR_12 = FUNC_24(VAR_8, VAR_10.cpu);
 if (VAR_12)
  goto err_register_dpio_irq;

 VAR_11->io = FUNC_12(&VAR_10, VAR_13);
 if (!VAR_11->io) {
  FUNC_5(VAR_13, "dpaa2_io_create failed\n");
  VAR_12 = -VAR_0;
  goto err_dpaa2_io_create;
 }

 FUNC_6(VAR_13, "probed\n");
 FUNC_4(VAR_13, "   receives_notifications = %d\n",
  VAR_10.receives_notifications);
 FUNC_13(VAR_8->mc_io, 0, VAR_8->mc_handle);

 return 0;

err_dpaa2_io_create:
 FUNC_26(VAR_8);
err_register_dpio_irq:
 FUNC_21(VAR_8);
err_allocate_irqs:
 FUNC_14(VAR_8->mc_io, 0, VAR_8->mc_handle);
err_get_attr:
err_reset:
 FUNC_13(VAR_8->mc_io, 0, VAR_8->mc_handle);
err_open:
 FUNC_23(VAR_8->mc_io);
err_priv_alloc:
 return VAR_12;
}
