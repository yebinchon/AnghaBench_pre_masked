
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_rss_key {scalar_t__ status; int key; int template_id; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int rss_key ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,scalar_t__,int ) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_rss_key*,int,struct hinic_rss_key*,int *) ;
 int FUNC_3 (int ,int const*,int ) ;

int FUNC_4(struct hinic_dev *VAR_3, u32 VAR_4,
          const u8 *VAR_5)
{
 struct hinic_hwdev *VAR_6 = VAR_3->hwdev;
 struct hinic_hwif *VAR_7 = VAR_6->hwif;
 struct hinic_rss_key VAR_8 = { 0 };
 struct pci_dev *VAR_9 = VAR_7->pdev;
 u16 VAR_10;
 int VAR_11;

 VAR_8.func_id = FUNC_0(VAR_7);
 VAR_8.template_id = VAR_4;
 FUNC_3(VAR_8.key, VAR_5, VAR_2);

 VAR_11 = FUNC_2(VAR_6, VAR_1,
     &VAR_8, sizeof(VAR_8),
     &VAR_8, &VAR_10);
 if (VAR_11 || !VAR_10 || VAR_8.status) {
  FUNC_1(&VAR_9->dev,
   "Failed to set rss hash key, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_11, VAR_8.status, VAR_10);
  return -VAR_0;
 }

 return 0;
}
