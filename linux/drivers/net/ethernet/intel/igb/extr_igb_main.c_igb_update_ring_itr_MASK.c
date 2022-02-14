
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct TYPE_3__ {unsigned int total_packets; unsigned int total_bytes; scalar_t__ ring; } ;
struct igb_q_vector {int itr_val; int set_itr; TYPE_2__ tx; TYPE_1__ rx; struct igb_adapter* adapter; } ;
struct igb_adapter {scalar_t__ link_speed; int rx_itr_setting; int tx_itr_setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct igb_q_vector *VAR_4)
{
 int VAR_5 = VAR_4->itr_val;
 int VAR_6 = 0;
 struct igb_adapter *VAR_7 = VAR_4->adapter;
 unsigned int VAR_8;




 if (VAR_7->link_speed != VAR_2) {
  VAR_5 = VAR_1;
  goto set_itr_val;
 }

 VAR_8 = VAR_4->rx.total_packets;
 if (VAR_8)
  VAR_6 = VAR_4->rx.total_bytes / VAR_8;

 VAR_8 = VAR_4->tx.total_packets;
 if (VAR_8)
  VAR_6 = FUNC_0(VAR_3, VAR_6,
          VAR_4->tx.total_bytes / VAR_8);


 if (!VAR_6)
  goto clear_counts;


 VAR_6 += 24;


 VAR_6 = FUNC_1(VAR_6, 3000);


 if ((VAR_6 > 300) && (VAR_6 < 1200))
  VAR_5 = VAR_6 / 3;
 else
  VAR_5 = VAR_6 / 2;


 if (VAR_5 < VAR_0 &&
     ((VAR_4->rx.ring && VAR_7->rx_itr_setting == 3) ||
      (!VAR_4->rx.ring && VAR_7->tx_itr_setting == 3)))
  VAR_5 = VAR_0;

set_itr_val:
 if (VAR_5 != VAR_4->itr_val) {
  VAR_4->itr_val = VAR_5;
  VAR_4->set_itr = 1;
 }
clear_counts:
 VAR_4->rx.total_bytes = 0;
 VAR_4->rx.total_packets = 0;
 VAR_4->tx.total_bytes = 0;
 VAR_4->tx.total_packets = 0;
}
