
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_lro_config {scalar_t__ status; void* lro_max_wqe_num; void* lro_ipv6_en; void* lro_ipv4_en; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int lro_cfg ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_lro_config*,int,struct hinic_lro_config*,int*) ;

__attribute__((used)) static int FUNC_3(struct hinic_dev *VAR_2, u8 VAR_3, u8 VAR_4,
       u8 VAR_5)
{
 struct hinic_hwdev *VAR_6 = VAR_2->hwdev;
 struct hinic_hwif *VAR_7 = VAR_6->hwif;
 struct hinic_lro_config VAR_8 = { 0 };
 struct pci_dev *VAR_9 = VAR_7->pdev;
 u16 VAR_10 = sizeof(VAR_8);
 int VAR_11;

 VAR_8.func_id = FUNC_0(VAR_7);
 VAR_8.lro_ipv4_en = VAR_3;
 VAR_8.lro_ipv6_en = VAR_4;
 VAR_8.lro_max_wqe_num = VAR_5;

 VAR_11 = FUNC_2(VAR_6, VAR_1,
     &VAR_8, sizeof(VAR_8),
     &VAR_8, &VAR_10);
 if (VAR_11 || !VAR_10 || VAR_8.status) {
  FUNC_1(&VAR_9->dev,
   "Failed to set lro offload, ret = %d\n",
   VAR_8.status);
  return -VAR_0;
 }

 return 0;
}
