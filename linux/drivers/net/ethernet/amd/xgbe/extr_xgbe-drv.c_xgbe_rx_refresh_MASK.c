
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int rdesc_dma; } ;
struct xgbe_ring {scalar_t__ dirty; scalar_t__ cur; } ;
struct xgbe_desc_if {scalar_t__ (* map_rx_buffer ) (struct xgbe_prv_data*,struct xgbe_ring*,struct xgbe_ring_data*) ;int (* unmap_rdata ) (struct xgbe_prv_data*,struct xgbe_ring_data*) ;} ;
struct xgbe_hw_if {int (* rx_desc_reset ) (struct xgbe_prv_data*,struct xgbe_ring_data*,scalar_t__) ;} ;
struct xgbe_prv_data {struct xgbe_desc_if desc_if; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,scalar_t__) ;
 int FUNC_1 (struct xgbe_channel*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xgbe_prv_data*,struct xgbe_ring_data*) ;
 scalar_t__ FUNC_4 (struct xgbe_prv_data*,struct xgbe_ring*,struct xgbe_ring_data*) ;
 int FUNC_5 (struct xgbe_prv_data*,struct xgbe_ring_data*,scalar_t__) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct xgbe_channel *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = VAR_1->pdata;
 struct xgbe_hw_if *VAR_3 = &VAR_2->hw_if;
 struct xgbe_desc_if *VAR_4 = &VAR_2->desc_if;
 struct xgbe_ring *VAR_5 = VAR_1->rx_ring;
 struct xgbe_ring_data *VAR_6;

 while (VAR_5->dirty != VAR_5->cur) {
  VAR_6 = FUNC_0(VAR_5, VAR_5->dirty);


  VAR_4->unmap_rdata(VAR_2, VAR_6);

  if (VAR_4->map_rx_buffer(VAR_2, VAR_5, VAR_6))
   break;

  VAR_3->rx_desc_reset(VAR_2, VAR_6, VAR_5->dirty);

  VAR_5->dirty++;
 }


 FUNC_6();



 VAR_6 = FUNC_0(VAR_5, VAR_5->dirty - 1);
 FUNC_1(VAR_1, VAR_0,
     FUNC_2(VAR_6->rdesc_dma));
}
