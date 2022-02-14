
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_port {int dev; int d_id; } ;
struct zfcp_fsf_ct_els {int handler; } ;
struct zfcp_adapter {int dummy; } ;
struct fc_rport {int port_name; } ;
struct TYPE_3__ {int port_id; } ;
struct TYPE_4__ {TYPE_1__ h_els; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct bsg_job {int timeout; struct fc_bsg_request* request; struct zfcp_fsf_ct_els* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fc_rport* FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct zfcp_adapter*,int ,struct zfcp_fsf_ct_els*,int) ;
 struct zfcp_port* FUNC_4 (struct zfcp_adapter*,int ) ;

__attribute__((used)) static int FUNC_5(struct bsg_job *VAR_3,
    struct zfcp_adapter *VAR_4)
{
 struct zfcp_fsf_ct_els *VAR_5 = VAR_3->dd_data;
 struct fc_rport *VAR_6 = FUNC_0(VAR_3);
 struct fc_bsg_request *VAR_7 = VAR_3->request;
 struct zfcp_port *VAR_8;
 u32 VAR_9;

 if (VAR_6) {
  VAR_8 = FUNC_4(VAR_4, VAR_6->port_name);
  if (!VAR_8)
   return -VAR_0;

  VAR_9 = VAR_8->d_id;
  FUNC_2(&VAR_8->dev);
 } else
  VAR_9 = FUNC_1(VAR_7->rqst_data.h_els.port_id);

 VAR_5->handler = VAR_2;
 return FUNC_3(VAR_4, VAR_9, VAR_5, VAR_3->timeout / VAR_1);
}
