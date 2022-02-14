
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_ring_container {unsigned int target_itr; unsigned long next_update; unsigned int total_pkts; unsigned int total_bytes; int current_itr; int itr_setting; int ring; } ;
struct TYPE_3__ {unsigned int target_itr; int current_itr; } ;
struct ice_q_vector {TYPE_2__* vsi; struct ice_ring_container rx; TYPE_1__ tx; scalar_t__ itr_countdown; } ;
struct TYPE_4__ {int port_info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int,unsigned int) ;
 unsigned long VAR_6 ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct ice_q_vector *VAR_7, struct ice_ring_container *VAR_8)
{
 unsigned long VAR_9 = VAR_6;
 unsigned int VAR_10, VAR_11, VAR_12;
 bool VAR_13;

 if (!VAR_8->ring || !FUNC_0(VAR_8->itr_setting))
  return;







 if (VAR_7->itr_countdown) {
  VAR_12 = VAR_8->target_itr;
  goto clear_counts;
 }

 VAR_13 = (&VAR_7->rx == VAR_8);



 VAR_12 = VAR_13 ?
  VAR_4 | VAR_1 :
  VAR_2 | VAR_1;






 if (FUNC_4(VAR_9, VAR_8->next_update))
  goto clear_counts;

 FUNC_3(VAR_7->vsi->port_info);

 VAR_10 = VAR_8->total_pkts;
 VAR_11 = VAR_8->total_bytes;

 if (VAR_13) {





  if (VAR_10 && VAR_10 < 4 && VAR_11 < 9000 &&
      (VAR_7->tx.target_itr & VAR_1)) {
   VAR_12 = VAR_1;
   goto adjust_by_size_and_speed;
  }
 } else if (VAR_10 < 4) {





  if (VAR_8->target_itr == VAR_2 &&
      (VAR_7->rx.target_itr & VAR_5) ==
      VAR_2)
   goto clear_counts;
 } else if (VAR_10 > 32) {



  VAR_8->target_itr &= ~VAR_1;
 }
 if (VAR_10 < 56) {
  VAR_12 = VAR_8->target_itr + VAR_3;
  if ((VAR_12 & VAR_5) > VAR_2) {
   VAR_12 &= VAR_1;
   VAR_12 += VAR_2;
  }
  goto clear_counts;
 }

 if (VAR_10 <= 256) {
  VAR_12 = FUNC_2(VAR_7->tx.current_itr, VAR_7->rx.current_itr);
  VAR_12 &= VAR_5;





  if (VAR_10 <= 112)
   goto clear_counts;






  VAR_12 >>= 1;
  VAR_12 &= VAR_5;
  if (VAR_12 < VAR_4)
   VAR_12 = VAR_4;

  goto clear_counts;
 }







 VAR_12 = VAR_0;

adjust_by_size_and_speed:


 VAR_12 = FUNC_1(VAR_7->vsi->port_info,
            VAR_11 / VAR_10, VAR_12);

clear_counts:

 VAR_8->target_itr = VAR_12;


 VAR_8->next_update = VAR_9 + 1;

 VAR_8->total_bytes = 0;
 VAR_8->total_pkts = 0;
}
