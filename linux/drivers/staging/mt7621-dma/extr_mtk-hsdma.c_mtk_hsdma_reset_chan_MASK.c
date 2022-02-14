
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hsdma_chan {int tx_idx; int rx_idx; int id; } ;
struct mtk_hsdam_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtk_hsdam_engine*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mtk_hsdam_engine *VAR_6,
     struct mtk_hsdma_chan *VAR_7)
{
 VAR_7->tx_idx = 0;
 VAR_7->rx_idx = VAR_0 - 1;

 FUNC_0(VAR_6, VAR_3, VAR_7->tx_idx);
 FUNC_0(VAR_6, VAR_2, VAR_7->rx_idx);

 FUNC_0(VAR_6, VAR_1,
   0x1 << (VAR_7->id + VAR_5));
 FUNC_0(VAR_6, VAR_1,
   0x1 << (VAR_7->id + VAR_4));
}
