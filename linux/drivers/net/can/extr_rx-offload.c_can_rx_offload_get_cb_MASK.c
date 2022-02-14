
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct can_rx_offload_cb {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct can_rx_offload_cb *FUNC_1(struct sk_buff *VAR_0)
{
 FUNC_0(sizeof(struct can_rx_offload_cb) > sizeof(VAR_0->cb));

 return (struct can_rx_offload_cb *)VAR_0->cb;
}
