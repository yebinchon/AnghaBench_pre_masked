
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_port_stats_info {int stats_size; int stats_version; int member_0; } ;
struct hinic_port_stats {int stats; scalar_t__ status; } ;
struct hinic_phy_port_stats {int dummy; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int stats_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,scalar_t__,int) ;
 int FUNC_1 (struct hinic_hwdev*,int ,struct hinic_port_stats_info*,int,struct hinic_port_stats*,int*) ;
 int FUNC_2 (struct hinic_port_stats*) ;
 struct hinic_port_stats* FUNC_3 (int,int ) ;
 int FUNC_4 (struct hinic_phy_port_stats*,int *,int) ;

int FUNC_5(struct hinic_dev *VAR_5,
        struct hinic_phy_port_stats *VAR_6)
{
 struct hinic_port_stats_info VAR_7 = { 0 };
 struct hinic_hwdev *VAR_8 = VAR_5->hwdev;
 struct hinic_hwif *VAR_9 = VAR_8->hwif;
 struct hinic_port_stats *VAR_10;
 u16 VAR_11 = sizeof(*VAR_10);
 struct pci_dev *VAR_12 = VAR_9->pdev;
 int VAR_13;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_7.stats_version = VAR_4;
 VAR_7.stats_size = sizeof(*VAR_10);

 VAR_13 = FUNC_1(VAR_8, VAR_3,
     &VAR_7, sizeof(VAR_7),
     VAR_10, &VAR_11);
 if (VAR_13 || !VAR_11 || VAR_10->status) {
  FUNC_0(&VAR_12->dev,
   "Failed to get port statistics, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_13, VAR_10->status, VAR_11);
  VAR_13 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_6, &VAR_10->stats, sizeof(*VAR_6));

out:
 FUNC_2(VAR_10);

 return VAR_13;
}
