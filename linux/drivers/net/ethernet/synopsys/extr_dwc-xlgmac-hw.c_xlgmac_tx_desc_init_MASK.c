
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {int cur; int dma_desc_count; } ;
struct xlgmac_desc_data {int dma_desc_addr; } ;
struct xlgmac_channel {struct xlgmac_ring* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 struct xlgmac_desc_data* FUNC_1 (struct xlgmac_ring*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct xlgmac_desc_data*) ;

__attribute__((used)) static void FUNC_6(struct xlgmac_channel *VAR_3)
{
 struct xlgmac_ring *VAR_4 = VAR_3->tx_ring;
 struct xlgmac_desc_data *VAR_5;
 int VAR_6 = VAR_4->cur;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_4->dma_desc_count; VAR_7++) {
  VAR_5 = FUNC_1(VAR_4, VAR_7);


  FUNC_5(VAR_5);
 }


 FUNC_4(VAR_4->dma_desc_count - 1, FUNC_0(VAR_3, VAR_2));


 VAR_5 = FUNC_1(VAR_4, VAR_6);
 FUNC_4(FUNC_3(VAR_5->dma_desc_addr),
        FUNC_0(VAR_3, VAR_0));
 FUNC_4(FUNC_2(VAR_5->dma_desc_addr),
        FUNC_0(VAR_3, VAR_1));
}
