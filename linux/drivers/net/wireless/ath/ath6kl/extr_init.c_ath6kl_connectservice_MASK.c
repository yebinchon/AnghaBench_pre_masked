
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_service_connect_resp {int endpoint; } ;
struct htc_service_connect_req {int svc_id; } ;
struct ath6kl {int ctrl_ep; int wmi; int flag; int htc_target; } ;
typedef int response ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,struct htc_service_connect_req*,struct htc_service_connect_resp*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct htc_service_connect_resp*,int ,int) ;
 int FUNC_4 (struct ath6kl*,int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_6,
     struct htc_service_connect_req *VAR_7,
     char *VAR_8)
{
 int VAR_9;
 struct htc_service_connect_resp VAR_10;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));

 VAR_9 = FUNC_1(VAR_6->htc_target, VAR_7, &VAR_10);
 if (VAR_9) {
  FUNC_0("failed to connect to %s service status:%d\n",
      VAR_8, VAR_9);
  return VAR_9;
 }

 switch (VAR_7->svc_id) {
 case 132:
  if (FUNC_5(VAR_1, &VAR_6->flag))
   FUNC_2(VAR_6->wmi, VAR_10.endpoint);
  VAR_6->ctrl_ep = VAR_10.endpoint;
  break;
 case 131:
  FUNC_4(VAR_6, VAR_2, VAR_10.endpoint);
  break;
 case 130:
  FUNC_4(VAR_6, VAR_3, VAR_10.endpoint);
  break;
 case 129:
  FUNC_4(VAR_6, VAR_4, VAR_10.endpoint);
  break;
 case 128:
  FUNC_4(VAR_6, VAR_5, VAR_10.endpoint);
  break;
 default:
  FUNC_0("service id is not mapped %d\n", VAR_7->svc_id);
  return -VAR_0;
 }

 return 0;
}
