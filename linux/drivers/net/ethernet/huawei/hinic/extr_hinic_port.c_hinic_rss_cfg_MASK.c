
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_rss_config {scalar_t__ status; scalar_t__ rq_priority_number; void* template_id; void* rss_en; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int rss_cfg ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,scalar_t__,int ) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_rss_config*,int,struct hinic_rss_config*,int *) ;

int FUNC_3(struct hinic_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct hinic_hwdev *VAR_5 = VAR_2->hwdev;
 struct hinic_rss_config VAR_6 = { 0 };
 struct hinic_hwif *VAR_7 = VAR_5->hwif;
 struct pci_dev *VAR_8 = VAR_7->pdev;
 u16 VAR_9;
 int VAR_10;

 VAR_6.func_id = FUNC_0(VAR_7);
 VAR_6.rss_en = VAR_3;
 VAR_6.template_id = VAR_4;
 VAR_6.rq_priority_number = 0;

 VAR_10 = FUNC_2(VAR_5, VAR_1,
     &VAR_6, sizeof(VAR_6),
     &VAR_6, &VAR_9);
 if (VAR_10 || !VAR_9 || VAR_6.status) {
  FUNC_1(&VAR_8->dev,
   "Failed to set rss cfg, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_10, VAR_6.status, VAR_9);
  return -VAR_0;
 }

 return 0;
}
