
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_ring {int cbs_enable; int idleslope; int sendslope; int hicredit; int locredit; } ;
struct igb_adapter {int num_tx_queues; struct igb_ring** tx_ring; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct igb_adapter *VAR_1, int VAR_2,
          bool VAR_3, int VAR_4, int VAR_5,
          int VAR_6, int VAR_7)
{
 struct igb_ring *VAR_8;

 if (VAR_2 < 0 || VAR_2 > VAR_1->num_tx_queues)
  return -VAR_0;

 VAR_8 = VAR_1->tx_ring[VAR_2];

 VAR_8->cbs_enable = VAR_3;
 VAR_8->idleslope = VAR_4;
 VAR_8->sendslope = VAR_5;
 VAR_8->hicredit = VAR_6;
 VAR_8->locredit = VAR_7;

 return 0;
}
