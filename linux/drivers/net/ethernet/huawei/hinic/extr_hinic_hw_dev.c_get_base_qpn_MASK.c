
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_cmd_base_qpn {int qpn; scalar_t__ status; int func_idx; } ;
typedef int cmd_base_qpn ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_cmd_base_qpn*,int,struct hinic_cmd_base_qpn*,int*) ;

__attribute__((used)) static int FUNC_3(struct hinic_hwdev *VAR_2, u16 *VAR_3)
{
 struct hinic_cmd_base_qpn VAR_4;
 struct hinic_hwif *VAR_5 = VAR_2->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 u16 VAR_7;
 int VAR_8;

 VAR_4.func_idx = FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_2, VAR_1,
     &VAR_4, sizeof(VAR_4),
     &VAR_4, &VAR_7);
 if (VAR_8 || (VAR_7 != sizeof(VAR_4)) || VAR_4.status) {
  FUNC_1(&VAR_6->dev, "Failed to get base qpn, status = %d\n",
   VAR_4.status);
  return -VAR_0;
 }

 *VAR_3 = VAR_4.qpn;
 return 0;
}
