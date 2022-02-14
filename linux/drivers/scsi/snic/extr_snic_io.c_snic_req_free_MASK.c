
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_req_info {scalar_t__ sge_va; int req_len; size_t rq_pool_type; scalar_t__ req_pa; struct snic_req_info* req; struct snic_req_info* dr_req; struct snic_req_info* abort_req; } ;
struct snic_host_req {int dummy; } ;
struct snic {int * req_pool; TYPE_1__* pdev; int shost; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*,struct snic_req_info*,struct snic_req_info*,struct snic_req_info*,struct snic_req_info*) ;
 int FUNC_2 (int *,scalar_t__,int,int ) ;
 int FUNC_3 (struct snic_req_info*,int ) ;

void
FUNC_4(struct snic *VAR_2, struct snic_req_info *VAR_3)
{
 FUNC_0(VAR_3->req == VAR_3->abort_req);
 FUNC_0(VAR_3->req == VAR_3->dr_req);
 FUNC_0(VAR_3->sge_va != 0);

 FUNC_1(VAR_2->shost,
        "Req_free:rqi %p:ioreq %p:abt %p:dr %p\n",
        VAR_3, VAR_3->req, VAR_3->abort_req, VAR_3->dr_req);

 if (VAR_3->abort_req) {
  if (VAR_3->abort_req->req_pa)
   FUNC_2(&VAR_2->pdev->dev,
      VAR_3->abort_req->req_pa,
      sizeof(struct snic_host_req),
      VAR_0);

  FUNC_3(VAR_3->abort_req, VAR_2->req_pool[VAR_1]);
 }

 if (VAR_3->dr_req) {
  if (VAR_3->dr_req->req_pa)
   FUNC_2(&VAR_2->pdev->dev,
      VAR_3->dr_req->req_pa,
      sizeof(struct snic_host_req),
      VAR_0);

  FUNC_3(VAR_3->dr_req, VAR_2->req_pool[VAR_1]);
 }

 if (VAR_3->req->req_pa)
  FUNC_2(&VAR_2->pdev->dev,
     VAR_3->req->req_pa,
     VAR_3->req_len,
     VAR_0);

 FUNC_3(VAR_3, VAR_2->req_pool[VAR_3->rq_pool_type]);
}
