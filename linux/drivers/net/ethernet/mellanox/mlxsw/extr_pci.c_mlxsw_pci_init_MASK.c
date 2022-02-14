
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct mlxsw_res {int dummy; } ;
struct TYPE_6__ {int in_mbox; int out_mbox; int wait; int lock; } ;
struct TYPE_4__ {int subminor; int minor; int major; } ;
struct TYPE_5__ {int device_kind; TYPE_1__ fw_rev; } ;
struct mlxsw_pci {TYPE_3__ cmd; TYPE_2__ bus_info; int max_cqe_ver; int free_running_clock_offset; int doorbell_offset; int id; struct mlxsw_core* core; struct pci_dev* pdev; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_config_profile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mlxsw_core*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_core*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct mlxsw_core*,char*) ;
 int FUNC_16 (struct mlxsw_core*,char*,struct mlxsw_res*) ;
 int FUNC_17 (struct mlxsw_pci*) ;
 int FUNC_18 (struct mlxsw_pci*) ;
 int FUNC_19 (struct mlxsw_pci*,char*) ;
 int FUNC_20 (struct mlxsw_pci*,char*) ;
 int FUNC_21 (struct mlxsw_pci*,char*,struct mlxsw_config_profile const*,struct mlxsw_res*) ;
 int VAR_8 ;
 int FUNC_22 (struct mlxsw_pci*) ;
 int FUNC_23 (struct mlxsw_pci*) ;
 int FUNC_24 (struct mlxsw_pci*,char*,int ) ;
 int FUNC_25 (struct mlxsw_pci*,int *) ;
 int FUNC_26 (struct mlxsw_pci*,int *) ;
 int FUNC_27 (struct mlxsw_pci*,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (int ,int ,int ,int ,struct mlxsw_pci*) ;

__attribute__((used)) static int FUNC_31(void *VAR_9, struct mlxsw_core *VAR_10,
     const struct mlxsw_config_profile *VAR_11,
     struct mlxsw_res *VAR_12)
{
 struct mlxsw_pci *VAR_13 = VAR_9;
 struct pci_dev *VAR_14 = VAR_13->pdev;
 char *VAR_15;
 u16 VAR_16;
 int VAR_17;

 FUNC_28(&VAR_13->cmd.lock);
 FUNC_3(&VAR_13->cmd.wait);

 VAR_13->core = VAR_10;

 VAR_15 = FUNC_4();
 if (!VAR_15)
  return -VAR_4;

 VAR_17 = FUNC_25(VAR_13, &VAR_13->cmd.in_mbox);
 if (VAR_17)
  goto mbox_put;

 VAR_17 = FUNC_25(VAR_13, &VAR_13->cmd.out_mbox);
 if (VAR_17)
  goto err_out_mbox_alloc;

 VAR_17 = FUNC_27(VAR_13, VAR_13->id);
 if (VAR_17)
  goto err_sw_reset;

 VAR_17 = FUNC_17(VAR_13);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_14->dev, "MSI-X init failed\n");
  goto err_alloc_irq;
 }

 VAR_17 = FUNC_15(VAR_10, VAR_15);
 if (VAR_17)
  goto err_query_fw;

 VAR_13->bus_info.fw_rev.major =
  FUNC_12(VAR_15);
 VAR_13->bus_info.fw_rev.minor =
  FUNC_13(VAR_15);
 VAR_13->bus_info.fw_rev.subminor =
  FUNC_14(VAR_15);

 if (FUNC_6(VAR_15) != 1) {
  FUNC_2(&VAR_14->dev, "Unsupported cmd interface revision ID queried from hw\n");
  VAR_17 = -VAR_3;
  goto err_iface_rev;
 }
 if (FUNC_7(VAR_15) != 0) {
  FUNC_2(&VAR_14->dev, "Unsupported doorbell page bar queried from hw\n");
  VAR_17 = -VAR_3;
  goto err_doorbell_page_bar;
 }

 VAR_13->doorbell_offset =
  FUNC_8(VAR_15);

 if (FUNC_9(VAR_15) != 0) {
  FUNC_2(&VAR_14->dev, "Unsupported free running clock BAR queried from hw\n");
  VAR_17 = -VAR_3;
  goto err_fr_rn_clk_bar;
 }

 VAR_13->free_running_clock_offset =
  FUNC_10(VAR_15);

 VAR_16 = FUNC_11(VAR_15);
 VAR_17 = FUNC_24(VAR_13, VAR_15, VAR_16);
 if (VAR_17)
  goto err_fw_area_init;

 VAR_17 = FUNC_20(VAR_13, VAR_15);
 if (VAR_17)
  goto err_boardinfo;

 VAR_17 = FUNC_16(VAR_10, VAR_15, VAR_12);
 if (VAR_17)
  goto err_query_resources;

 if (FUNC_1(VAR_10, VAR_2) &&
     FUNC_0(VAR_10, VAR_2))
  VAR_13->max_cqe_ver = VAR_7;
 else if (FUNC_1(VAR_10, VAR_1) &&
   FUNC_0(VAR_10, VAR_1))
  VAR_13->max_cqe_ver = VAR_6;
 else if ((FUNC_1(VAR_10, VAR_0) &&
    FUNC_0(VAR_10, VAR_0)) ||
   !FUNC_1(VAR_10, VAR_0)) {
  VAR_13->max_cqe_ver = VAR_5;
 } else {
  FUNC_2(&VAR_14->dev, "Invalid supported CQE version combination reported\n");
  goto err_cqe_v_check;
 }

 VAR_17 = FUNC_21(VAR_13, VAR_15, VAR_11, VAR_12);
 if (VAR_17)
  goto err_config_profile;

 VAR_17 = FUNC_19(VAR_13, VAR_15);
 if (VAR_17)
  goto err_aqs_init;

 VAR_17 = FUNC_30(FUNC_29(VAR_14, 0),
     VAR_8, 0,
     VAR_13->bus_info.device_kind, VAR_13);
 if (VAR_17) {
  FUNC_2(&VAR_14->dev, "IRQ request failed\n");
  goto err_request_eq_irq;
 }

 goto mbox_put;

err_request_eq_irq:
 FUNC_18(VAR_13);
err_aqs_init:
err_config_profile:
err_cqe_v_check:
err_query_resources:
err_boardinfo:
 FUNC_23(VAR_13);
err_fw_area_init:
err_fr_rn_clk_bar:
err_doorbell_page_bar:
err_iface_rev:
err_query_fw:
 FUNC_22(VAR_13);
err_alloc_irq:
err_sw_reset:
 FUNC_26(VAR_13, &VAR_13->cmd.out_mbox);
err_out_mbox_alloc:
 FUNC_26(VAR_13, &VAR_13->cmd.in_mbox);
mbox_put:
 FUNC_5(VAR_15);
 return VAR_17;
}
