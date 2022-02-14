
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rndis_packet_msg_type {void* DataLength; void* DataOffset; void* MessageLength; void* MessageType; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct rndis_packet_msg_type*,int ,int) ;
 struct rndis_packet_msg_type* FUNC_2 (struct sk_buff*,int) ;

void FUNC_3(struct sk_buff *VAR_1)
{
 struct rndis_packet_msg_type *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_2));
 FUNC_1(VAR_2, 0, sizeof *VAR_2);
 VAR_2->MessageType = FUNC_0(VAR_0);
 VAR_2->MessageLength = FUNC_0(VAR_1->len);
 VAR_2->DataOffset = FUNC_0(36);
 VAR_2->DataLength = FUNC_0(VAR_1->len - sizeof(*VAR_2));
}
