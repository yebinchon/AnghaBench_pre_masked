
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_ring {int launchtime_enable; } ;
struct igb_adapter {int num_tx_queues; struct igb_ring** tx_ring; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct igb_adapter *VAR_1, int VAR_2,
      bool VAR_3)
{
 struct igb_ring *VAR_4;

 if (VAR_2 < 0 || VAR_2 > VAR_1->num_tx_queues)
  return -VAR_0;

 VAR_4 = VAR_1->tx_ring[VAR_2];
 VAR_4->launchtime_enable = VAR_3;

 return 0;
}
