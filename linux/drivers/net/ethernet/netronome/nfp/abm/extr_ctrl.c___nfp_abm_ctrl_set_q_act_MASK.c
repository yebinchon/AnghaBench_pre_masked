
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nfp_cpp {int dummy; } ;
struct nfp_abm {int* actions; int q_lvls; TYPE_1__* app; } ;
typedef enum nfp_abm_q_action { ____Placeholder_nfp_abm_q_action } nfp_abm_q_action ;
struct TYPE_2__ {struct nfp_cpp* cpp; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct nfp_cpp*,int ,int,int ,scalar_t__,int) ;
 int FUNC_1 (struct nfp_cpp*,char*,unsigned int) ;

int FUNC_2(struct nfp_abm *VAR_2, unsigned int VAR_3,
        enum nfp_abm_q_action VAR_4)
{
 struct nfp_cpp *VAR_5 = VAR_2->app->cpp;
 u64 VAR_6;
 int VAR_7;

 if (VAR_2->actions[VAR_3] == VAR_4)
  return 0;

 VAR_6 = VAR_3 * VAR_1 + VAR_0;
 VAR_7 = FUNC_0(VAR_5, VAR_2->q_lvls, 4, 0, VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_5,
   "RED offload setting action failed on subqueue %d\n",
   VAR_3);
  return VAR_7;
 }

 VAR_2->actions[VAR_3] = VAR_4;
 return 0;
}
