
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx_cpu {scalar_t__ reqs_available; } ;
struct kioctx {int req_batch; int reqs_available; int cpu; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct kioctx_cpu* FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct kioctx *VAR_0)
{
 struct kioctx_cpu *VAR_1;
 bool VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_3(VAR_3);
 VAR_1 = FUNC_4(VAR_0->cpu);
 if (!VAR_1->reqs_available) {
  int VAR_4, VAR_5 = FUNC_1(&VAR_0->reqs_available);

  do {
   if (VAR_5 < VAR_0->req_batch)
    goto out;

   VAR_4 = VAR_5;
   VAR_5 = FUNC_0(&VAR_0->reqs_available,
            VAR_5, VAR_5 - VAR_0->req_batch);
  } while (VAR_5 != VAR_4);

  VAR_1->reqs_available += VAR_0->req_batch;
 }

 VAR_2 = 1;
 VAR_1->reqs_available--;
out:
 FUNC_2(VAR_3);
 return VAR_2;
}
