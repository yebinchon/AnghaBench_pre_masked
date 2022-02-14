
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ typ; } ;
struct snic_tgt {TYPE_1__ tdata; } ;
struct snic {int max_tag_id; int shost; } ;
struct scsi_cmnd {int device; } ;
typedef int spinlock_t ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct scsi_cmnd* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 struct snic* FUNC_4 (int ) ;
 int FUNC_5 (struct snic*,struct scsi_cmnd*,int) ;
 int * FUNC_6 (struct snic*,int) ;
 int FUNC_7 (struct snic_tgt*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct snic_tgt* FUNC_10 (int ) ;

int
FUNC_11(struct snic_tgt *VAR_4)
{
 struct snic *VAR_5 = ((void*)0);
 struct scsi_cmnd *VAR_6 = ((void*)0);
 struct snic_tgt *VAR_7 = ((void*)0);
 spinlock_t *VAR_8 = ((void*)0);
 unsigned long VAR_9;
 int VAR_10 = 0, VAR_11, VAR_12 = 0, VAR_13 = 0;

 if (!VAR_4)
  return -1;

 VAR_5 = FUNC_4(FUNC_7(VAR_4));
 FUNC_1(VAR_5->shost, "tgt_abt_io: Cleaning Pending IOs.\n");

 if (VAR_4->tdata.typ == VAR_2)
  VAR_13 = VAR_0;
 else
  VAR_13 = VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_5->max_tag_id; VAR_11++) {
  VAR_8 = FUNC_6(VAR_5, VAR_11);

  FUNC_8(VAR_8, VAR_9);
  VAR_6 = FUNC_2(VAR_5->shost, VAR_11);
  if (!VAR_6) {
   FUNC_9(VAR_8, VAR_9);

   continue;
  }

  VAR_7 = FUNC_10(FUNC_3(VAR_6->device));
  if (VAR_7 != VAR_4) {
   FUNC_9(VAR_8, VAR_9);

   continue;
  }
  FUNC_9(VAR_8, VAR_9);

  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_13);
  if (VAR_10 < 0) {
   FUNC_0(VAR_5->shost,
          "tgt_abt_io: Tag %x, Failed w err = %d\n",
          VAR_11, VAR_10);

   continue;
  }

  if (VAR_10 == VAR_3)
   VAR_12++;
 }

 FUNC_1(VAR_5->shost, "tgt_abt_io: abt_cnt = %d\n", VAR_12);

 return 0;
}
