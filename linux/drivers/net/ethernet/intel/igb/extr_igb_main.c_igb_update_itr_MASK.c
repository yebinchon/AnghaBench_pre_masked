
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct igb_ring_container {unsigned int total_packets; unsigned int total_bytes; int itr; } ;
struct igb_q_vector {int dummy; } ;






__attribute__((used)) static void FUNC_0(struct igb_q_vector *VAR_0,
      struct igb_ring_container *VAR_1)
{
 unsigned int VAR_2 = VAR_1->total_packets;
 unsigned int VAR_3 = VAR_1->total_bytes;
 u8 VAR_4 = VAR_1->itr;


 if (VAR_2 == 0)
  return;

 switch (VAR_4) {
 case 128:

  if (VAR_3/VAR_2 > 8000)
   VAR_4 = 130;
  else if ((VAR_2 < 5) && (VAR_3 > 512))
   VAR_4 = 129;
  break;
 case 129:
  if (VAR_3 > 10000) {

   if (VAR_3/VAR_2 > 8000)
    VAR_4 = 130;
   else if ((VAR_2 < 10) || ((VAR_3/VAR_2) > 1200))
    VAR_4 = 130;
   else if ((VAR_2 > 35))
    VAR_4 = 128;
  } else if (VAR_3/VAR_2 > 2000) {
   VAR_4 = 130;
  } else if (VAR_2 <= 2 && VAR_3 < 512) {
   VAR_4 = 128;
  }
  break;
 case 130:
  if (VAR_3 > 25000) {
   if (VAR_2 > 35)
    VAR_4 = 129;
  } else if (VAR_3 < 1500) {
   VAR_4 = 129;
  }
  break;
 }


 VAR_1->total_bytes = 0;
 VAR_1->total_packets = 0;


 VAR_1->itr = VAR_4;
}
