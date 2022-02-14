
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvscsi_host_data {int action; TYPE_1__* host; int dev; int request_limit; int queue; } ;
struct TYPE_2__ {int host_lock; } ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *,struct ibmvscsi_host_data*) ;
 int FUNC_3 (int *,struct ibmvscsi_host_data*) ;
 int FUNC_4 (struct ibmvscsi_host_data*,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct ibmvscsi_host_data *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;
 char *VAR_3 = "reset";

 FUNC_6(VAR_0->host->host_lock, VAR_1);
 switch (VAR_0->action) {
 case 128:
  VAR_2 = 0;
  break;
 case 129:
  FUNC_7(VAR_0->host->host_lock, VAR_1);
  VAR_2 = FUNC_3(&VAR_0->queue, VAR_0);
  FUNC_6(VAR_0->host->host_lock, VAR_1);
  if (!VAR_2)
   VAR_2 = FUNC_4(VAR_0, 0xC001000000000000LL, 0);
  FUNC_9(FUNC_8(VAR_0->dev));
  break;
 case 130:
  VAR_3 = "enable";
  FUNC_7(VAR_0->host->host_lock, VAR_1);
  VAR_2 = FUNC_2(&VAR_0->queue, VAR_0);
  FUNC_6(VAR_0->host->host_lock, VAR_1);
  if (!VAR_2)
   VAR_2 = FUNC_4(VAR_0, 0xC001000000000000LL, 0);
  break;
 case 131:
 default:
  FUNC_7(VAR_0->host->host_lock, VAR_1);
  return;
 }

 VAR_0->action = 131;

 if (VAR_2) {
  FUNC_0(&VAR_0->request_limit, -1);
  FUNC_1(VAR_0->dev, "error after %s\n", VAR_3);
 }
 FUNC_7(VAR_0->host->host_lock, VAR_1);

 FUNC_5(VAR_0->host);
}
