
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlmclnt_operations {int (* nlmclnt_release_call ) (int ) ;} ;
struct nlm_rqst {TYPE_1__* a_host; int a_callback_data; int a_count; } ;
struct TYPE_2__ {struct nlmclnt_operations* h_nlmclnt_ops; } ;


 int FUNC_0 (struct nlm_rqst*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nlm_rqst*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct nlm_rqst *VAR_0)
{
 const struct nlmclnt_operations *VAR_1 = VAR_0->a_host->h_nlmclnt_ops;

 if (!FUNC_3(&VAR_0->a_count))
  return;
 if (VAR_1 && VAR_1->nlmclnt_release_call)
  VAR_1->nlmclnt_release_call(VAR_0->a_callback_data);
 FUNC_1(VAR_0->a_host);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
}
