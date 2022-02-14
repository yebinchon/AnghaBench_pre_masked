
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbevf_ring_container {int total_bytes; int total_packets; int itr; } ;
struct ixgbevf_q_vector {int itr; } ;






__attribute__((used)) static void FUNC_0(struct ixgbevf_q_vector *VAR_0,
          struct ixgbevf_ring_container *VAR_1)
{
 int VAR_2 = VAR_1->total_bytes;
 int VAR_3 = VAR_1->total_packets;
 u32 VAR_4;
 u64 VAR_5;
 u8 VAR_6 = VAR_1->itr;

 if (VAR_3 == 0)
  return;







 VAR_4 = VAR_0->itr >> 2;
 if (VAR_4 == 0)
  return;

 VAR_5 = VAR_2 / VAR_4;

 switch (VAR_6) {
 case 128:
  if (VAR_5 > 10)
   VAR_6 = 129;
  break;
 case 129:
  if (VAR_5 > 20)
   VAR_6 = 130;
  else if (VAR_5 <= 10)
   VAR_6 = 128;
  break;
 case 130:
  if (VAR_5 <= 20)
   VAR_6 = 129;
  break;
 }


 VAR_1->total_bytes = 0;
 VAR_1->total_packets = 0;


 VAR_1->itr = VAR_6;
}
