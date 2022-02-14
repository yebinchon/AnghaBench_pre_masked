
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_peer {int * inbuf; int inbuf_xlat; int inbuf_size; TYPE_1__* perf; int gidx; int pidx; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* ntb; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct perf_peer *VAR_0)
{
 if (!VAR_0->inbuf)
  return;

 (void)FUNC_1(VAR_0->perf->ntb, VAR_0->pidx, VAR_0->gidx);
 FUNC_0(&VAR_0->perf->ntb->dev, VAR_0->inbuf_size,
     VAR_0->inbuf, VAR_0->inbuf_xlat);
 VAR_0->inbuf = ((void*)0);
}
