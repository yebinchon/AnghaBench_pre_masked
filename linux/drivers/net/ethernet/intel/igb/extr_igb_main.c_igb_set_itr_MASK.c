
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int itr; scalar_t__ ring; } ;
struct igb_q_vector {int itr_val; int set_itr; TYPE_1__ rx; TYPE_1__ tx; struct igb_adapter* adapter; } ;
struct igb_adapter {scalar_t__ link_speed; int rx_itr_setting; int tx_itr_setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (struct igb_q_vector*,TYPE_1__*) ;


 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct igb_q_vector *VAR_4)
{
 struct igb_adapter *VAR_5 = VAR_4->adapter;
 u32 VAR_6 = VAR_4->itr_val;
 u8 VAR_7 = 0;


 if (VAR_5->link_speed != VAR_3) {
  VAR_7 = 0;
  VAR_6 = VAR_1;
  goto set_itr_now;
 }

 FUNC_0(VAR_4, &VAR_4->tx);
 FUNC_0(VAR_4, &VAR_4->rx);

 VAR_7 = FUNC_1(VAR_4->rx.itr, VAR_4->tx.itr);


 if (VAR_7 == 128 &&
     ((VAR_4->rx.ring && VAR_5->rx_itr_setting == 3) ||
      (!VAR_4->rx.ring && VAR_5->tx_itr_setting == 3)))
  VAR_7 = 129;

 switch (VAR_7) {

 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_0;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 default:
  break;
 }

set_itr_now:
 if (VAR_6 != VAR_4->itr_val) {




  VAR_6 = VAR_6 > VAR_4->itr_val ?
     FUNC_1((VAR_6 * VAR_4->itr_val) /
     (VAR_6 + (VAR_4->itr_val >> 2)),
     VAR_6) : VAR_6;






  VAR_4->itr_val = VAR_6;
  VAR_4->set_itr = 1;
 }
}
