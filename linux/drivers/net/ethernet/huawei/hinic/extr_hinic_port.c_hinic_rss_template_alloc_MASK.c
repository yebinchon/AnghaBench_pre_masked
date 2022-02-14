
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int template_mgmt ;
struct pci_dev {int dev; } ;
struct hinic_rss_template_mgmt {int template_id; scalar_t__ status; int cmd; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,scalar_t__,int ) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_rss_template_mgmt*,int,struct hinic_rss_template_mgmt*,int *) ;

int FUNC_3(struct hinic_dev *VAR_3, u8 *VAR_4)
{
 struct hinic_rss_template_mgmt VAR_5 = { 0 };
 struct hinic_hwdev *VAR_6 = VAR_3->hwdev;
 struct hinic_hwif *VAR_7 = VAR_6->hwif;
 struct pci_dev *VAR_8 = VAR_7->pdev;
 u16 VAR_9;
 int VAR_10;

 VAR_5.func_id = FUNC_0(VAR_7);
 VAR_5.cmd = VAR_2;

 VAR_10 = FUNC_2(VAR_6, VAR_1,
     &VAR_5, sizeof(VAR_5),
     &VAR_5, &VAR_9);
 if (VAR_10 || !VAR_9 || VAR_5.status) {
  FUNC_1(&VAR_8->dev, "Failed to alloc rss template, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_10, VAR_5.status, VAR_9);
  return -VAR_0;
 }

 *VAR_4 = VAR_5.template_id;

 return 0;
}
