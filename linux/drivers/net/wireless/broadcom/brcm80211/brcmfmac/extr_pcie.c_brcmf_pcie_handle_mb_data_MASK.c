
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_pcie_shared_info {int dtoh_mb_data_addr; } ;
struct brcmf_pciedev_info {int mbdata_completed; TYPE_1__* pdev; int mbdata_resp_wait; struct brcmf_pcie_shared_info shared; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct brcmf_pciedev_info*,int) ;
 int FUNC_3 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_4 (struct brcmf_pciedev_info*,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct brcmf_pciedev_info *VAR_6)
{
 struct brcmf_pcie_shared_info *VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_7 = &VAR_6->shared;
 VAR_8 = VAR_7->dtoh_mb_data_addr;
 VAR_9 = FUNC_2(VAR_6, VAR_8);

 if (!VAR_9)
  return;

 FUNC_4(VAR_6, VAR_8, 0);

 FUNC_0(VAR_5, "D2H_MB_DATA: 0x%04x\n", VAR_9);
 if (VAR_9 & VAR_1) {
  FUNC_0(VAR_5, "D2H_MB_DATA: DEEP SLEEP REQ\n");
  FUNC_3(VAR_6, VAR_4);
  FUNC_0(VAR_5, "D2H_MB_DATA: sent DEEP SLEEP ACK\n");
 }
 if (VAR_9 & VAR_2)
  FUNC_0(VAR_5, "D2H_MB_DATA: DEEP SLEEP EXIT\n");
 if (VAR_9 & VAR_0) {
  FUNC_0(VAR_5, "D2H_MB_DATA: D3 ACK\n");
  VAR_6->mbdata_completed = 1;
  FUNC_5(&VAR_6->mbdata_resp_wait);
 }
 if (VAR_9 & VAR_3) {
  FUNC_0(VAR_5, "D2H_MB_DATA: FW HALT\n");
  FUNC_1(&VAR_6->pdev->dev);
 }
}
