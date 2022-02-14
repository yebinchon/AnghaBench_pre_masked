
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nicvf {int ptp_clock; scalar_t__ drv_stats; int * nicvf_rx_mode_wq; TYPE_1__* pnicvf; } ;
struct net_device {scalar_t__ reg_state; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 struct nicvf* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nicvf*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_7(VAR_1);
 struct nicvf *VAR_3;
 struct net_device *VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_4(VAR_2);
 VAR_4 = VAR_3->pnicvf->netdev;




 if (VAR_4 && (VAR_4->reg_state == VAR_0))
  FUNC_10(VAR_4);
 if (VAR_3->nicvf_rx_mode_wq) {
  FUNC_1(VAR_3->nicvf_rx_mode_wq);
  VAR_3->nicvf_rx_mode_wq = ((void*)0);
 }
 FUNC_5(VAR_3);
 FUNC_9(VAR_1, ((void*)0));
 if (VAR_3->drv_stats)
  FUNC_3(VAR_3->drv_stats);
 FUNC_0(VAR_3->ptp_clock);
 FUNC_2(VAR_2);
 FUNC_8(VAR_1);
 FUNC_6(VAR_1);
}
