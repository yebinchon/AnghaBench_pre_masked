
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct cw1200_queue {int stats; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cw1200_queue*,int *,int) ;
 int FUNC_2 (int ,int *) ;
 struct cw1200_queue* FUNC_3 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cw1200_queue* VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 FUNC_0(VAR_1);
 struct cw1200_queue *VAR_4 =
  FUNC_3(VAR_4, VAR_3, VAR_0);

 FUNC_4(&VAR_4->lock);
 FUNC_1(VAR_4, &VAR_1, 1);
 FUNC_5(&VAR_4->lock);
 FUNC_2(VAR_4->stats, &VAR_1);
}
