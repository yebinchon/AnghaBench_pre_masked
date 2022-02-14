
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_rq_num {scalar_t__ status; int rq_depth; int num_rqs; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int rq_num ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_rq_num*,int,struct hinic_rq_num*,int*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct hinic_dev *VAR_3, u8 VAR_4)
{
 struct hinic_hwdev *VAR_5 = VAR_3->hwdev;
 struct hinic_hwif *VAR_6 = VAR_5->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 struct hinic_rq_num VAR_8 = { 0 };
 u16 VAR_9 = sizeof(VAR_8);
 int VAR_10;

 VAR_8.func_id = FUNC_0(VAR_6);
 VAR_8.num_rqs = VAR_4;
 VAR_8.rq_depth = FUNC_3(VAR_2);

 VAR_10 = FUNC_2(VAR_5, VAR_1,
     &VAR_8, sizeof(VAR_8),
     &VAR_8, &VAR_9);
 if (VAR_10 || !VAR_9 || VAR_8.status) {
  FUNC_1(&VAR_7->dev,
   "Failed to rxq number, ret = %d\n",
   VAR_8.status);
  return -VAR_0;
 }

 return 0;
}
