
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int actv_reqs; } ;
struct TYPE_6__ {TYPE_2__ fw; } ;
struct TYPE_4__ {int wq_enet_desc_count; } ;
struct snic {TYPE_3__ s_stats; int shost; TYPE_1__ config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct snic *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->config.wq_enet_desc_count;

 if (VAR_2 > 0) {




  FUNC_1(VAR_1->shost, "desc_avail: Multi Queue case.\n");
  FUNC_0(VAR_2 > 0);

  return -1;
 }

 VAR_4 -= FUNC_2(&VAR_1->s_stats.fw.actv_reqs);

 return ((VAR_3 == VAR_0) ? VAR_4 : VAR_4 - 1);
}
