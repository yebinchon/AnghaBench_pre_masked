
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct giveback_urb_bh {int bh; int head; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct giveback_urb_bh *VAR_1)
{

 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->head);
 FUNC_2(&VAR_1->bh, VAR_0, (unsigned long)VAR_1);
}
