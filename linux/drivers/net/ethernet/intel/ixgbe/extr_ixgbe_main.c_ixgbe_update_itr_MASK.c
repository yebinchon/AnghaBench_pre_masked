
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_ring_container {unsigned long next_update; unsigned int total_packets; unsigned int itr; unsigned int total_bytes; int ring; } ;
struct ixgbe_q_vector {int itr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int link_speed; } ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;





 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_q_vector *VAR_6,
        struct ixgbe_ring_container *VAR_7)
{
 unsigned int VAR_8 = VAR_4 |
      VAR_1;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12 = VAR_5;




 if (!VAR_7->ring)
  return;






 if (FUNC_1(VAR_12, VAR_7->next_update))
  goto clear_counts;

 VAR_10 = VAR_7->total_packets;
 if (!VAR_10) {
  VAR_8 = (VAR_6->itr >> 2) + VAR_3;
  if (VAR_8 > VAR_2)
   VAR_8 = VAR_2;
  VAR_8 += VAR_7->itr & VAR_1;
  goto clear_counts;
 }

 VAR_11 = VAR_7->total_bytes;





 if (VAR_10 < 4 && VAR_11 < 9000) {
  VAR_8 = VAR_1;
  goto adjust_by_size;
 }





 if (VAR_10 < 48) {
  VAR_8 = (VAR_6->itr >> 2) + VAR_3;
  if (VAR_8 > VAR_2)
   VAR_8 = VAR_2;
  goto clear_counts;
 }




 if (VAR_10 < 96) {
  VAR_8 = VAR_6->itr >> 2;
  goto clear_counts;
 }





 if (VAR_10 < 256) {
  VAR_8 = VAR_6->itr >> 3;
  if (VAR_8 < VAR_4)
   VAR_8 = VAR_4;
  goto clear_counts;
 }







 VAR_8 = VAR_0;

adjust_by_size:





 VAR_9 = VAR_11 / VAR_10;
 if (VAR_9 <= 60) {

  VAR_9 = 5120;
 } else if (VAR_9 <= 316) {

  VAR_9 *= 40;
  VAR_9 += 2720;
 } else if (VAR_9 <= 1084) {

  VAR_9 *= 15;
  VAR_9 += 11452;
 } else if (VAR_9 < 1968) {

  VAR_9 *= 5;
  VAR_9 += 22420;
 } else {

  VAR_9 = 32256;
 }




 if (VAR_8 & VAR_1)
  VAR_9 >>= 1;
 switch (VAR_6->adapter->link_speed) {
 case 131:
 case 132:
 default:
  VAR_8 += FUNC_0(VAR_9,
        VAR_3 * 256) *
         VAR_3;
  break;
 case 128:
 case 129:
 case 130:
  if (VAR_9 > 8064)
   VAR_9 = 8064;
  VAR_8 += FUNC_0(VAR_9,
        VAR_3 * 64) *
         VAR_3;
  break;
 }

clear_counts:

 VAR_7->itr = VAR_8;


 VAR_7->next_update = VAR_12 + 1;

 VAR_7->total_bytes = 0;
 VAR_7->total_packets = 0;
}
