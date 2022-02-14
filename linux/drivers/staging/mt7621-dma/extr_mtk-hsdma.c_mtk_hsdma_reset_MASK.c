
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_hsdma_chan {TYPE_2__* rx_ring; TYPE_1__* tx_ring; } ;
struct mtk_hsdam_engine {int dummy; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ addr0; } ;
struct TYPE_3__ {int flags; scalar_t__ addr0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_1 (struct mtk_hsdam_engine*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_hsdam_engine *VAR_7,
       struct mtk_hsdma_chan *VAR_8)
{
 int VAR_9;


 FUNC_1(VAR_7, VAR_5, 0);


 FUNC_1(VAR_7, VAR_6, 0);


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8->tx_ring[VAR_9].addr0 = 0;
  VAR_8->tx_ring[VAR_9].flags = VAR_2 | VAR_1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8->rx_ring[VAR_9].addr0 = 0;
  VAR_8->rx_ring[VAR_9].flags = 0;
 }


 FUNC_0(VAR_7, VAR_8);


 FUNC_1(VAR_7, VAR_6, VAR_4);


 FUNC_1(VAR_7, VAR_5, VAR_3);
}
