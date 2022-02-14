
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_hsdma_chan {int desc_addr; } ;
struct TYPE_2__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; struct mtk_hsdma_chan* chan; } ;
struct hsdma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct mtk_hsdam_engine*) ;
 int FUNC_2 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_3 (struct mtk_hsdam_engine*,int ) ;
 int FUNC_4 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_5 (struct mtk_hsdam_engine*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mtk_hsdam_engine *VAR_14)
{
 struct mtk_hsdma_chan *VAR_15;
 int VAR_16;
 u32 VAR_17;


 VAR_15 = &VAR_14->chan[0];
 VAR_16 = FUNC_2(VAR_14, VAR_15);
 if (VAR_16)
  return VAR_16;


 FUNC_5(VAR_14, VAR_12, VAR_15->desc_addr);
 FUNC_5(VAR_14, VAR_13, VAR_0);

 FUNC_5(VAR_14, VAR_10, VAR_15->desc_addr +
   (sizeof(struct hsdma_desc) * VAR_0));
 FUNC_5(VAR_14, VAR_11, VAR_0);

 FUNC_4(VAR_14, VAR_15);


 FUNC_5(VAR_14, VAR_9, VAR_6);


 FUNC_5(VAR_14, VAR_7, VAR_1);


 VAR_17 = FUNC_3(VAR_14, VAR_8);
 FUNC_0(VAR_14->ddev.dev, "rx: %d, tx: %d\n",
   (VAR_17 >> VAR_3) & VAR_2,
   (VAR_17 >> VAR_5) & VAR_4);

 FUNC_1(VAR_14);

 return VAR_16;
}
