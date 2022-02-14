
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ice_32b_rx_flex_desc {int dummy; } ice_32b_rx_flex_desc ;
typedef int u8 ;
struct sk_buff {int protocol; } ;
struct ice_ring {int netdev; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct ice_ring*,struct sk_buff*,union ice_32b_rx_flex_desc*,int ) ;
 int FUNC_2 (struct ice_ring*,union ice_32b_rx_flex_desc*,struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ice_ring *VAR_0,
         union ice_32b_rx_flex_desc *VAR_1,
         struct sk_buff *VAR_2, u8 VAR_3)
{
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);


 VAR_2->protocol = FUNC_0(VAR_2, VAR_0->netdev);

 FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3);
}
