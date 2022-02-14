
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req; } ;
struct TYPE_4__ {TYPE_1__ gpn_ft; } ;
struct zfcp_fc_req {TYPE_2__ u; int sg_req; int sg_rsp; } ;
struct zfcp_fc_gpn_ft_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct zfcp_fc_req*) ;
 struct zfcp_fc_req* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static struct zfcp_fc_req *FUNC_4(int VAR_2)
{
 struct zfcp_fc_req *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3(&VAR_3->sg_rsp, VAR_2)) {
  FUNC_0(VAR_1, VAR_3);
  return ((void*)0);
 }

 FUNC_2(&VAR_3->sg_req, &VAR_3->u.gpn_ft.req,
      sizeof(struct zfcp_fc_gpn_ft_req));

 return VAR_3;
}
