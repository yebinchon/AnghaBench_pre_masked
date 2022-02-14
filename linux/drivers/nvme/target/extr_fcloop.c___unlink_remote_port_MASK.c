
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcloop_rport {int dummy; } ;
struct fcloop_nport {struct fcloop_rport* rport; TYPE_1__* tport; } ;
struct TYPE_2__ {int * remoteport; } ;



__attribute__((used)) static struct fcloop_rport *
FUNC_0(struct fcloop_nport *VAR_0)
{
 struct fcloop_rport *VAR_1 = VAR_0->rport;

 if (VAR_1 && VAR_0->tport)
  VAR_0->tport->remoteport = ((void*)0);
 VAR_0->rport = ((void*)0);

 return VAR_1;
}
