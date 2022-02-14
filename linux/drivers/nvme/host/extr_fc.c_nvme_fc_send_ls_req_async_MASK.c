
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmefc_ls_req_op {int dummy; } ;
struct nvme_fc_rport {int dummy; } ;


 int FUNC_0 (struct nvme_fc_rport*,struct nvmefc_ls_req_op*,void (*) (struct nvmefc_ls_req*,int)) ;

__attribute__((used)) static int
FUNC_1(struct nvme_fc_rport *VAR_0,
  struct nvmefc_ls_req_op *VAR_1,
  void (*VAR_2)(struct nvmefc_ls_req *VAR_3, int VAR_4))
{


 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
