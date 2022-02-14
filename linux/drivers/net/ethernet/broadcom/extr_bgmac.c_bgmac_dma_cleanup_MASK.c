
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac {int * rx_ring; int * tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgmac*,int *) ;
 int FUNC_1 (struct bgmac*,int *) ;

__attribute__((used)) static void FUNC_2(struct bgmac *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(VAR_2, &VAR_2->tx_ring[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, &VAR_2->rx_ring[VAR_3]);
}
