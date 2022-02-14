
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_req_acpi_wol_magic_config_v1* va; } ;
struct be_cmd_resp_acpi_wol_magic_config_v1 {int wol_settings; int magic_mac; } ;
struct TYPE_4__ {int version; } ;
struct be_cmd_req_acpi_wol_magic_config_v1 {int query_options; TYPE_2__ hdr; } ;
struct be_adapter {int wol_cap; int wol_en; TYPE_1__* pdev; int mbox_lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_4 (int *,char*) ;
 struct be_cmd_req_acpi_wol_magic_config_v1* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,struct be_cmd_req_acpi_wol_magic_config_v1*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct be_dma_mem*,int ,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (struct be_adapter*) ;

int FUNC_12(struct be_adapter *VAR_8)
{
 struct be_mcc_wrb *VAR_9;
 struct be_cmd_req_acpi_wol_magic_config_v1 *VAR_10;
 int VAR_11 = 0;
 struct be_dma_mem VAR_12;

 if (!FUNC_0(VAR_8, VAR_7,
       VAR_2))
  return -VAR_5;

 if (FUNC_1(VAR_8))
  return VAR_11;

 if (FUNC_9(&VAR_8->mbox_lock))
  return -1;

 FUNC_8(&VAR_12, 0, sizeof(struct be_dma_mem));
 VAR_12.size = sizeof(struct be_cmd_resp_acpi_wol_magic_config_v1);
 VAR_12.va = FUNC_5(&VAR_8->pdev->dev, VAR_12.size, &VAR_12.dma,
        VAR_6);
 if (!VAR_12.va) {
  FUNC_4(&VAR_8->pdev->dev, "Memory allocation failure\n");
  VAR_11 = -VAR_4;
  goto err;
 }

 VAR_9 = FUNC_11(VAR_8);
 if (!VAR_9) {
  VAR_11 = -VAR_3;
  goto err;
 }

 VAR_10 = VAR_12.va;

 FUNC_3(&VAR_10->hdr, VAR_2,
          VAR_7,
          sizeof(*VAR_10), VAR_9, &VAR_12);

 VAR_10->hdr.version = 1;
 VAR_10->query_options = VAR_0;

 VAR_11 = FUNC_2(VAR_8);
 if (!VAR_11) {
  struct be_cmd_resp_acpi_wol_magic_config_v1 *VAR_13;

  VAR_13 = (struct be_cmd_resp_acpi_wol_magic_config_v1 *)VAR_12.va;

  VAR_8->wol_cap = VAR_13->wol_settings;


  if (VAR_8->wol_cap & VAR_1 &&
      !FUNC_7(VAR_13->magic_mac))
   VAR_8->wol_en = 1;
 }
err:
 FUNC_10(&VAR_8->mbox_lock);
 if (VAR_12.va)
  FUNC_6(&VAR_8->pdev->dev, VAR_12.size, VAR_12.va,
      VAR_12.dma);
 return VAR_11;

}
