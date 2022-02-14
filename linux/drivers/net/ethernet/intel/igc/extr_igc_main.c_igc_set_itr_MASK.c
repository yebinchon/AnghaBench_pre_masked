
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int itr; scalar_t__ ring; } ;
struct igc_q_vector {int itr_val; int set_itr; TYPE_1__ rx; TYPE_1__ tx; struct igc_adapter* adapter; } ;
struct igc_adapter {int link_speed; int rx_itr_setting; int tx_itr_setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct igc_q_vector*,TYPE_1__*) ;


 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct igc_q_vector *VAR_3)
{
 struct igc_adapter *VAR_4 = VAR_3->adapter;
 u32 VAR_5 = VAR_3->itr_val;
 u8 VAR_6 = 0;


 switch (VAR_4->link_speed) {
 case 132:
 case 131:
  VAR_6 = 0;
  VAR_5 = VAR_1;
  goto set_itr_now;
 default:
  break;
 }

 FUNC_0(VAR_3, &VAR_3->tx);
 FUNC_0(VAR_3, &VAR_3->rx);

 VAR_6 = FUNC_1(VAR_3->rx.itr, VAR_3->tx.itr);


 if (VAR_6 == 128 &&
     ((VAR_3->rx.ring && VAR_4->rx_itr_setting == 3) ||
     (!VAR_3->rx.ring && VAR_4->tx_itr_setting == 3)))
  VAR_6 = 129;

 switch (VAR_6) {

 case 128:
  VAR_5 = VAR_2;
  break;
 case 129:
  VAR_5 = VAR_0;
  break;
 case 130:
  VAR_5 = VAR_1;
  break;
 default:
  break;
 }

set_itr_now:
 if (VAR_5 != VAR_3->itr_val) {




  VAR_5 = VAR_5 > VAR_3->itr_val ?
     FUNC_1((VAR_5 * VAR_3->itr_val) /
     (VAR_5 + (VAR_3->itr_val >> 2)),
     VAR_5) : VAR_5;






  VAR_3->itr_val = VAR_5;
  VAR_3->set_itr = 1;
 }
}
