
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vport_stats ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_vport_stats {int dummy; } ;
struct hinic_port_stats_info {int stats_size; int func_id; int stats_version; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
struct hinic_cmd_vport_stats {int stats; scalar_t__ status; int member_0; } ;
typedef int stats_info ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,scalar_t__,int) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_port_stats_info*,int,struct hinic_cmd_vport_stats*,int*) ;
 int FUNC_3 (struct hinic_vport_stats*,int *,int) ;

int FUNC_4(struct hinic_dev *VAR_3,
     struct hinic_vport_stats *VAR_4)
{
 struct hinic_cmd_vport_stats VAR_5 = { 0 };
 struct hinic_port_stats_info VAR_6 = { 0 };
 struct hinic_hwdev *VAR_7 = VAR_3->hwdev;
 struct hinic_hwif *VAR_8 = VAR_7->hwif;
 u16 VAR_9 = sizeof(VAR_5);
 struct pci_dev *VAR_10 = VAR_8->pdev;
 int VAR_11;

 VAR_6.stats_version = VAR_2;
 VAR_6.func_id = FUNC_0(VAR_8);
 VAR_6.stats_size = sizeof(VAR_5);

 VAR_11 = FUNC_2(VAR_7, VAR_1,
     &VAR_6, sizeof(VAR_6),
     &VAR_5, &VAR_9);
 if (VAR_11 || !VAR_9 || VAR_5.status) {
  FUNC_1(&VAR_10->dev,
   "Failed to get function statistics, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_11, VAR_5.status, VAR_9);
  return -VAR_0;
 }

 FUNC_3(VAR_4, &VAR_5.stats, sizeof(*VAR_4));
 return 0;
}
