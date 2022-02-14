
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_peer {int sts; int outbuf_size; int outbuf_xlat; int gidx; int pidx; struct perf_ctx* perf; } ;
struct perf_ctx {TYPE_1__* ntb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct perf_peer *VAR_1)
{
 struct perf_ctx *VAR_2 = VAR_1->perf;
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2->ntb, VAR_1->pidx, VAR_1->gidx,
        VAR_1->outbuf_xlat, VAR_1->outbuf_size);
 if (VAR_3) {
  FUNC_0(&VAR_2->ntb->dev, "Failed to set outbuf translation\n");
  return VAR_3;
 }


 FUNC_2(VAR_0, &VAR_1->sts);

 return 0;
}
