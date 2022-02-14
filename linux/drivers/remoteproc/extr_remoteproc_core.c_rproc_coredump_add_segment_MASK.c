
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_dump_segment {size_t size; int node; int da; } ;
struct rproc {int dump_segments; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rproc_dump_segment* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct rproc *VAR_2, dma_addr_t VAR_3, size_t VAR_4)
{
 struct rproc_dump_segment *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->da = VAR_3;
 VAR_5->size = VAR_4;

 FUNC_1(&VAR_5->node, &VAR_2->dump_segments);

 return 0;
}
