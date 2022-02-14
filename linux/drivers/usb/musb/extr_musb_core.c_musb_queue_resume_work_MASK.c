
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb_pending_work {int (* callback ) (struct musb*,void*) ;int node; void* data; } ;
struct musb {int list_lock; int controller; int pending_list; scalar_t__ is_runtime_suspended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int (*) (struct musb*,void*)) ;
 int FUNC_2 (int ,struct musb_pending_work*) ;
 struct musb_pending_work* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct musb *VAR_4,
      int (*VAR_5)(struct musb *VAR_6, void *VAR_7),
      void *VAR_8)
{
 struct musb_pending_work *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (FUNC_0(!VAR_5))
  return -VAR_1;

 if (FUNC_5(VAR_4->controller))
  return VAR_5(VAR_4, VAR_8);

 VAR_9 = FUNC_3(VAR_4->controller, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->callback = VAR_5;
 VAR_9->data = VAR_8;
 FUNC_6(&VAR_4->list_lock, VAR_10);
 if (VAR_4->is_runtime_suspended) {
  FUNC_4(&VAR_9->node, &VAR_4->pending_list);
  VAR_11 = 0;
 } else {
  FUNC_1(VAR_4->controller, "could not add resume work %p\n",
   VAR_5);
  FUNC_2(VAR_4->controller, VAR_9);
  VAR_11 = -VAR_0;
 }
 FUNC_7(&VAR_4->list_lock, VAR_10);

 return VAR_11;
}
