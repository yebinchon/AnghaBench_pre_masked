
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac {int * rx_ring; int * tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bgmac*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bgmac *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(VAR_4, &VAR_4->tx_ring[VAR_5],
      VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(VAR_4, &VAR_4->rx_ring[VAR_5],
      VAR_2);
}
