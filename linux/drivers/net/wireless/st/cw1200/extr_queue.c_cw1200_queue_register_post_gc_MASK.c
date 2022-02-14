
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct cw1200_queue_item {int head; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct cw1200_queue_item* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct cw1200_queue_item*,struct cw1200_queue_item*,int) ;

__attribute__((used)) static void FUNC_4(struct list_head *VAR_1,
       struct cw1200_queue_item *VAR_2)
{
 struct cw1200_queue_item *VAR_3;
 VAR_3 = FUNC_1(sizeof(struct cw1200_queue_item),
   VAR_0);
 FUNC_0(!VAR_3);
 FUNC_3(VAR_3, VAR_2, sizeof(struct cw1200_queue_item));
 FUNC_2(&VAR_3->head, VAR_1);
}
