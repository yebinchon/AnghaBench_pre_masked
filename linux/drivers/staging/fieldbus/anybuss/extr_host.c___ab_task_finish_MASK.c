
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int dummy; } ;
struct ab_task {int done; int (* done_fn ) (struct anybuss_host*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct anybuss_host*) ;

__attribute__((used)) static void FUNC_2(struct ab_task *VAR_0, struct anybuss_host *VAR_1)
{
 if (VAR_0->done_fn)
  VAR_0->done_fn(VAR_1);
 FUNC_0(&VAR_0->done);
}
