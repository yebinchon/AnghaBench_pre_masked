
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pci_funcnum; int * controller_serial_number; int phy_port; } ;
struct mgmt_controller_attrib {TYPE_1__ hba_attribs; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct mgmt_controller_attrib* va; } ;
struct be_cmd_resp_hdr {int dummy; } ;
struct be_cmd_resp_cntl_attribs {int dummy; } ;
struct be_cmd_req_cntl_attribs {TYPE_1__ hba_attribs; int hdr; } ;
struct be_adapter {int* serial_num; TYPE_2__* pdev; int mbox_lock; int pf_num; int hba_port_num; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_4 (int *,char*) ;
 struct mgmt_controller_attrib* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,struct mgmt_controller_attrib*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct be_dma_mem*,int ,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct be_mcc_wrb* FUNC_12 (struct be_adapter*) ;

int FUNC_13(struct be_adapter *VAR_6)
{
 struct be_mcc_wrb *VAR_7;
 struct be_cmd_req_cntl_attribs *VAR_8;
 struct be_cmd_resp_cntl_attribs *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = FUNC_8(sizeof(*VAR_8), sizeof(*VAR_9));
 struct mgmt_controller_attrib *VAR_13;
 struct be_dma_mem VAR_14;
 u32 *VAR_15;

 if (FUNC_10(&VAR_6->mbox_lock))
  return -1;

 FUNC_9(&VAR_14, 0, sizeof(struct be_dma_mem));
 VAR_14.size = sizeof(struct be_cmd_resp_cntl_attribs);
 VAR_14.va = FUNC_5(&VAR_6->pdev->dev,
         VAR_14.size,
         &VAR_14.dma, VAR_4);
 if (!VAR_14.va) {
  FUNC_4(&VAR_6->pdev->dev, "Memory allocation failure\n");
  VAR_10 = -VAR_3;
  goto err;
 }

 VAR_7 = FUNC_12(VAR_6);
 if (!VAR_7) {
  VAR_10 = -VAR_2;
  goto err;
 }
 VAR_8 = VAR_14.va;

 FUNC_3(&VAR_8->hdr, VAR_0,
          VAR_5, VAR_12,
          VAR_7, &VAR_14);

 VAR_10 = FUNC_2(VAR_6);
 if (!VAR_10) {
  VAR_13 = VAR_14.va + sizeof(struct be_cmd_resp_hdr);
  VAR_6->hba_port_num = VAR_13->hba_attribs.phy_port;
  VAR_15 = VAR_13->hba_attribs.controller_serial_number;
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   VAR_6->serial_num[VAR_11] = FUNC_7(VAR_15[VAR_11]) &
    (FUNC_1(16) - 1);



  if (FUNC_0(VAR_6))
   VAR_6->pf_num = VAR_13->hba_attribs.pci_funcnum;
 }

err:
 FUNC_11(&VAR_6->mbox_lock);
 if (VAR_14.va)
  FUNC_6(&VAR_6->pdev->dev, VAR_14.size,
      VAR_14.va, VAR_14.dma);
 return VAR_10;
}
