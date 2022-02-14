
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int allowed; scalar_t__ transfersize; int * cmnd; int sdb; struct request* request; } ;
struct request {int timeout; TYPE_1__* q; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int rq_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static blk_status_t FUNC_1(struct scsi_cmnd *VAR_4)
{
 struct request *VAR_5 = VAR_4->request;


 FUNC_0(&VAR_4->sdb, 0, sizeof(VAR_4->sdb));

 VAR_4->cmnd[0] = VAR_3;
 VAR_4->cmd_len = 10;
 VAR_4->transfersize = 0;
 VAR_4->allowed = VAR_2;

 VAR_5->timeout = VAR_5->q->rq_timeout * VAR_1;
 return VAR_0;
}
