
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int ip_summed; int dev; } ;
struct rmnet_port {int data_format; } ;
struct rmnet_map_header {int dummy; } ;
struct rmnet_endpoint {int egress_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct rmnet_endpoint* FUNC_6 (struct rmnet_port*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 void FUNC_8 (struct sk_buff*,struct rmnet_port*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct sk_buff *VAR_4,
       struct rmnet_port *VAR_5)
{
 struct rmnet_endpoint *VAR_6;
 u16 VAR_7, VAR_8;
 u8 VAR_9;

 if (FUNC_0(VAR_4)) {
  if (VAR_5->data_format & VAR_2)
   return FUNC_8(VAR_4, VAR_5);

  goto free_skb;
 }

 VAR_9 = FUNC_2(VAR_4);
 VAR_8 = FUNC_3(VAR_4);
 VAR_7 = FUNC_1(VAR_4) - VAR_8;

 if (VAR_9 >= VAR_3)
  goto free_skb;

 VAR_6 = FUNC_6(VAR_5, VAR_9);
 if (!VAR_6)
  goto free_skb;

 VAR_4->dev = VAR_6->egress_dev;


 FUNC_10(VAR_4, sizeof(struct rmnet_map_header));
 FUNC_9(VAR_4);

 if (VAR_5->data_format & VAR_1) {
  if (!FUNC_7(VAR_4, VAR_7 + VAR_8))
   VAR_4->ip_summed = VAR_0;
 }

 FUNC_11(VAR_4, VAR_7);
 FUNC_5(VAR_4);
 return;

free_skb:
 FUNC_4(VAR_4);
}
