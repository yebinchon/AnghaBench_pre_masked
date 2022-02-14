
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_2__ {struct scatterlist* sg; } ;
struct nvmet_tcp_cmd {size_t sg_idx; int nr_mapped; TYPE_1__ req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_2(struct nvmet_tcp_cmd *VAR_0)
{
 struct scatterlist *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->req.sg[VAR_0->sg_idx];

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_mapped; VAR_2++)
  FUNC_0(FUNC_1(&VAR_1[VAR_2]));
}
