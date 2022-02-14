
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int num_bands; TYPE_2__* band; } ;
struct nfp_qdisc {TYPE_3__ red; int handle; scalar_t__ use_cnt; } ;
struct nfp_abm_link {TYPE_5__* abm; } ;
struct TYPE_10__ {TYPE_4__* app; } ;
struct TYPE_9__ {int cpp; } ;
struct TYPE_6__ {scalar_t__ backlog_bytes; scalar_t__ backlog_pkts; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct nfp_qdisc*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nfp_abm_link *VAR_0, struct nfp_qdisc *VAR_1)
{
 unsigned int VAR_2;


 if (VAR_1->use_cnt)
  FUNC_1(VAR_0->abm->app->cpp, "Offload of '%08x' stopped\n",
    VAR_1->handle);

 if (!FUNC_0(VAR_1))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->red.num_bands; VAR_2++) {
  VAR_1->red.band[VAR_2].stats.backlog_pkts = 0;
  VAR_1->red.band[VAR_2].stats.backlog_bytes = 0;
 }
}
