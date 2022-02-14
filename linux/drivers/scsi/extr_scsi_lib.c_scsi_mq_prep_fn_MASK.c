
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_device {struct Scsi_Host* host; } ;
struct scsi_data_buffer {int dummy; } ;
struct TYPE_9__ {struct scatterlist* sgl; } ;
struct TYPE_10__ {TYPE_3__ table; } ;
struct scsi_cmnd {TYPE_6__* prot_sdb; TYPE_4__ sdb; int prot_op; int tag; struct request* request; } ;
struct scatterlist {int dummy; } ;
struct request {int tag; TYPE_1__* q; } ;
struct Scsi_Host {TYPE_2__* hostt; } ;
typedef int blk_status_t ;
struct TYPE_11__ {struct scatterlist* sgl; } ;
struct TYPE_12__ {TYPE_5__ table; } ;
struct TYPE_8__ {int cmd_size; } ;
struct TYPE_7__ {struct scsi_device* queuedata; } ;


 int VAR_0 ;
 struct scsi_cmnd* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct scsi_device*,struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_device*,struct request*) ;

__attribute__((used)) static blk_status_t FUNC_6(struct request *VAR_1)
{
 struct scsi_cmnd *VAR_2 = FUNC_0(VAR_1);
 struct scsi_device *VAR_3 = VAR_1->q->queuedata;
 struct Scsi_Host *VAR_4 = VAR_3->host;
 struct scatterlist *VAR_5;

 FUNC_4(VAR_3, VAR_2);

 VAR_2->request = VAR_1;
 VAR_2->tag = VAR_1->tag;
 VAR_2->prot_op = VAR_0;

 VAR_5 = (void *)VAR_2 + sizeof(struct scsi_cmnd) + VAR_4->hostt->cmd_size;
 VAR_2->sdb.table.sgl = VAR_5;

 if (FUNC_3(VAR_4)) {
  FUNC_2(VAR_2->prot_sdb, 0, sizeof(struct scsi_data_buffer));

  VAR_2->prot_sdb->table.sgl =
   (struct scatterlist *)(VAR_2->prot_sdb + 1);
 }

 FUNC_1(VAR_1);

 return FUNC_5(VAR_3, VAR_1);
}
