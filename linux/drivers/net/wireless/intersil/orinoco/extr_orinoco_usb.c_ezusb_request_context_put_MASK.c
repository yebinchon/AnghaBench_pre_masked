
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; } ;
struct request_context {struct request_context* buf; TYPE_2__* outurb; int timer; TYPE_1__ done; int refcount; } ;
struct TYPE_4__ {int status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct request_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct request_context *VAR_1)
{
 if (!FUNC_3(&VAR_1->refcount))
  return;

 FUNC_1(!VAR_1->done.done);
 FUNC_0(VAR_1->outurb->status == -VAR_0);
 FUNC_0(FUNC_4(&VAR_1->timer));
 FUNC_5(VAR_1->outurb);
 FUNC_2(VAR_1->buf);
 FUNC_2(VAR_1);
}
