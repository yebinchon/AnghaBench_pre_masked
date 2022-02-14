
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2 {int flags; int temp_stats_blk; int regview; int pdev; int reset_task; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct bnx2* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void
FUNC_13(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_9(VAR_1);
 struct bnx2 *VAR_3 = FUNC_6(VAR_2);

 FUNC_12(VAR_2);

 FUNC_3(&VAR_3->timer);
 FUNC_2(&VAR_3->reset_task);

 FUNC_10(VAR_3->pdev, VAR_3->regview);

 FUNC_0(VAR_2);
 FUNC_5(VAR_3->temp_stats_blk);

 if (VAR_3->flags & VAR_0) {
  FUNC_8(VAR_1);
  VAR_3->flags &= ~VAR_0;
 }

 FUNC_1(VAR_3);

 FUNC_4(VAR_2);

 FUNC_11(VAR_1);
 FUNC_7(VAR_1);
}
