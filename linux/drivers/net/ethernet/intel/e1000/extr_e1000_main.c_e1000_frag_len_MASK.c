
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct e1000_adapter {int rx_buffer_len; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct e1000_adapter *VAR_1)
{
 return FUNC_0(VAR_1->rx_buffer_len + VAR_0) +
  FUNC_0(sizeof(struct skb_shared_info));
}
