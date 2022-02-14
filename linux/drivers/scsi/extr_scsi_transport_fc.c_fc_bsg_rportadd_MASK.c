
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct device {int dummy; } ;
struct fc_rport {struct request_queue* rqst_q; struct device dev; } ;
struct fc_internal {TYPE_1__* f; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_2__ {int dd_bsg_size; int bsg_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct Scsi_Host*,struct request_queue*) ;
 int FUNC_3 (struct request_queue*,int ) ;
 struct request_queue* FUNC_4 (struct device*,int ,int ,int ,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fc_internal* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct Scsi_Host *VAR_4, struct fc_rport *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct fc_internal *VAR_7 = FUNC_7(VAR_4->transportt);
 struct request_queue *VAR_8;

 VAR_5->rqst_q = ((void*)0);

 if (!VAR_7->f->bsg_request)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_6, FUNC_6(VAR_6), VAR_2,
    VAR_3, VAR_7->f->dd_bsg_size);
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_6, "failed to setup bsg queue\n");
  return FUNC_1(VAR_8);
 }
 FUNC_2(VAR_4, VAR_8);
 FUNC_3(VAR_8, VAR_0);
 VAR_5->rqst_q = VAR_8;
 return 0;
}
