
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request_object {int completed; int kref; int list; int * priv; int * req; int * ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct media_request_object *VAR_0)
{
 VAR_0->ops = ((void*)0);
 VAR_0->req = ((void*)0);
 VAR_0->priv = ((void*)0);
 VAR_0->completed = 0;
 FUNC_0(&VAR_0->list);
 FUNC_1(&VAR_0->kref);
}
