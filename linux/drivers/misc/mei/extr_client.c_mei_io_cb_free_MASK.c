
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mei_cl_cb* data; } ;
struct mei_cl_cb {TYPE_1__ buf; int list; } ;


 int FUNC_0 (struct mei_cl_cb*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mei_cl_cb *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_0->buf.data);
 FUNC_0(VAR_0);
}
