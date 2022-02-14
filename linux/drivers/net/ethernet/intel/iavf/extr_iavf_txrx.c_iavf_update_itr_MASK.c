
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iavf_ring_container {unsigned long next_update; unsigned int target_itr; unsigned int total_packets; unsigned int total_bytes; TYPE_1__* ring; } ;
struct TYPE_6__ {unsigned int target_itr; int current_itr; } ;
struct TYPE_5__ {unsigned int target_itr; int current_itr; } ;
struct iavf_q_vector {TYPE_3__ rx; TYPE_2__ tx; scalar_t__ itr_countdown; } ;
struct TYPE_4__ {int itr_setting; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct iavf_q_vector*,struct iavf_ring_container*) ;
 int FUNC_3 (struct iavf_q_vector*) ;
 unsigned long VAR_6 ;
 unsigned int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct iavf_q_vector *VAR_7,
       struct iavf_ring_container *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = VAR_6;




 if (!VAR_8->ring || !FUNC_1(VAR_8->ring->itr_setting))
  return;




 VAR_12 = FUNC_2(VAR_7, VAR_8) ?
       VAR_4 | VAR_1 :
       VAR_2 | VAR_1;






 if (FUNC_5(VAR_13, VAR_8->next_update))
  goto clear_counts;







 if (VAR_7->itr_countdown) {
  VAR_12 = VAR_8->target_itr;
  goto clear_counts;
 }

 VAR_10 = VAR_8->total_packets;
 VAR_11 = VAR_8->total_bytes;

 if (FUNC_2(VAR_7, VAR_8)) {





  if (VAR_10 && VAR_10 < 4 && VAR_11 < 9000 &&
      (VAR_7->tx.target_itr & VAR_1)) {
   VAR_12 = VAR_1;
   goto adjust_by_size;
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
  VAR_12 = FUNC_4(VAR_7->tx.current_itr, VAR_7->rx.current_itr);
  VAR_12 &= VAR_5;





  if (VAR_10 <= 112)
   goto clear_counts;






  VAR_12 /= 2;
  VAR_12 &= VAR_5;
  if (VAR_12 < VAR_4)
   VAR_12 = VAR_4;

  goto clear_counts;
 }







 VAR_12 = VAR_0;

adjust_by_size:





 VAR_9 = VAR_11 / VAR_10;
 if (VAR_9 <= 60) {

  VAR_9 = 4096;
 } else if (VAR_9 <= 380) {

  VAR_9 *= 40;
  VAR_9 += 1696;
 } else if (VAR_9 <= 1084) {

  VAR_9 *= 15;
  VAR_9 += 11452;
 } else if (VAR_9 <= 1980) {

  VAR_9 *= 5;
  VAR_9 += 22420;
 } else {

  VAR_9 = 32256;
 }




 if (VAR_12 & VAR_1)
  VAR_9 /= 2;
 VAR_12 += FUNC_0(VAR_9, FUNC_3(VAR_7)) *
        VAR_3;

 if ((VAR_12 & VAR_5) > VAR_2) {
  VAR_12 &= VAR_1;
  VAR_12 += VAR_2;
 }

clear_counts:

 VAR_8->target_itr = VAR_12;


 VAR_8->next_update = VAR_13 + 1;

 VAR_8->total_bytes = 0;
 VAR_8->total_packets = 0;
}
