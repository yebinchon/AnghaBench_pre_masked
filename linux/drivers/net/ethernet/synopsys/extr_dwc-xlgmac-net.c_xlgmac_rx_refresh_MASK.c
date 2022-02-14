
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {scalar_t__ dirty; scalar_t__ cur; } ;
struct xlgmac_hw_ops {int (* rx_desc_reset ) (struct xlgmac_pdata*,struct xlgmac_desc_data*,scalar_t__) ;} ;
struct xlgmac_desc_ops {scalar_t__ (* map_rx_buffer ) (struct xlgmac_pdata*,struct xlgmac_ring*,struct xlgmac_desc_data*) ;int (* unmap_desc_data ) (struct xlgmac_pdata*,struct xlgmac_desc_data*) ;} ;
struct xlgmac_pdata {struct xlgmac_hw_ops hw_ops; struct xlgmac_desc_ops desc_ops; } ;
struct xlgmac_desc_data {int dma_desc_addr; } ;
struct xlgmac_channel {struct xlgmac_ring* rx_ring; struct xlgmac_pdata* pdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 struct xlgmac_desc_data* FUNC_1 (struct xlgmac_ring*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xlgmac_pdata*,struct xlgmac_desc_data*) ;
 scalar_t__ FUNC_4 (struct xlgmac_pdata*,struct xlgmac_ring*,struct xlgmac_desc_data*) ;
 int FUNC_5 (struct xlgmac_pdata*,struct xlgmac_desc_data*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct xlgmac_channel *VAR_1)
{
 struct xlgmac_pdata *VAR_2 = VAR_1->pdata;
 struct xlgmac_ring *VAR_3 = VAR_1->rx_ring;
 struct xlgmac_desc_data *VAR_4;
 struct xlgmac_desc_ops *VAR_5;
 struct xlgmac_hw_ops *VAR_6;

 VAR_5 = &VAR_2->desc_ops;
 VAR_6 = &VAR_2->hw_ops;

 while (VAR_3->dirty != VAR_3->cur) {
  VAR_4 = FUNC_1(VAR_3, VAR_3->dirty);


  VAR_5->unmap_desc_data(VAR_2, VAR_4);

  if (VAR_5->map_rx_buffer(VAR_2, VAR_3, VAR_4))
   break;

  VAR_6->rx_desc_reset(VAR_2, VAR_4, VAR_3->dirty);

  VAR_3->dirty++;
 }


 FUNC_6();




 VAR_4 = FUNC_1(VAR_3, VAR_3->dirty - 1);
 FUNC_7(FUNC_2(VAR_4->dma_desc_addr),
        FUNC_0(VAR_1, VAR_0));
}
