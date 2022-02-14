
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_card {int dummy; } ;


 int FUNC_0 (struct gelic_card*) ;
 int FUNC_1 (struct gelic_card*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct gelic_card*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gelic_card *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_4(FUNC_0(VAR_0), FUNC_3(VAR_0));
 if (VAR_1)
  FUNC_2(FUNC_1(VAR_0),
   "lv1_net_stop_rx_dma failed, %d\n", VAR_1);
}
