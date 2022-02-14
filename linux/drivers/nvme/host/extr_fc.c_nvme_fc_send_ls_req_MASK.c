
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmefc_ls_req {struct fcnvme_ls_rjt* rspaddr; } ;
struct nvmefc_ls_req_op {int ls_error; int ls_done; struct nvmefc_ls_req ls_req; } ;
struct nvme_fc_rport {int dummy; } ;
struct TYPE_2__ {scalar_t__ ls_cmd; } ;
struct fcnvme_ls_rjt {TYPE_1__ w0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nvmefc_ls_req_op*) ;
 int FUNC_1 (struct nvme_fc_rport*,struct nvmefc_ls_req_op*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct nvme_fc_rport *VAR_3, struct nvmefc_ls_req_op *VAR_4)
{
 struct nvmefc_ls_req *VAR_5 = &VAR_4->ls_req;
 struct fcnvme_ls_rjt *VAR_6 = VAR_5->rspaddr;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_2);

 if (!VAR_7) {






  FUNC_2(&VAR_4->ls_done);

  FUNC_0(VAR_4);

  VAR_7 = VAR_4->ls_error;
 }

 if (VAR_7)
  return VAR_7;


 if (VAR_6->w0.ls_cmd == VAR_1)
  return -VAR_0;

 return 0;
}
