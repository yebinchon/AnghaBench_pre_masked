
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t count; size_t consume_idx; size_t process_idx; struct emac_buffer* rfbuff; } ;
struct emac_rx_queue {TYPE_1__ rfd; } ;
struct emac_rrd {int dummy; } ;
struct emac_buffer {int * skb; } ;


 unsigned int FUNC_0 (struct emac_rrd*) ;
 size_t FUNC_1 (struct emac_rrd*) ;

__attribute__((used)) static void FUNC_2(struct emac_rx_queue *VAR_0, struct emac_rrd *VAR_1)
{
 struct emac_buffer *VAR_2 = VAR_0->rfd.rfbuff;
 u32 VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_2[VAR_3].skb = ((void*)0);
  if (++VAR_3 == VAR_0->rfd.count)
   VAR_3 = 0;
 }

 VAR_0->rfd.consume_idx = VAR_3;
 VAR_0->rfd.process_idx = VAR_3;
}
