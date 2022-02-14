
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nents; int sgl; } ;
struct scsi_data_buffer {TYPE_1__ table; } ;
struct scsi_cmnd {struct scsi_data_buffer* prot_sdb; int sdb; struct request* request; } ;
struct request {int q; int bio; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct request*,int *) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int,int ,int ) ;

blk_status_t FUNC_10(struct scsi_cmnd *VAR_4)
{
 struct request *VAR_5 = VAR_4->request;
 blk_status_t VAR_6;

 if (FUNC_1(!FUNC_5(VAR_5)))
  return VAR_0;

 VAR_6 = FUNC_7(VAR_5, &VAR_4->sdb);
 if (VAR_6)
  return VAR_6;

 if (FUNC_2(VAR_5)) {
  struct scsi_data_buffer *VAR_7 = VAR_4->prot_sdb;
  int VAR_8, VAR_9;

  if (FUNC_1(!VAR_7)) {





   VAR_6 = VAR_0;
   goto out_free_sgtables;
  }

  VAR_8 = FUNC_3(VAR_5->q, VAR_5->bio);

  if (FUNC_9(&VAR_7->table, VAR_8,
    VAR_7->table.sgl,
    VAR_3)) {
   VAR_6 = VAR_2;
   goto out_free_sgtables;
  }

  VAR_9 = FUNC_4(VAR_5->q, VAR_5->bio,
      VAR_7->table.sgl);
  FUNC_0(VAR_9 > VAR_8);
  FUNC_0(VAR_9 > FUNC_6(VAR_5->q));

  VAR_4->prot_sdb = VAR_7;
  VAR_4->prot_sdb->table.nents = VAR_9;
 }

 return VAR_1;
out_free_sgtables:
 FUNC_8(VAR_4);
 return VAR_6;
}
