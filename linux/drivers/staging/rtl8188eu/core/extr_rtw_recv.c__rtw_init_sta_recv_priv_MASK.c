
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_recv_priv {int defrag_q; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sta_recv_priv *VAR_0)
{
 FUNC_1((u8 *)VAR_0, 0, sizeof(struct sta_recv_priv));

 FUNC_2(&VAR_0->lock);

 FUNC_0(&VAR_0->defrag_q);
}
