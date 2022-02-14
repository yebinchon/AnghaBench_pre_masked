
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int up_ver ;
typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_version_info {char* ver; scalar_t__ status; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,scalar_t__,int ) ;
 int FUNC_1 (struct hinic_hwdev*,int ,struct hinic_version_info*,int,struct hinic_version_info*,int *) ;
 int FUNC_2 (int *,int ,char*,char*) ;

int FUNC_3(struct hinic_dev *VAR_3, u8 *VAR_4)
{
 struct hinic_hwdev *VAR_5 = VAR_3->hwdev;
 struct hinic_version_info VAR_6 = {0};
 struct hinic_hwif *VAR_7;
 struct pci_dev *VAR_8;
 u16 VAR_9;
 int VAR_10;

 if (!VAR_5)
  return -VAR_0;

 VAR_7 = VAR_5->hwif;
 VAR_8 = VAR_7->pdev;

 VAR_10 = FUNC_1(VAR_5, VAR_2,
     &VAR_6, sizeof(VAR_6), &VAR_6,
     &VAR_9);
 if (VAR_10 || !VAR_9 || VAR_6.status) {
  FUNC_0(&VAR_8->dev,
   "Failed to get mgmt version, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_10, VAR_6.status, VAR_9);
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_1, "%s", VAR_6.ver);

 return 0;
}
