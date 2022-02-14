
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nfp_abm_link {unsigned int queue_base; TYPE_1__* abm; int vnic; } ;
struct TYPE_2__ {int q_stats; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct nfp_abm_link*,int ,int ,unsigned int,unsigned int,unsigned int,int,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct nfp_abm_link *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3, unsigned int VAR_4, u64 *VAR_5)
{
 if (!FUNC_2(VAR_1->abm)) {
  if (!VAR_2) {
   unsigned int VAR_6 = VAR_1->queue_base + VAR_3;

   *VAR_5 = FUNC_3(VAR_1->vnic,
     FUNC_0(VAR_6) + VAR_4);
  } else {
   *VAR_5 = 0;
  }

  return 0;
 } else {
  return FUNC_1(VAR_1, VAR_1->abm->q_stats,
      VAR_0, VAR_4, VAR_2, VAR_3,
      1, VAR_5);
 }
}
