
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct de4x5_private {int ** tx_skb; TYPE_1__* tx_ring; int gendev; } ;
struct TYPE_2__ {int des1; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct de4x5_private *VAR_2, int VAR_3)
{
    FUNC_1(VAR_2->gendev, FUNC_2(VAR_2->tx_ring[VAR_3].buf),
       FUNC_2(VAR_2->tx_ring[VAR_3].des1) & VAR_1,
       VAR_0);
    if ((u_long) VAR_2->tx_skb[VAR_3] > 1)
 FUNC_0(VAR_2->tx_skb[VAR_3]);
    VAR_2->tx_skb[VAR_3] = ((void*)0);
}
