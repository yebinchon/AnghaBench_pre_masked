
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int lock; int queue; } ;
struct mlme_priv {int num_of_scanned; struct __queue scanned_queue; struct __queue free_bss_pool; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct list_head* FUNC_1 (struct __queue*) ;
 struct list_head* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct list_head*,int *) ;
 int FUNC_4 (struct list_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mlme_priv *VAR_2)
{
 struct __queue *VAR_3 = &VAR_2->free_bss_pool;
 struct __queue *VAR_4 = &VAR_2->scanned_queue;
 struct list_head *VAR_5, *VAR_6, *VAR_7;

 FUNC_0(VAR_1, VAR_0, ("+free_scanqueue\n"));
 FUNC_5(&VAR_4->lock);
 FUNC_5(&VAR_3->lock);

 VAR_6 = FUNC_1(VAR_4);
 VAR_5 = FUNC_2(VAR_6);

 while (VAR_5 != VAR_6) {
  VAR_7 = FUNC_2(VAR_5);
  FUNC_4(VAR_5);
  FUNC_3(VAR_5, &VAR_3->queue);
  VAR_5 = VAR_7;
  VAR_2->num_of_scanned--;
 }

 FUNC_6(&VAR_3->lock);
 FUNC_6(&VAR_4->lock);
}
