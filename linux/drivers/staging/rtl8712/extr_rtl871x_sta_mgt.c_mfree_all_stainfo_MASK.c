
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct TYPE_2__ {struct list_head queue; } ;
struct sta_priv {int sta_hash_lock; TYPE_1__ free_sta_queue; } ;


 int FUNC_0 (struct list_head*,struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sta_priv *VAR_0)
{
 unsigned long VAR_1;
 struct list_head *VAR_2, *VAR_3;

 FUNC_1(&VAR_0->sta_hash_lock, VAR_1);
 VAR_3 = &VAR_0->free_sta_queue.queue;
 VAR_2 = VAR_3->next;
 while (!FUNC_0(VAR_3, VAR_2))
  VAR_2 = VAR_2->next;

 FUNC_2(&VAR_0->sta_hash_lock, VAR_1);
}
