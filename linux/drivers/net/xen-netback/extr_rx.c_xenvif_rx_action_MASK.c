
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sk_buff_head* completed; } ;
struct xenvif_queue {TYPE_1__ rx_copy; } ;
struct sk_buff_head {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct xenvif_queue*) ;
 scalar_t__ FUNC_2 (struct xenvif_queue*) ;
 int FUNC_3 (struct xenvif_queue*) ;

void FUNC_4(struct xenvif_queue *VAR_1)
{
 struct sk_buff_head VAR_2;
 unsigned int VAR_3 = 0;

 FUNC_0(&VAR_2);
 VAR_1->rx_copy.completed = &VAR_2;

 while (FUNC_2(VAR_1) &&
        VAR_3 < VAR_0) {
  FUNC_3(VAR_1);
  VAR_3++;
 }


 FUNC_1(VAR_1);
}
