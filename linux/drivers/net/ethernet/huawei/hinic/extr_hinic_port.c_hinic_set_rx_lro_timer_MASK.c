
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_lro_timer {int status; int enable; int timer; scalar_t__ type; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int lro_timer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_lro_timer*,int,struct hinic_lro_timer*,int*) ;

__attribute__((used)) static int FUNC_3(struct hinic_dev *VAR_2, u32 VAR_3)
{
 struct hinic_hwdev *VAR_4 = VAR_2->hwdev;
 struct hinic_lro_timer VAR_5 = { 0 };
 struct hinic_hwif *VAR_6 = VAR_4->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 u16 VAR_8 = sizeof(VAR_5);
 int VAR_9;

 VAR_5.status = 0;
 VAR_5.type = 0;
 VAR_5.enable = 1;
 VAR_5.timer = VAR_3;

 VAR_9 = FUNC_2(VAR_4, VAR_1,
     &VAR_5, sizeof(VAR_5),
     &VAR_5, &VAR_8);
 if (VAR_5.status == 0xFF) {

  VAR_5.status = 0;
  FUNC_0(&VAR_7->dev,
   "Set lro timer not supported by the current FW version, it will be 1ms default\n");
 }

 if (VAR_9 || !VAR_8 || VAR_5.status) {
  FUNC_1(&VAR_7->dev,
   "Failed to set lro timer, ret = %d\n",
   VAR_5.status);

  return -VAR_0;
 }

 return 0;
}
