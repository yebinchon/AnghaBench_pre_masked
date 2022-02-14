
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hsdma_chan {int rx_idx; int next_sg; } ;
struct mtk_hsdam_engine {struct mtk_hsdma_chan* chan; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_2 (struct mtk_hsdam_engine*,int ) ;
 int FUNC_3 (struct mtk_hsdam_engine*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct mtk_hsdam_engine *VAR_3)
{
 struct mtk_hsdma_chan *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = &VAR_3->chan[0];
 VAR_5 = FUNC_0(VAR_4->rx_idx);
 VAR_6 = FUNC_2(VAR_3, VAR_2);

 VAR_7 = (VAR_6 - VAR_5) & VAR_0;
 if (!VAR_7)
  return;

 VAR_4->next_sg += VAR_7;
 VAR_4->rx_idx = (VAR_4->rx_idx + VAR_7) & VAR_0;


 FUNC_4();
 FUNC_3(VAR_3, VAR_1, VAR_4->rx_idx);

 FUNC_1(VAR_3, VAR_4);
}
