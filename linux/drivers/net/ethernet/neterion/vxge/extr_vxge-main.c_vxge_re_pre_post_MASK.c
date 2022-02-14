
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_rx_priv {int data_size; int data_dma; } ;
struct vxge_ring {int handle; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_1, struct vxge_ring *VAR_2,
        struct vxge_rx_priv *VAR_3)
{
 FUNC_0(VAR_2->pdev,
  VAR_3->data_dma, VAR_3->data_size, VAR_0);

 FUNC_1(VAR_1, VAR_3->data_dma, VAR_3->data_size);
 FUNC_2(VAR_2->handle, VAR_1);
}
