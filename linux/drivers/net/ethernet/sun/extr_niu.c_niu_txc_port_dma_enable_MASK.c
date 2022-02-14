
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct niu {int num_tx_rings; int port; TYPE_1__* tx_rings; } ;
struct TYPE_2__ {int tx_channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_0, int VAR_1)
{
 u64 VAR_2 = 0;

 if (VAR_1) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->num_tx_rings; VAR_3++)
   VAR_2 |= (1 << VAR_0->tx_rings[VAR_3].tx_channel);
 }
 FUNC_1(FUNC_0(VAR_0->port), VAR_2);
}
