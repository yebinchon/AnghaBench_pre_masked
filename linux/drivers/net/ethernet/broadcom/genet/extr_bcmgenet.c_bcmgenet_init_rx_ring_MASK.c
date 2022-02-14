
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bcmgenet_rx_ring {unsigned int index; unsigned int size; unsigned int read_ptr; unsigned int cb_ptr; unsigned int end_ptr; int napi; scalar_t__ c_index; scalar_t__ cbs; int int_disable; int int_enable; struct bcmgenet_priv* priv; } ;
struct bcmgenet_priv {int dev; scalar_t__ rx_cbs; struct bcmgenet_rx_ring* rx_rings; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*,struct bcmgenet_rx_ring*) ;
 int VAR_15 ;
 int FUNC_2 (struct bcmgenet_rx_ring*,int ) ;
 int FUNC_3 (struct bcmgenet_rx_ring*) ;
 int FUNC_4 (struct bcmgenet_priv*,unsigned int,unsigned int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct bcmgenet_priv *VAR_21,
     unsigned int VAR_22, unsigned int VAR_23,
     unsigned int VAR_24, unsigned int VAR_25)
{
 struct bcmgenet_rx_ring *VAR_26 = &VAR_21->rx_rings[VAR_22];
 u32 VAR_27 = FUNC_0(VAR_21);
 int VAR_28;

 VAR_26->priv = VAR_21;
 VAR_26->index = VAR_22;
 if (VAR_22 == VAR_0) {
  VAR_26->int_enable = VAR_18;
  VAR_26->int_disable = VAR_17;
 } else {
  VAR_26->int_enable = VAR_20;
  VAR_26->int_disable = VAR_19;
 }
 VAR_26->cbs = VAR_21->rx_cbs + VAR_24;
 VAR_26->size = VAR_23;
 VAR_26->c_index = 0;
 VAR_26->read_ptr = VAR_24;
 VAR_26->cb_ptr = VAR_24;
 VAR_26->end_ptr = VAR_25 - 1;

 VAR_28 = FUNC_1(VAR_21, VAR_26);
 if (VAR_28)
  return VAR_28;

 FUNC_2(VAR_26, VAR_15);
 FUNC_3(VAR_26);


 FUNC_5(VAR_21->dev, &VAR_26->napi, VAR_16,
         VAR_8);

 FUNC_4(VAR_21, VAR_22, 0, VAR_10);
 FUNC_4(VAR_21, VAR_22, 0, VAR_9);
 FUNC_4(VAR_21, VAR_22,
      ((VAR_23 << VAR_5) |
       VAR_14), VAR_4);
 FUNC_4(VAR_21, VAR_22,
      (VAR_3 <<
       VAR_7) |
       VAR_2, VAR_13);


 FUNC_4(VAR_21, VAR_22, VAR_24 * VAR_27,
      VAR_6);
 FUNC_4(VAR_21, VAR_22, VAR_24 * VAR_27,
      VAR_11);
 FUNC_4(VAR_21, VAR_22, VAR_24 * VAR_27,
      VAR_12);
 FUNC_4(VAR_21, VAR_22, VAR_25 * VAR_27 - 1,
      VAR_1);

 return VAR_28;
}
