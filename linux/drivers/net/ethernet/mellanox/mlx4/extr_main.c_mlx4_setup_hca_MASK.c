
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pfn; } ;
struct TYPE_12__ {TYPE_3__* slave_state; } ;
struct TYPE_13__ {TYPE_4__ master; } ;
struct TYPE_10__ {TYPE_1__* eq; } ;
struct mlx4_priv {TYPE_7__ driver_uar; int kar; TYPE_5__ mfunc; TYPE_2__ eq_table; } ;
struct TYPE_14__ {int num_ports; int* pkey_table_len; int * port_ib_mtu; void** ib_port_def_cap; } ;
struct mlx4_dev {int flags; int num_slaves; TYPE_6__ caps; } ;
typedef int phys_addr_t ;
typedef void* __be32 ;
struct TYPE_11__ {void** ib_cap_mask; } ;
struct TYPE_9__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*) ;
 int FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (struct mlx4_dev*) ;
 int FUNC_14 (struct mlx4_dev*) ;
 int FUNC_15 (struct mlx4_dev*) ;
 int FUNC_16 (struct mlx4_dev*) ;
 int FUNC_17 (struct mlx4_dev*) ;
 int FUNC_18 (struct mlx4_dev*) ;
 int FUNC_19 (struct mlx4_dev*,char*) ;
 int FUNC_20 (struct mlx4_dev*,char*,...) ;
 int FUNC_21 (struct mlx4_dev*,int,void**) ;
 int FUNC_22 (struct mlx4_dev*) ;
 int FUNC_23 (struct mlx4_dev*) ;
 int FUNC_24 (struct mlx4_dev*) ;
 int FUNC_25 (struct mlx4_dev*) ;
 int FUNC_26 (struct mlx4_dev*) ;
 int FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*) ;
 int FUNC_29 (struct mlx4_dev*) ;
 int FUNC_30 (struct mlx4_dev*) ;
 int FUNC_31 (struct mlx4_dev*) ;
 scalar_t__ FUNC_32 (struct mlx4_dev*) ;
 scalar_t__ FUNC_33 (struct mlx4_dev*) ;
 int FUNC_34 (struct mlx4_dev*) ;
 int FUNC_35 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_36 (struct mlx4_dev*) ;
 int FUNC_37 (struct mlx4_dev*,TYPE_7__*) ;
 int FUNC_38 (struct mlx4_dev*,TYPE_7__*) ;
 int FUNC_39 (struct mlx4_dev*,char*,...) ;

__attribute__((used)) static int FUNC_40(struct mlx4_dev *VAR_8)
{
 struct mlx4_priv *VAR_9 = FUNC_36(VAR_8);
 int VAR_10;
 int VAR_11;
 __be32 VAR_12;

 VAR_10 = FUNC_30(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize user access region table, aborting\n");
  return VAR_10;
 }

 VAR_10 = FUNC_37(VAR_8, &VAR_9->driver_uar);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to allocate driver access region, aborting\n");
  goto err_uar_table_free;
 }

 VAR_9->kar = FUNC_0((phys_addr_t) VAR_9->driver_uar.pfn << VAR_6, VAR_7);
 if (!VAR_9->kar) {
  FUNC_20(VAR_8, "Couldn't map kernel access region, aborting\n");
  VAR_10 = -VAR_1;
  goto err_uar_free;
 }

 VAR_10 = FUNC_27(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize protection domain table, aborting\n");
  goto err_kar_unmap;
 }

 VAR_10 = FUNC_31(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize reliable connection domain table, aborting\n");
  goto err_pd_table_free;
 }

 VAR_10 = FUNC_26(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize memory region table, aborting\n");
  goto err_xrcd_table_free;
 }

 if (!FUNC_34(VAR_8)) {
  VAR_10 = FUNC_25(VAR_8);
  if (VAR_10) {
   FUNC_20(VAR_8, "Failed to initialize multicast group table, aborting\n");
   goto err_mr_table_free;
  }
  VAR_10 = FUNC_18(VAR_8);
  if (VAR_10) {
   FUNC_20(VAR_8, "Failed in config_mad_demux, aborting\n");
   goto err_mcg_table_free;
  }
 }

 VAR_10 = FUNC_24(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize event queue table, aborting\n");
  goto err_mcg_table_free;
 }

 VAR_10 = FUNC_16(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to switch to event-driven firmware commands, aborting\n");
  goto err_eq_table_free;
 }

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10) {
  if (VAR_8->flags & VAR_5) {
   FUNC_39(VAR_8, "NOP command failed to generate MSI-X interrupt IRQ %d)\n",
      VAR_9->eq_table.eq[VAR_4].irq);
   FUNC_39(VAR_8, "Trying again without MSI-X\n");
  } else {
   FUNC_20(VAR_8, "NOP command failed to generate interrupt (IRQ %d), aborting\n",
     VAR_9->eq_table.eq[VAR_4].irq);
   FUNC_20(VAR_8, "BIOS or ACPI interrupt routing problem?\n");
  }

  goto err_cmd_poll;
 }

 FUNC_19(VAR_8, "NOP command IRQ test passed\n");

 VAR_10 = FUNC_23(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize completion queue table, aborting\n");
  goto err_cmd_poll;
 }

 VAR_10 = FUNC_29(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize shared receive queue table, aborting\n");
  goto err_cq_table_free;
 }

 VAR_10 = FUNC_28(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to initialize queue pair table, aborting\n");
  goto err_srq_table_free;
 }

 if (!FUNC_34(VAR_8)) {
  VAR_10 = FUNC_22(VAR_8);
  if (VAR_10 && VAR_10 != -VAR_0) {
   FUNC_20(VAR_8, "Failed to initialize counters table, aborting\n");
   goto err_qp_table_free;
  }
 }

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10) {
  FUNC_20(VAR_8, "Failed to allocate default counters, aborting\n");
  goto err_counters_table_free;
 }

 if (!FUNC_34(VAR_8)) {
  for (VAR_11 = 1; VAR_11 <= VAR_8->caps.num_ports; VAR_11++) {
   VAR_12 = 0;
   VAR_10 = FUNC_21(VAR_8, VAR_11,
          &VAR_12);
   if (VAR_10)
    FUNC_39(VAR_8, "failed to get port %d default ib capabilities (%d). Continuing with caps = 0\n",
       VAR_11, VAR_10);
   VAR_8->caps.ib_port_def_cap[VAR_11] = VAR_12;


   if (FUNC_32(VAR_8)) {
    int VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_8->num_slaves; VAR_13++) {
     if (VAR_13 == FUNC_35(VAR_8))
      continue;
     VAR_9->mfunc.master.slave_state[VAR_13].ib_cap_mask[VAR_11] =
      VAR_12;
    }
   }

   if (FUNC_33(VAR_8))
    VAR_8->caps.port_ib_mtu[VAR_11] = VAR_2;
   else
    VAR_8->caps.port_ib_mtu[VAR_11] = VAR_3;

   VAR_10 = FUNC_3(VAR_8, VAR_11, FUNC_32(VAR_8) ?
         VAR_8->caps.pkey_table_len[VAR_11] : -1);
   if (VAR_10) {
    FUNC_20(VAR_8, "Failed to set port %d, aborting\n",
      VAR_11);
    goto err_default_countes_free;
   }
  }
 }

 return 0;

err_default_countes_free:
 FUNC_7(VAR_8);

err_counters_table_free:
 if (!FUNC_34(VAR_8))
  FUNC_5(VAR_8);

err_qp_table_free:
 FUNC_12(VAR_8);

err_srq_table_free:
 FUNC_13(VAR_8);

err_cq_table_free:
 FUNC_6(VAR_8);

err_cmd_poll:
 FUNC_17(VAR_8);

err_eq_table_free:
 FUNC_8(VAR_8);

err_mcg_table_free:
 if (!FUNC_34(VAR_8))
  FUNC_9(VAR_8);

err_mr_table_free:
 FUNC_10(VAR_8);

err_xrcd_table_free:
 FUNC_15(VAR_8);

err_pd_table_free:
 FUNC_11(VAR_8);

err_kar_unmap:
 FUNC_1(VAR_9->kar);

err_uar_free:
 FUNC_38(VAR_8, &VAR_9->driver_uar);

err_uar_table_free:
 FUNC_14(VAR_8);
 return VAR_10;
}
