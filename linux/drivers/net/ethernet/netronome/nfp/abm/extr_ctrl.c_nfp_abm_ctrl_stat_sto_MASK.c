
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nfp_abm_link {TYPE_1__* abm; } ;
struct TYPE_2__ {unsigned int num_bands; int qm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfp_abm_link*,int ,int ,int ,unsigned int,unsigned int,int,scalar_t__*) ;

u64 FUNC_1(struct nfp_abm_link *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 u64 VAR_5, VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->abm->num_bands; VAR_4++) {
  if (FUNC_0(VAR_2, VAR_2->abm->qm_stats,
          VAR_1, VAR_0,
          VAR_4, VAR_3, 1, &VAR_5))
   return 0;
  VAR_6 += VAR_5;
 }

 return VAR_6;
}
