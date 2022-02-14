
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcloop_tport {int dummy; } ;
struct fcloop_nport {struct fcloop_tport* tport; TYPE_1__* rport; } ;
struct TYPE_2__ {int * targetport; } ;



__attribute__((used)) static struct fcloop_tport *
FUNC_0(struct fcloop_nport *VAR_0)
{
 struct fcloop_tport *VAR_1 = VAR_0->tport;

 if (VAR_1 && VAR_0->rport)
  VAR_0->rport->targetport = ((void*)0);
 VAR_0->tport = ((void*)0);

 return VAR_1;
}
