
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int rdesc_dma; } ;
struct xgbe_ring {unsigned int cur; unsigned int rdesc_count; } ;
struct xgbe_prv_data {int dummy; } ;
struct xgbe_channel {struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,unsigned int) ;
 int FUNC_2 (struct xgbe_channel*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xgbe_prv_data*,struct xgbe_ring_data*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct xgbe_channel *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = VAR_4->pdata;
 struct xgbe_ring *VAR_6 = VAR_4->rx_ring;
 struct xgbe_ring_data *VAR_7;
 unsigned int VAR_8 = VAR_6->cur;
 unsigned int VAR_9;

 FUNC_0("-->rx_desc_init\n");


 for (VAR_9 = 0; VAR_9 < VAR_6->rdesc_count; VAR_9++) {
  VAR_7 = FUNC_1(VAR_6, VAR_9);


  FUNC_5(VAR_5, VAR_7, VAR_9);
 }


 FUNC_2(VAR_4, VAR_2, VAR_6->rdesc_count - 1);


 VAR_7 = FUNC_1(VAR_6, VAR_8);
 FUNC_2(VAR_4, VAR_0,
     FUNC_4(VAR_7->rdesc_dma));
 FUNC_2(VAR_4, VAR_1,
     FUNC_3(VAR_7->rdesc_dma));


 VAR_7 = FUNC_1(VAR_6, VAR_8 + VAR_6->rdesc_count - 1);
 FUNC_2(VAR_4, VAR_3,
     FUNC_3(VAR_7->rdesc_dma));

 FUNC_0("<--rx_desc_init\n");
}
