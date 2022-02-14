
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct e1000_adapter {int alloc_rx_buff_failed; int napi; } ;


 struct sk_buff* FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct e1000_adapter *VAR_0,
       unsigned int VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_0(&VAR_0->napi, VAR_1);

 if (FUNC_1(!VAR_2))
  VAR_0->alloc_rx_buff_failed++;
 return VAR_2;
}
