
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ mtu; } ;
struct iavf_hw {scalar_t__ hw_addr; } ;
struct iavf_adapter {int flags; int num_active_queues; TYPE_1__* rx_rings; struct net_device* netdev; struct iavf_hw hw; } ;
struct TYPE_3__ {unsigned int rx_buf_len; scalar_t__ tail; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct iavf_adapter *VAR_7)
{
 unsigned int VAR_8 = VAR_4;
 struct iavf_hw *VAR_9 = &VAR_7->hw;
 int VAR_10;



 if (!(VAR_7->flags & VAR_2)) {
  struct net_device *VAR_11 = VAR_7->netdev;





  VAR_8 = VAR_5;





  if (!VAR_1 &&
      (VAR_11->mtu <= VAR_0))
   VAR_8 = VAR_3 - VAR_6;
 }


 for (VAR_10 = 0; VAR_10 < VAR_7->num_active_queues; VAR_10++) {
  VAR_7->rx_rings[VAR_10].tail = VAR_9->hw_addr + FUNC_0(VAR_10);
  VAR_7->rx_rings[VAR_10].rx_buf_len = VAR_8;

  if (VAR_7->flags & VAR_2)
   FUNC_1(&VAR_7->rx_rings[VAR_10]);
  else
   FUNC_2(&VAR_7->rx_rings[VAR_10]);
 }
}
