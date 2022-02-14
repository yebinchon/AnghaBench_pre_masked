
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {struct nlm_reboot* rq_argp; } ;
struct TYPE_2__ {int data; } ;
struct nlm_reboot {TYPE_1__ priv; int state; int len; int mon; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*,int *) ;
 int * FUNC_4 (int *,int *,int *,int ) ;

int
FUNC_5(struct svc_rqst *VAR_2, __be32 *VAR_3)
{
 struct nlm_reboot *VAR_4 = VAR_2->rq_argp;

 if (!(VAR_3 = FUNC_4(VAR_3, &VAR_4->mon, &VAR_4->len, VAR_0)))
  return 0;
 VAR_4->state = FUNC_2(*VAR_3++);
 FUNC_1(&VAR_4->priv.data, VAR_3, sizeof(VAR_4->priv.data));
 VAR_3 += FUNC_0(VAR_1);
 return FUNC_3(VAR_2, VAR_3);
}
