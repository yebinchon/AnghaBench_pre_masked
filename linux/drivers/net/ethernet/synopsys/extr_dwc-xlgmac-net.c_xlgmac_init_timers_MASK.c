
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; struct xlgmac_channel* channel_head; } ;
struct xlgmac_channel {int tx_timer; int tx_ring; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_1)
{
 struct xlgmac_channel *VAR_2;
 unsigned int VAR_3;

 VAR_2 = VAR_1->channel_head;
 for (VAR_3 = 0; VAR_3 < VAR_1->channel_count; VAR_3++, VAR_2++) {
  if (!VAR_2->tx_ring)
   break;

  FUNC_0(&VAR_2->tx_timer, VAR_0, 0);
 }
}
