
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int tx_timeout_task_counter; int waitq; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct spider_net_card* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct spider_net_card*,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4;
 struct spider_net_card *VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_4);

 FUNC_7(VAR_5->waitq,
     FUNC_0(&VAR_5->tx_timeout_task_counter) == 0);

 FUNC_6(VAR_4);


 FUNC_5(VAR_5, VAR_0,
        VAR_2);
 FUNC_5(VAR_5, VAR_0,
        VAR_1);

 FUNC_4(VAR_5);
 FUNC_1(VAR_4);
}
