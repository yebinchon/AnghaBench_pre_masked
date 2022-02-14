
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iavf_rx_desc {int dummy; } iavf_rx_desc ;
typedef int u8 ;
struct sk_buff {int protocol; } ;
struct iavf_ring {int netdev; int queue_index; int vsi; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ,struct sk_buff*,union iavf_rx_desc*) ;
 int FUNC_2 (struct iavf_ring*,union iavf_rx_desc*,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static inline
void FUNC_4(struct iavf_ring *VAR_0,
        union iavf_rx_desc *VAR_1, struct sk_buff *VAR_2,
        u8 VAR_3)
{
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_0->vsi, VAR_2, VAR_1);

 FUNC_3(VAR_2, VAR_0->queue_index);


 VAR_2->protocol = FUNC_0(VAR_2, VAR_0->netdev);
}
