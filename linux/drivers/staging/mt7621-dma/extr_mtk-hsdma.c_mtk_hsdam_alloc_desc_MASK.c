
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_hsdma_chan {TYPE_2__* tx_ring; TYPE_2__* rx_ring; int desc_addr; } ;
struct TYPE_3__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct mtk_hsdam_engine *VAR_6,
    struct mtk_hsdma_chan *VAR_7)
{
 int VAR_8;

 VAR_7->tx_ring = FUNC_0(VAR_6->ddev.dev,
   2 * VAR_2 * sizeof(*VAR_7->tx_ring),
   &VAR_7->desc_addr, VAR_1 | VAR_5);
 if (!VAR_7->tx_ring)
  goto no_mem;

 VAR_7->rx_ring = &VAR_7->tx_ring[VAR_2];


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_7->tx_ring[VAR_8].flags = VAR_4 | VAR_3;

 return 0;
no_mem:
 return -VAR_0;
}
