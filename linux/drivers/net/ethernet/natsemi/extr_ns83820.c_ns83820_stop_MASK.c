
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ up; } ;
struct ns83820 {int IMR_cache; int misc_lock; TYPE_1__* pci_dev; TYPE_2__ rx_info; int tx_watchdog; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ns83820*) ;
 int FUNC_3 (struct ns83820*) ;
 int FUNC_4 (struct ns83820*) ;
 int FUNC_5 (struct ns83820*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6)
{
 struct ns83820 *VAR_7 = FUNC_0(VAR_6);


 FUNC_1(&VAR_7->tx_watchdog);

 FUNC_4(VAR_7);

 VAR_7->rx_info.up = 0;
 FUNC_8(VAR_7->pci_dev->irq);

 FUNC_5(VAR_7, VAR_0);

 FUNC_8(VAR_7->pci_dev->irq);

 FUNC_6(&VAR_7->misc_lock);
 VAR_7->IMR_cache &= ~(VAR_5 | VAR_3 | VAR_2 | VAR_1 | VAR_4);
 FUNC_7(&VAR_7->misc_lock);

 FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 return 0;
}
