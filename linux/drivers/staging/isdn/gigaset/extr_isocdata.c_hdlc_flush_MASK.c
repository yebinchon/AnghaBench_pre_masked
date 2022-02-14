
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bc_state {int rx_fcs; int * rx_skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct bc_state*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bc_state *VAR_1)
{

 if (VAR_1->rx_skb != ((void*)0))
  FUNC_1(VAR_1->rx_skb, 0);
 else
  FUNC_0(VAR_1);


 VAR_1->rx_fcs = VAR_0;
}
