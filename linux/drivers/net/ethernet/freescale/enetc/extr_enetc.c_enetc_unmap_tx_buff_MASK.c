
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_tx_swbd {scalar_t__ dma; int len; scalar_t__ is_dma_page; } ;
struct enetc_bdr {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_bdr *VAR_1,
    struct enetc_tx_swbd *VAR_2)
{
 if (VAR_2->is_dma_page)
  FUNC_0(VAR_1->dev, VAR_2->dma,
          VAR_2->len, VAR_0);
 else
  FUNC_1(VAR_1->dev, VAR_2->dma,
     VAR_2->len, VAR_0);
 VAR_2->dma = 0;
}
