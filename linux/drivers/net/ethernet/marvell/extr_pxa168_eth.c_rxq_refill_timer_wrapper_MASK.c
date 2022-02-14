
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pxa168_eth_private {int napi; } ;


 struct pxa168_eth_private* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 struct pxa168_eth_private* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct timer_list *VAR_2)
{
 struct pxa168_eth_private *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 FUNC_1(&VAR_3->napi);
}
