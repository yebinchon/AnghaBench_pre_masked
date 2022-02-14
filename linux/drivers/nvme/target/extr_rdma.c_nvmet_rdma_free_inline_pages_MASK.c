
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nvmet_rdma_device {int inline_page_count; int device; int inline_data_size; } ;
struct nvmet_rdma_cmd {struct ib_sge* sge; struct scatterlist* inline_sg; } ;
struct ib_sge {scalar_t__ length; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_3(struct nvmet_rdma_device *VAR_1,
    struct nvmet_rdma_cmd *VAR_2)
{
 struct scatterlist *VAR_3;
 struct ib_sge *VAR_4;
 int VAR_5;

 if (!VAR_1->inline_data_size)
  return;

 VAR_3 = VAR_2->inline_sg;
 VAR_4 = &VAR_2->sge[1];

 for (VAR_5 = 0; VAR_5 < VAR_1->inline_page_count; VAR_5++, VAR_3++, VAR_4++) {
  if (VAR_4->length)
   FUNC_1(VAR_1->device, VAR_4->addr,
     VAR_4->length, VAR_0);
  if (FUNC_2(VAR_3))
   FUNC_0(FUNC_2(VAR_3));
 }
}
