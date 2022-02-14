
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bcmgenet_tx_ring {unsigned int index; unsigned int queue; unsigned int size; unsigned int clean_ptr; unsigned int free_bds; unsigned int write_ptr; unsigned int cb_ptr; unsigned int end_ptr; int napi; scalar_t__ prod_index; scalar_t__ c_index; scalar_t__ cbs; int int_disable; int int_enable; struct bcmgenet_priv* priv; int lock; } ;
struct bcmgenet_priv {int dev; scalar_t__ tx_cbs; struct bcmgenet_tx_ring* tx_rings; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*,unsigned int,unsigned int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bcmgenet_priv *VAR_19,
      unsigned int VAR_20, unsigned int VAR_21,
      unsigned int VAR_22, unsigned int VAR_23)
{
 struct bcmgenet_tx_ring *VAR_24 = &VAR_19->tx_rings[VAR_20];
 u32 VAR_25 = FUNC_0(VAR_19);
 u32 VAR_26 = 0;

 FUNC_3(&VAR_24->lock);
 VAR_24->priv = VAR_19;
 VAR_24->index = VAR_20;
 if (VAR_20 == VAR_0) {
  VAR_24->queue = 0;
  VAR_24->int_enable = VAR_16;
  VAR_24->int_disable = VAR_15;
 } else {
  VAR_24->queue = VAR_20 + 1;
  VAR_24->int_enable = VAR_18;
  VAR_24->int_disable = VAR_17;
 }
 VAR_24->cbs = VAR_19->tx_cbs + VAR_22;
 VAR_24->size = VAR_21;
 VAR_24->clean_ptr = VAR_22;
 VAR_24->c_index = 0;
 VAR_24->free_bds = VAR_21;
 VAR_24->write_ptr = VAR_22;
 VAR_24->cb_ptr = VAR_22;
 VAR_24->end_ptr = VAR_23 - 1;
 VAR_24->prod_index = 0;


 if (VAR_20 != VAR_0)
  VAR_26 = VAR_6 << 16;

 FUNC_1(VAR_19, VAR_20, 0, VAR_11);
 FUNC_1(VAR_19, VAR_20, 0, VAR_9);
 FUNC_1(VAR_19, VAR_20, 1, VAR_2);

 FUNC_1(VAR_19, VAR_20, VAR_26,
      VAR_10);
 FUNC_1(VAR_19, VAR_20,
      ((VAR_21 << VAR_4) |
       VAR_8), VAR_3);


 FUNC_1(VAR_19, VAR_20, VAR_22 * VAR_25,
      VAR_5);
 FUNC_1(VAR_19, VAR_20, VAR_22 * VAR_25,
      VAR_12);
 FUNC_1(VAR_19, VAR_20, VAR_22 * VAR_25,
      VAR_13);
 FUNC_1(VAR_19, VAR_20, VAR_23 * VAR_25 - 1,
      VAR_1);


 FUNC_2(VAR_19->dev, &VAR_24->napi, VAR_14,
         VAR_7);
}
