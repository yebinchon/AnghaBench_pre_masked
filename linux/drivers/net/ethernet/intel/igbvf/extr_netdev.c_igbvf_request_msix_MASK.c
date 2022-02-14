
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {char* name; } ;
struct igbvf_adapter {TYPE_3__* msix_entries; int current_itr; TYPE_2__* rx_ring; TYPE_1__* tx_ring; struct net_device* netdev; } ;
struct TYPE_6__ {int vector; } ;
struct TYPE_5__ {char* name; int itr_val; void* itr_register; } ;
struct TYPE_4__ {char* name; int itr_val; void* itr_register; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct igbvf_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,struct net_device*) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct igbvf_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 int VAR_6 = 0, VAR_7 = 0;

 if (FUNC_5(VAR_5->name) < (VAR_0 - 5)) {
  FUNC_4(VAR_4->tx_ring->name, "%s-tx-0", VAR_5->name);
  FUNC_4(VAR_4->rx_ring->name, "%s-rx-0", VAR_5->name);
 } else {
  FUNC_2(VAR_4->tx_ring->name, VAR_5->name, VAR_0);
  FUNC_2(VAR_4->rx_ring->name, VAR_5->name, VAR_0);
 }

 VAR_6 = FUNC_3(VAR_4->msix_entries[VAR_7].vector,
     VAR_2, 0, VAR_4->tx_ring->name,
     VAR_5);
 if (VAR_6)
  goto out;

 VAR_4->tx_ring->itr_register = FUNC_0(VAR_7);
 VAR_4->tx_ring->itr_val = VAR_4->current_itr;
 VAR_7++;

 VAR_6 = FUNC_3(VAR_4->msix_entries[VAR_7].vector,
     VAR_1, 0, VAR_4->rx_ring->name,
     VAR_5);
 if (VAR_6)
  goto out;

 VAR_4->rx_ring->itr_register = FUNC_0(VAR_7);
 VAR_4->rx_ring->itr_val = VAR_4->current_itr;
 VAR_7++;

 VAR_6 = FUNC_3(VAR_4->msix_entries[VAR_7].vector,
     VAR_3, 0, VAR_5->name, VAR_5);
 if (VAR_6)
  goto out;

 FUNC_1(VAR_4);
 return 0;
out:
 return VAR_6;
}
