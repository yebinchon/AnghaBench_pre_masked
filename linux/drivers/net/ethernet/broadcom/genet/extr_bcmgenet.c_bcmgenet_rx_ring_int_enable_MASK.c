
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcmgenet_rx_ring {int index; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct bcmgenet_rx_ring *VAR_2)
{
 FUNC_0(VAR_2->priv,
     1 << (VAR_1 + VAR_2->index),
     VAR_0);
}
