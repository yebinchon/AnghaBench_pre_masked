
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {unsigned int cur; unsigned int dma_desc_count; } ;
struct xlgmac_pdata {int dummy; } ;
struct xlgmac_desc_data {int dma_desc_addr; } ;
struct xlgmac_channel {struct xlgmac_ring* rx_ring; struct xlgmac_pdata* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 struct xlgmac_desc_data* FUNC_1 (struct xlgmac_ring*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct xlgmac_pdata*,struct xlgmac_desc_data*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct xlgmac_channel *VAR_4)
{
 struct xlgmac_pdata *VAR_5 = VAR_4->pdata;
 struct xlgmac_ring *VAR_6 = VAR_4->rx_ring;
 unsigned int VAR_7 = VAR_6->cur;
 struct xlgmac_desc_data *VAR_8;
 unsigned int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_6->dma_desc_count; VAR_9++) {
  VAR_8 = FUNC_1(VAR_6, VAR_9);


  FUNC_5(VAR_5, VAR_8, VAR_9);
 }


 FUNC_4(VAR_6->dma_desc_count - 1, FUNC_0(VAR_4, VAR_2));


 VAR_8 = FUNC_1(VAR_6, VAR_7);
 FUNC_4(FUNC_3(VAR_8->dma_desc_addr),
        FUNC_0(VAR_4, VAR_0));
 FUNC_4(FUNC_2(VAR_8->dma_desc_addr),
        FUNC_0(VAR_4, VAR_1));


 VAR_8 = FUNC_1(VAR_6, VAR_7 +
       VAR_6->dma_desc_count - 1);
 FUNC_4(FUNC_2(VAR_8->dma_desc_addr),
        FUNC_0(VAR_4, VAR_3));
}
