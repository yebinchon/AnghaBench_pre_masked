
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {scalar_t__ id; int rx_queue; struct xenvif* vif; } ;
struct xenvif {scalar_t__ stall_timeout; scalar_t__ disabled; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct xenvif*) ;
 int FUNC_5 (struct xenvif_queue*) ;
 int FUNC_6 (struct xenvif_queue*) ;
 int FUNC_7 (struct xenvif_queue*) ;
 int FUNC_8 (struct xenvif_queue*) ;
 int FUNC_9 (struct xenvif_queue*) ;
 scalar_t__ FUNC_10 (struct xenvif_queue*) ;
 scalar_t__ FUNC_11 (struct xenvif_queue*) ;
 int FUNC_12 (struct xenvif_queue*) ;

int FUNC_13(void *VAR_0)
{
 struct xenvif_queue *VAR_1 = VAR_0;
 struct xenvif *VAR_2 = VAR_1->vif;

 if (!VAR_2->stall_timeout)
  FUNC_6(VAR_1);

 for (;;) {
  FUNC_12(VAR_1);

  if (FUNC_1())
   break;
  if (FUNC_3(VAR_2->disabled && VAR_1->id == 0)) {
   FUNC_4(VAR_2);
   break;
  }

  if (!FUNC_2(&VAR_1->rx_queue))
   FUNC_7(VAR_1);





  if (VAR_2->stall_timeout) {
   if (FUNC_11(VAR_1))
    FUNC_5(VAR_1);
   else if (FUNC_10(VAR_1))
    FUNC_6(VAR_1);
  }






  FUNC_8(VAR_1);

  FUNC_0();
 }


 FUNC_9(VAR_1);

 return 0;
}
