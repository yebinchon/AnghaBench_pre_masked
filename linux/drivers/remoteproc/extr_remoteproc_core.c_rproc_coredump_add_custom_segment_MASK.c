
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_dump_segment {size_t size; void (* dump ) (struct rproc*,struct rproc_dump_segment*,void*) ;int node; void* priv; int da; } ;
struct rproc {int dump_segments; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rproc_dump_segment* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct rproc *VAR_2,
          dma_addr_t VAR_3, size_t VAR_4,
          void (*VAR_5)(struct rproc *VAR_6,
           struct rproc_dump_segment *VAR_7,
           void *VAR_8),
          void *VAR_9)
{
 struct rproc_dump_segment *VAR_10;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->da = VAR_3;
 VAR_10->size = VAR_4;
 VAR_10->priv = VAR_9;
 VAR_10->dump = VAR_5;

 FUNC_1(&VAR_10->node, &VAR_2->dump_segments);

 return 0;
}
