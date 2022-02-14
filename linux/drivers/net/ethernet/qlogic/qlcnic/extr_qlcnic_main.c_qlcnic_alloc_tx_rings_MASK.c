
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_tx_ring {int irq; struct qlcnic_adapter* adapter; int tx_clean_lock; struct qlcnic_cmd_buffer* cmd_buf_arr; int txq; int num_desc; } ;
struct qlcnic_cmd_buffer {int dummy; } ;
struct qlcnic_adapter {int drv_tx_rings; int flags; int drv_sds_rings; TYPE_1__* msix_entries; struct qlcnic_host_tx_ring* tx_ring; int num_txd; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_host_tx_ring*) ;
 struct qlcnic_host_tx_ring* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (int *) ;
 struct qlcnic_cmd_buffer* FUNC_8 (int ) ;

int FUNC_9(struct qlcnic_adapter *VAR_3,
     struct net_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct qlcnic_host_tx_ring *VAR_8;
 struct qlcnic_cmd_buffer *VAR_9;

 VAR_8 = FUNC_1(VAR_3->drv_tx_rings,
     sizeof(struct qlcnic_host_tx_ring), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_3->tx_ring = VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_3->drv_tx_rings; VAR_5++) {
  VAR_8 = &VAR_3->tx_ring[VAR_5];
  VAR_8->num_desc = VAR_3->num_txd;
  VAR_8->txq = FUNC_2(VAR_4, VAR_5);
  VAR_9 = FUNC_8(FUNC_0(VAR_8));
  if (VAR_9 == ((void*)0)) {
   FUNC_6(VAR_3);
   return -VAR_0;
  }
  VAR_8->cmd_buf_arr = VAR_9;
  FUNC_7(&VAR_8->tx_clean_lock);
 }

 if (FUNC_4(VAR_3) ||
     (FUNC_3(VAR_3) && FUNC_5(VAR_3))) {
  for (VAR_5 = 0; VAR_5 < VAR_3->drv_tx_rings; VAR_5++) {
   VAR_8 = &VAR_3->tx_ring[VAR_5];
   VAR_8->adapter = VAR_3;
   if (VAR_3->flags & VAR_2) {
    VAR_7 = VAR_3->drv_sds_rings + VAR_5;
    VAR_6 = VAR_3->msix_entries[VAR_7].vector;
    VAR_8->irq = VAR_6;
   }
  }
 }

 return 0;
}
