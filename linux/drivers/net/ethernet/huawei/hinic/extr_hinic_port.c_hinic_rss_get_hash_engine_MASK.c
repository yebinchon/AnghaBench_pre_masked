
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_rss_engine_type {int hash_engine; scalar_t__ status; int template_id; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int hash_type ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,scalar_t__,int) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_rss_engine_type*,int,struct hinic_rss_engine_type*,int*) ;

int FUNC_3(struct hinic_dev *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct hinic_rss_engine_type VAR_5 = { 0 };
 struct hinic_hwdev *VAR_6 = VAR_2->hwdev;
 struct hinic_hwif *VAR_7;
 struct pci_dev *VAR_8;
 u16 VAR_9 = sizeof(VAR_5);
 int VAR_10;

 if (!VAR_6 || !VAR_4)
  return -VAR_0;

 VAR_7 = VAR_6->hwif;
 VAR_8 = VAR_7->pdev;

 VAR_5.func_id = FUNC_0(VAR_7);
 VAR_5.template_id = VAR_3;

 VAR_10 = FUNC_2(VAR_6, VAR_1,
     &VAR_5, sizeof(VAR_5),
     &VAR_5, &VAR_9);
 if (VAR_10 || !VAR_9 || VAR_5.status) {
  FUNC_1(&VAR_8->dev, "Failed to get hash engine, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_10, VAR_5.status, VAR_9);
  return -VAR_0;
 }

 *VAR_4 = VAR_5.hash_engine;
 return 0;
}
