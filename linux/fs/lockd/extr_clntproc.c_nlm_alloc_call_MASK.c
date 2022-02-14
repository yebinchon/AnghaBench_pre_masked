
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fl; } ;
struct TYPE_8__ {TYPE_3__ lock; } ;
struct TYPE_5__ {int fl; } ;
struct TYPE_6__ {TYPE_1__ lock; } ;
struct nlm_rqst {int a_host; TYPE_4__ a_res; TYPE_2__ a_args; int a_count; } ;
struct nlm_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nlm_rqst* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nlm_host*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;

struct nlm_rqst *FUNC_7(struct nlm_host *VAR_2)
{
 struct nlm_rqst *VAR_3;

 for(;;) {
  VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
  if (VAR_3 != ((void*)0)) {
   FUNC_4(&VAR_3->a_count, 1);
   FUNC_1(&VAR_3->a_args.lock.fl);
   FUNC_1(&VAR_3->a_res.lock.fl);
   VAR_3->a_host = FUNC_2(VAR_2);
   return VAR_3;
  }
  if (FUNC_6())
   break;
  FUNC_3("nlm_alloc_call: failed, waiting for memory\n");
  FUNC_5(5*VAR_1);
 }
 return ((void*)0);
}
