
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_queue {int rx_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {long expires; } ;


 long VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 long VAR_1 ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(struct xenvif_queue *VAR_2)
{
 struct sk_buff *VAR_3;
 long VAR_4;

 VAR_3 = FUNC_1(&VAR_2->rx_queue);
 if (!VAR_3)
  return VAR_0;

 VAR_4 = FUNC_0(VAR_3)->expires - VAR_1;
 return VAR_4 < 0 ? 0 : VAR_4;
}
