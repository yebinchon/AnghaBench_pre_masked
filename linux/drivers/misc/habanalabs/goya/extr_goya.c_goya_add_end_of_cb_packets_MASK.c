
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct packet_msg_prot {void* addr; void* value; void* ctl; } ;
struct hl_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_5 ;

void FUNC_2(struct hl_device *VAR_6, u64 VAR_7,
    u32 VAR_8, u64 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct packet_msg_prot *VAR_12;
 u32 VAR_13;

 VAR_12 = (struct packet_msg_prot *) (uintptr_t)
  (VAR_7 + VAR_8 - (sizeof(struct packet_msg_prot) * 2));

 VAR_13 = (VAR_4 << VAR_3) |
   (1 << VAR_1) |
   (1 << VAR_2);
 VAR_12->ctl = FUNC_0(VAR_13);
 VAR_12->value = FUNC_0(VAR_10);
 VAR_12->addr = FUNC_1(VAR_9);

 VAR_12++;

 VAR_13 = (VAR_4 << VAR_3) |
   (1 << VAR_2);
 VAR_12->ctl = FUNC_0(VAR_13);
 VAR_12->value = FUNC_0(VAR_11 & 0x7FF);
 VAR_12->addr = FUNC_1(VAR_0 + VAR_5);
}
