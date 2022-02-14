
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int dealloc_wq; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct xenvif_queue*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct xenvif_queue*) ;
 int FUNC_4 (struct xenvif_queue*) ;

int FUNC_5(void *VAR_0)
{
 struct xenvif_queue *VAR_1 = VAR_0;

 for (;;) {
  FUNC_2(VAR_1->dealloc_wq,
      FUNC_1(VAR_1) ||
      FUNC_3(VAR_1));
  if (FUNC_3(VAR_1))
   break;

  FUNC_4(VAR_1);
  FUNC_0();
 }


 if (FUNC_1(VAR_1))
  FUNC_4(VAR_1);

 return 0;
}
