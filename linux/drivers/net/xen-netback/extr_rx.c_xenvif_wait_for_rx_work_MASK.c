
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int wq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 long FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct xenvif_queue*) ;
 int FUNC_5 (struct xenvif_queue*) ;

__attribute__((used)) static void FUNC_6(struct xenvif_queue *VAR_2)
{
 FUNC_0(VAR_1);

 if (FUNC_4(VAR_2))
  return;

 for (;;) {
  long VAR_3;

  FUNC_2(&VAR_2->wq, &VAR_1, VAR_0);
  if (FUNC_4(VAR_2))
   break;
  VAR_3 = FUNC_3(FUNC_5(VAR_2));
  if (!VAR_3)
   break;
 }
 FUNC_1(&VAR_2->wq, &VAR_1);
}
