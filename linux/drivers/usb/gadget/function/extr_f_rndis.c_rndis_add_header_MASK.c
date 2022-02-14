
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rndis_packet_msg_type {int dummy; } ;
struct gether {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct gether *VAR_0,
     struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1, sizeof(struct rndis_packet_msg_type));
 FUNC_1(VAR_2);

 FUNC_0(VAR_1);
 return VAR_2;
}
