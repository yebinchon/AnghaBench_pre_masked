
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct fc_internal {TYPE_1__* f; } ;
struct fc_host_attrs {struct request_queue* rqst_q; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; int transportt; struct device shost_gendev; } ;
typedef int bsg_name ;
struct TYPE_2__ {int dd_bsg_size; int bsg_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct Scsi_Host*,struct request_queue*) ;
 int FUNC_3 (struct request_queue*,int ) ;
 struct request_queue* FUNC_4 (struct device*,char*,int ,int ,int ) ;
 int FUNC_5 (struct device*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int,char*,int) ;
 struct fc_internal* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct Scsi_Host *VAR_4, struct fc_host_attrs *VAR_5)
{
 struct device *VAR_6 = &VAR_4->shost_gendev;
 struct fc_internal *VAR_7 = FUNC_7(VAR_4->transportt);
 struct request_queue *VAR_8;
 char VAR_9[20];

 VAR_5->rqst_q = ((void*)0);

 if (!VAR_7->f->bsg_request)
  return -VAR_0;

 FUNC_6(VAR_9, sizeof(VAR_9),
   "fc_host%d", VAR_4->host_no);

 VAR_8 = FUNC_4(VAR_6, VAR_9, VAR_2, VAR_3,
    VAR_7->f->dd_bsg_size);
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_6,
   "fc_host%d: bsg interface failed to initialize - setup queue\n",
   VAR_4->host_no);
  return FUNC_1(VAR_8);
 }
 FUNC_2(VAR_4, VAR_8);
 FUNC_3(VAR_8, VAR_1);
 VAR_5->rqst_q = VAR_8;
 return 0;
}
