
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct iscsi_internal {TYPE_1__* iscsi_transport; } ;
struct iscsi_cls_host {struct request_queue* bsg_q; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; int transportt; struct device shost_gendev; } ;
typedef int bsg_name ;
struct TYPE_2__ {int bsg_request; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int VAR_1 ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct Scsi_Host*,struct request_queue*) ;
 struct request_queue* FUNC_3 (struct device*,char*,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct Scsi_Host*,char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 struct iscsi_internal* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct Scsi_Host *VAR_3, struct iscsi_cls_host *VAR_4)
{
 struct device *VAR_5 = &VAR_3->shost_gendev;
 struct iscsi_internal *VAR_6 = FUNC_6(VAR_3->transportt);
 struct request_queue *VAR_7;
 char VAR_8[20];

 if (!VAR_6->iscsi_transport->bsg_request)
  return -VAR_0;

 FUNC_5(VAR_8, sizeof(VAR_8), "iscsi_host%d", VAR_3->host_no);
 VAR_7 = FUNC_3(VAR_5, VAR_8, VAR_2, ((void*)0), 0);
 if (FUNC_0(VAR_7)) {
  FUNC_4(VAR_1, VAR_3, "bsg interface failed to "
        "initialize - no request queue\n");
  return FUNC_1(VAR_7);
 }
 FUNC_2(VAR_3, VAR_7);

 VAR_4->bsg_q = VAR_7;
 return 0;
}
