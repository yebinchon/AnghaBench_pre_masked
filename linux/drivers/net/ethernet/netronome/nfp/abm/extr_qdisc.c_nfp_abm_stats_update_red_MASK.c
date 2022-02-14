
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_bands; TYPE_1__* band; } ;
struct nfp_qdisc {TYPE_2__ red; int offloaded; } ;
struct nfp_cpp {int dummy; } ;
struct nfp_abm_link {TYPE_4__* abm; } ;
struct TYPE_8__ {TYPE_3__* app; } ;
struct TYPE_7__ {struct nfp_cpp* cpp; } ;
struct TYPE_5__ {int xstats; int stats; } ;


 int FUNC_0 (struct nfp_abm_link*,unsigned int,unsigned int,int *) ;
 int FUNC_1 (struct nfp_abm_link*,unsigned int,unsigned int,int *) ;
 int FUNC_2 (struct nfp_cpp*,char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_abm_link *VAR_0, struct nfp_qdisc *VAR_1,
    unsigned int VAR_2)
{
 struct nfp_cpp *VAR_3 = VAR_0->abm->app->cpp;
 unsigned int VAR_4;
 int VAR_5;

 if (!VAR_1->offloaded)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1->red.num_bands; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2,
      &VAR_1->red.band[VAR_4].stats);
  if (VAR_5)
   FUNC_2(VAR_3, "RED stats (%d, %d) read failed with error %d\n",
    VAR_4, VAR_2, VAR_5);

  VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2,
       &VAR_1->red.band[VAR_4].xstats);
  if (VAR_5)
   FUNC_2(VAR_3, "RED xstats (%d, %d) read failed with error %d\n",
    VAR_4, VAR_2, VAR_5);
 }
}
