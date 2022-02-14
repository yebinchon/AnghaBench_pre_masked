
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_alink_xstats {int ecn_marked; int pdrop; } ;
struct nfp_abm_link {TYPE_1__* abm; } ;
struct TYPE_2__ {int qm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_abm_link*,int ,int ,int ,unsigned int,unsigned int,int,int *) ;

int FUNC_1(struct nfp_abm_link *VAR_3,
          unsigned int VAR_4, unsigned int VAR_5,
          struct nfp_alink_xstats *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_3->abm->qm_stats,
    VAR_2, VAR_0,
    VAR_4, VAR_5, 1, &VAR_6->pdrop);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_3, VAR_3->abm->qm_stats,
     VAR_2, VAR_1,
     VAR_4, VAR_5, 1, &VAR_6->ecn_marked);
}
