
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union enetc_tx_bd {int dummy; } enetc_tx_bd ;
struct enetc_bdr {int bd_count; int * tx_swbd; int * bd_base; int bd_dma_base; int dev; } ;


 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct enetc_bdr*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct enetc_bdr *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->bd_count; VAR_2++)
  FUNC_1(VAR_0, &VAR_0->tx_swbd[VAR_2]);

 VAR_1 = VAR_0->bd_count * sizeof(union enetc_tx_bd);

 FUNC_0(VAR_0->dev, VAR_1, VAR_0->bd_base, VAR_0->bd_dma_base);
 VAR_0->bd_base = ((void*)0);

 FUNC_2(VAR_0->tx_swbd);
 VAR_0->tx_swbd = ((void*)0);
}
