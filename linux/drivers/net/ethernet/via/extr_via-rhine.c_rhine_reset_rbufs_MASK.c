
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhine_private {TYPE_1__* rx_ring; scalar_t__ cur_rx; } ;
struct TYPE_2__ {int rx_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rhine_private *VAR_2)
{
 int VAR_3;

 VAR_2->cur_rx = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->rx_ring[VAR_3].rx_status = FUNC_0(VAR_0);
}
