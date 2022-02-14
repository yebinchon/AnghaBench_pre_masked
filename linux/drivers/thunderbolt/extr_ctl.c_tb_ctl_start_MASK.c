
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int running; int * rx_packets; int rx; int tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb_ctl*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tb_ctl *VAR_1)
{
 int VAR_2;
 FUNC_0(VAR_1, "control channel starting...\n");
 FUNC_2(VAR_1->tx);
 FUNC_2(VAR_1->rx);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->rx_packets[VAR_2]);

 VAR_1->running = 1;
}
