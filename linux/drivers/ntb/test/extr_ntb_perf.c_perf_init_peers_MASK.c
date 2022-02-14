
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_peer {int pidx; int gidx; int service; struct perf_ctx* perf; } ;
struct perf_ctx {int gidx; int pcnt; TYPE_1__* ntb; struct perf_peer* peers; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (struct perf_peer*) ;

__attribute__((used)) static int FUNC_5(struct perf_ctx *VAR_1)
{
 struct perf_peer *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_1->ntb);
 VAR_1->gidx = -1;
 for (VAR_3 = 0; VAR_3 < VAR_1->pcnt; VAR_3++) {
  VAR_2 = &VAR_1->peers[VAR_3];

  VAR_2->perf = VAR_1;
  VAR_2->pidx = VAR_3;
  if (VAR_4 < FUNC_2(VAR_1->ntb, VAR_3)) {
   if (VAR_1->gidx == -1)
    VAR_1->gidx = VAR_3;
   VAR_2->gidx = VAR_3 + 1;
  } else {
   VAR_2->gidx = VAR_3;
  }
  FUNC_0(&VAR_2->service, VAR_0);
 }
 if (VAR_1->gidx == -1)
  VAR_1->gidx = VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->pcnt; VAR_3++) {
  VAR_5 = FUNC_4(&VAR_1->peers[VAR_3]);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_1(&VAR_1->ntb->dev, "Global port index %d\n", VAR_1->gidx);

 return 0;
}
