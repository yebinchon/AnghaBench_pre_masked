
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hsdma_chan {int dummy; } ;
struct mtk_hsdam_engine {struct mtk_hsdma_chan* chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_1 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_2 (struct mtk_hsdam_engine*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mtk_hsdam_engine *VAR_6)
{
 struct mtk_hsdma_chan *VAR_7;


 FUNC_2(VAR_6, VAR_0, 0);


 FUNC_2(VAR_6, VAR_1, 0);


 VAR_7 = &VAR_6->chan[0];
 FUNC_0(VAR_6, VAR_7);


 FUNC_2(VAR_6, VAR_4, 0);
 FUNC_2(VAR_6, VAR_5, 0);

 FUNC_2(VAR_6, VAR_2, 0);
 FUNC_2(VAR_6, VAR_3, 0);

 FUNC_1(VAR_6, VAR_7);
}
