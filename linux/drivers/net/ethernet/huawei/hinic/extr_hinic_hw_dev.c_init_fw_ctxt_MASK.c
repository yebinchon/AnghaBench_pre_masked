
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_cmd_fw_ctxt {scalar_t__ status; int rx_buf_sz; int func_idx; } ;
typedef int fw_ctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int FUNC_1 (struct hinic_hwif*) ;
 int FUNC_2 (struct hinic_hwif*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct hinic_hwdev*,int ,struct hinic_cmd_fw_ctxt*,int,struct hinic_cmd_fw_ctxt*,int*) ;

__attribute__((used)) static int FUNC_5(struct hinic_hwdev *VAR_4)
{
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct hinic_cmd_fw_ctxt VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_5) && !FUNC_2(VAR_5)) {
  FUNC_3(&VAR_6->dev, "Unsupported PCI Function type\n");
  return -VAR_1;
 }

 VAR_7.func_idx = FUNC_0(VAR_5);
 VAR_7.rx_buf_sz = VAR_3;

 VAR_9 = FUNC_4(VAR_4, VAR_2,
     &VAR_7, sizeof(VAR_7),
     &VAR_7, &VAR_8);
 if (VAR_9 || (VAR_8 != sizeof(VAR_7)) || VAR_7.status) {
  FUNC_3(&VAR_6->dev, "Failed to init FW ctxt, ret = %d\n",
   VAR_7.status);
  return -VAR_0;
 }

 return 0;
}
