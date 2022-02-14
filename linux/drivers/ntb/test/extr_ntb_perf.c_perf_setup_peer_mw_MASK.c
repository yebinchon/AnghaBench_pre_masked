
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_peer {scalar_t__ outbuf_size; int pidx; struct perf_ctx* perf; int outbuf; } ;
struct perf_ctx {TYPE_1__* ntb; int gidx; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,scalar_t__*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct perf_peer *VAR_2)
{
 struct perf_ctx *VAR_3 = VAR_2->perf;
 phys_addr_t VAR_4;
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3->ntb, VAR_3->gidx, &VAR_4,
       &VAR_2->outbuf_size);
 if (VAR_5)
  return VAR_5;

 VAR_2->outbuf = FUNC_1(&VAR_3->ntb->dev, VAR_4,
     VAR_2->outbuf_size);
 if (!VAR_2->outbuf)
  return -VAR_0;

 if (VAR_1 && VAR_2->outbuf_size > VAR_1) {
  VAR_2->outbuf_size = VAR_1;
  FUNC_0(&VAR_2->perf->ntb->dev,
   "Peer %d outbuf reduced to %pa\n", VAR_2->pidx,
   &VAR_2->outbuf_size);
 }

 return 0;
}
