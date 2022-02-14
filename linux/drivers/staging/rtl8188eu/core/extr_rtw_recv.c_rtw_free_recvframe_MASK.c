
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_frame {int list; int * pkt; } ;
struct __queue {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct __queue*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct recv_frame *VAR_2,
         struct __queue *VAR_3)
{
 if (!VAR_2)
  return VAR_0;
 if (VAR_2->pkt) {
  FUNC_0(VAR_2->pkt);
  VAR_2->pkt = ((void*)0);
 }

 FUNC_4(&VAR_3->lock);

 FUNC_3(&VAR_2->list);

 FUNC_2(&VAR_2->list, FUNC_1(VAR_3));

 FUNC_5(&VAR_3->lock);

 return VAR_1;
}
