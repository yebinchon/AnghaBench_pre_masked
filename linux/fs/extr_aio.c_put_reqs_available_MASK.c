
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx_cpu {int reqs_available; } ;
struct kioctx {int req_batch; int reqs_available; int cpu; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct kioctx_cpu* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kioctx *VAR_0, unsigned VAR_1)
{
 struct kioctx_cpu *VAR_2;
 unsigned long VAR_3;

 FUNC_2(VAR_3);
 VAR_2 = FUNC_3(VAR_0->cpu);
 VAR_2->reqs_available += VAR_1;

 while (VAR_2->reqs_available >= VAR_0->req_batch * 2) {
  VAR_2->reqs_available -= VAR_0->req_batch;
  FUNC_0(VAR_0->req_batch, &VAR_0->reqs_available);
 }

 FUNC_1(VAR_3);
}
