
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct be_phy_info {int misc_params; int fixed_speeds_supported; int auto_speeds_supported; int interface_type; int phy_type; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_phy_info* va; } ;
struct be_cmd_req_hdr {int dummy; } ;
struct be_cmd_req_get_phy_info {int misc_params; int fixed_speeds_supported; int auto_speeds_supported; int interface_type; int phy_type; int hdr; } ;
struct TYPE_3__ {int fixed_speeds_supported; int misc_params; void* auto_speeds_supported; void* interface_type; void* phy_type; } ;
struct be_adapter {int mcc_lock; TYPE_2__* pdev; TYPE_1__ phy; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct be_adapter*,int ,int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_4 (int *,char*) ;
 struct be_phy_info* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,struct be_phy_info*,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (struct be_adapter*) ;

int FUNC_12(struct be_adapter *VAR_8)
{
 struct be_mcc_wrb *VAR_9;
 struct be_cmd_req_get_phy_info *VAR_10;
 struct be_dma_mem VAR_11;
 int VAR_12;

 if (!FUNC_1(VAR_8, VAR_7,
       VAR_2))
  return -VAR_5;

 FUNC_9(&VAR_8->mcc_lock);

 VAR_9 = FUNC_11(VAR_8);
 if (!VAR_9) {
  VAR_12 = -VAR_3;
  goto err;
 }
 VAR_11.size = sizeof(struct be_cmd_req_get_phy_info);
 VAR_11.va = FUNC_5(&VAR_8->pdev->dev, VAR_11.size, &VAR_11.dma,
        VAR_6);
 if (!VAR_11.va) {
  FUNC_4(&VAR_8->pdev->dev, "Memory alloc failure\n");
  VAR_12 = -VAR_4;
  goto err;
 }

 VAR_10 = VAR_11.va;

 FUNC_3(&VAR_10->hdr, VAR_2,
          VAR_7, sizeof(*VAR_10),
          VAR_9, &VAR_11);

 VAR_12 = FUNC_2(VAR_8);
 if (!VAR_12) {
  struct be_phy_info *VAR_13 =
    VAR_11.va + sizeof(struct be_cmd_req_hdr);

  VAR_8->phy.phy_type = FUNC_7(VAR_13->phy_type);
  VAR_8->phy.interface_type =
   FUNC_7(VAR_13->interface_type);
  VAR_8->phy.auto_speeds_supported =
   FUNC_7(VAR_13->auto_speeds_supported);
  VAR_8->phy.fixed_speeds_supported =
   FUNC_7(VAR_13->fixed_speeds_supported);
  VAR_8->phy.misc_params =
   FUNC_8(VAR_13->misc_params);

  if (FUNC_0(VAR_8)) {
   VAR_8->phy.fixed_speeds_supported =
    VAR_0 |
    VAR_1;
  }
 }
 FUNC_6(&VAR_8->pdev->dev, VAR_11.size, VAR_11.va, VAR_11.dma);
err:
 FUNC_10(&VAR_8->mcc_lock);
 return VAR_12;
}
