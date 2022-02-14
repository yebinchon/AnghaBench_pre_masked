
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_tcp_stats {int dummy; } ;
struct pci_dev {int dummy; } ;
struct adapter {int stats_lock; } ;


 struct adapter* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,struct tp_tcp_stats*,struct tp_tcp_stats*,int) ;

void FUNC_4(struct pci_dev *VAR_0, struct tp_tcp_stats *VAR_1,
    struct tp_tcp_stats *VAR_2)
{
 struct adapter *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->stats_lock);
 FUNC_3(VAR_3, VAR_1, VAR_2, 0);
 FUNC_2(&VAR_3->stats_lock);
}
