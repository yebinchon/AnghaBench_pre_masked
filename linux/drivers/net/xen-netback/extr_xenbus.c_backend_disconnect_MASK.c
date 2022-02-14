
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {unsigned int num_queues; int * queues; } ;
struct backend_info {struct xenvif* vif; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xenvif*) ;
 int FUNC_3 (struct xenvif*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xenvif*) ;
 int FUNC_6 (struct xenvif*) ;

__attribute__((used)) static void FUNC_7(struct backend_info *VAR_0)
{
 struct xenvif *VAR_1 = VAR_0->vif;

 if (VAR_1) {
  unsigned int VAR_2 = VAR_1->num_queues;
  unsigned int VAR_3;

  FUNC_2(VAR_1);



  FUNC_6(VAR_1);




  VAR_1->num_queues = 0;
  FUNC_0();

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   FUNC_4(&VAR_1->queues[VAR_3]);

  FUNC_1(VAR_1->queues);
  VAR_1->queues = ((void*)0);

  FUNC_5(VAR_1);
 }
}
