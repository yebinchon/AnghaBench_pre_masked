
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int frame_pool; int * rx_packets; scalar_t__ tx; scalar_t__ rx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tb_ctl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct tb_ctl *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 if (VAR_1->rx)
  FUNC_3(VAR_1->rx);
 if (VAR_1->tx)
  FUNC_3(VAR_1->tx);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(VAR_1->rx_packets[VAR_2]);


 FUNC_0(VAR_1->frame_pool);
 FUNC_1(VAR_1);
}
