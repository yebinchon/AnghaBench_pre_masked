
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct hinic_rx_mode_work {int work; } ;
struct hinic_dev {int hwdev; int workq; struct hinic_rx_mode_work rx_mode_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct hinic_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int *) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_8(VAR_1);
 struct hinic_dev *VAR_3 = FUNC_6(VAR_2);
 struct hinic_rx_mode_work *VAR_4;

 FUNC_11(VAR_2);

 FUNC_5(VAR_3->hwdev,
      VAR_0);

 VAR_4 = &VAR_3->rx_mode_work;
 FUNC_0(&VAR_4->work);

 FUNC_10(VAR_1, ((void*)0));

 FUNC_1(VAR_3->workq);

 FUNC_4(VAR_3->hwdev);

 FUNC_3(VAR_2);

 FUNC_9(VAR_1);
 FUNC_7(VAR_1);

 FUNC_2(&VAR_1->dev, "HiNIC driver - removed\n");
}
