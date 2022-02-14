
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_rdma_device {size_t srq_size; struct ib_srq* srq_cmds; struct ib_srq* srq; int pd; scalar_t__ inline_page_count; } ;
struct TYPE_2__ {size_t max_wr; scalar_t__ srq_limit; scalar_t__ max_sge; } ;
struct ib_srq_init_attr {int srq_type; TYPE_1__ attr; int * member_0; } ;
struct ib_srq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_srq*) ;
 int FUNC_1 (struct ib_srq*) ;
 struct ib_srq* FUNC_2 (int ,struct ib_srq_init_attr*) ;
 int FUNC_3 (struct ib_srq*) ;
 struct ib_srq* FUNC_4 (struct nvmet_rdma_device*,size_t,int) ;
 int FUNC_5 (struct nvmet_rdma_device*,struct ib_srq*,size_t,int) ;
 int FUNC_6 (struct nvmet_rdma_device*,struct ib_srq*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct nvmet_rdma_device *VAR_1)
{
 struct ib_srq_init_attr VAR_2 = { ((void*)0), };
 struct ib_srq *VAR_3;
 size_t VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = 4095;

 VAR_2.attr.max_wr = VAR_4;
 VAR_2.attr.max_sge = 1 + VAR_1->inline_page_count;
 VAR_2.attr.srq_limit = 0;
 VAR_2.srq_type = VAR_0;
 VAR_3 = FUNC_2(VAR_1->pd, &VAR_2);
 if (FUNC_0(VAR_3)) {




  FUNC_7("SRQ requested but not supported.\n");
  return 0;
 }

 VAR_1->srq_cmds = FUNC_4(VAR_1, VAR_4, 0);
 if (FUNC_0(VAR_1->srq_cmds)) {
  VAR_5 = FUNC_1(VAR_1->srq_cmds);
  goto out_destroy_srq;
 }

 VAR_1->srq = VAR_3;
 VAR_1->srq_size = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_6(VAR_1, &VAR_1->srq_cmds[VAR_6]);
  if (VAR_5)
   goto out_free_cmds;
 }

 return 0;

out_free_cmds:
 FUNC_5(VAR_1, VAR_1->srq_cmds, VAR_1->srq_size, 0);
out_destroy_srq:
 FUNC_3(VAR_3);
 return VAR_5;
}
