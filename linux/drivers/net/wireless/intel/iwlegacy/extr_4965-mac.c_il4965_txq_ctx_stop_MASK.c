
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_chnl_num; } ;
struct il_priv {TYPE_1__ hw_params; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_4 (struct il_priv*,int ) ;
 int FUNC_5 (struct il_priv*,int ,int) ;
 int FUNC_6 (struct il_priv*,int ,int ) ;

void
FUNC_7(struct il_priv *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_6(VAR_2, VAR_1, 0);


 for (VAR_3 = 0; VAR_3 < VAR_2->hw_params.dma_chnl_num; VAR_3++) {
  FUNC_5(VAR_2, FUNC_0(VAR_3), 0x0);
  VAR_4 =
      FUNC_3(VAR_2, VAR_0,
     FUNC_1(VAR_3),
     FUNC_1(VAR_3),
     1000);
  if (VAR_4 < 0)
   FUNC_2("Timeout stopping DMA channel %d [0x%08x]",
          VAR_3, FUNC_4(VAR_2, VAR_0));
 }
}
