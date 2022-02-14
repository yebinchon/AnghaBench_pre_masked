
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union srp_iu {int dummy; } srp_iu ;
struct srp_login_req {int req_buf_fmt; int req_it_iu_len; int opcode; } ;
struct TYPE_4__ {struct srp_login_req login_req; } ;
struct TYPE_5__ {TYPE_1__ srp; } ;
struct srp_event_struct {TYPE_2__ iu; } ;
struct ibmvscsi_host_data {int dev; TYPE_3__* host; int request_limit; int pool; } ;
struct TYPE_6__ {int host_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 struct srp_event_struct* FUNC_5 (int *) ;
 int FUNC_6 (struct srp_event_struct*,struct ibmvscsi_host_data*,int) ;
 int FUNC_7 (struct srp_event_struct*,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct srp_login_req*,int ,int) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct ibmvscsi_host_data *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct srp_login_req *VAR_9;
 struct srp_event_struct *VAR_10 = FUNC_5(&VAR_6->pool);

 FUNC_0(!VAR_10);
 FUNC_7(VAR_10, VAR_4,
     VAR_3, VAR_5);

 VAR_9 = &VAR_10->iu.srp.login_req;
 FUNC_8(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->opcode = VAR_2;
 VAR_9->req_it_iu_len = FUNC_3(sizeof(union srp_iu));
 VAR_9->req_buf_fmt = FUNC_2(VAR_0 |
      VAR_1);

 FUNC_9(VAR_6->host->host_lock, VAR_8);




 FUNC_1(&VAR_6->request_limit, 0);

 VAR_7 = FUNC_6(VAR_10, VAR_6, VAR_5 * 2);
 FUNC_10(VAR_6->host->host_lock, VAR_8);
 FUNC_4(VAR_6->dev, "sent SRP login\n");
 return VAR_7;
}
