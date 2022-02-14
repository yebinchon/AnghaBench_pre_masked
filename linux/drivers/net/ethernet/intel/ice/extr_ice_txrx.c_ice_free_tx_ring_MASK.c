
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ring {int * desc; int dma; int size; int dev; int * tx_buf; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct ice_ring*) ;

void FUNC_3(struct ice_ring *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->dev, VAR_0->tx_buf);
 VAR_0->tx_buf = ((void*)0);

 if (VAR_0->desc) {
  FUNC_1(VAR_0->dev, VAR_0->size,
       VAR_0->desc, VAR_0->dma);
  VAR_0->desc = ((void*)0);
 }
}
