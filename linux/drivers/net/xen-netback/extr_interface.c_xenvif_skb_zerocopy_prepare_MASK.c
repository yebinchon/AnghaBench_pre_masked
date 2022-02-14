
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_queue {int inflight_packets; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

void FUNC_2(struct xenvif_queue *VAR_1,
     struct sk_buff *VAR_2)
{
 FUNC_1(VAR_2)->tx_flags |= VAR_0;
 FUNC_0(&VAR_1->inflight_packets);
}
