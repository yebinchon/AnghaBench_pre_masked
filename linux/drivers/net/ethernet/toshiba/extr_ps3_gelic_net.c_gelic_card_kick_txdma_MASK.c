
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_descr {int bus_addr; } ;
struct gelic_card {int tx_dma_progress; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gelic_card*) ;
 int FUNC_1 (struct gelic_card*) ;
 int FUNC_2 (struct gelic_card*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct gelic_descr*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gelic_card *VAR_1,
     struct gelic_descr *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->tx_dma_progress)
  return 0;

 if (FUNC_4(VAR_2) == VAR_0) {
  VAR_1->tx_dma_progress = 1;
  VAR_3 = FUNC_5(FUNC_0(VAR_1), FUNC_2(VAR_1),
           VAR_2->bus_addr, 0);
  if (VAR_3) {
   VAR_1->tx_dma_progress = 0;
   FUNC_3(FUNC_1(VAR_1), "lv1_net_start_txdma failed," "status=%d\n", VAR_3);

  }
 }
 return VAR_3;
}
