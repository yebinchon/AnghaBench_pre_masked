
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snic {scalar_t__ max_tag_id; int shost; } ;
struct scsi_device {int sdev_gendev; } ;
struct scsi_cmnd {struct scsi_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct snic*,scalar_t__,struct scsi_device*) ;
 scalar_t__ FUNC_7 (struct snic*,struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_8(struct snic *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct scsi_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = 0;
 int VAR_5 = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1->max_tag_id; VAR_4++) {
  if (VAR_4 == FUNC_5(VAR_2))
   continue;

  VAR_5 = FUNC_6(VAR_1, VAR_4, VAR_3);
  if (VAR_5) {
   FUNC_0(VAR_1->shost, "clean_err:tag = %d\n", VAR_4);

   goto clean_err;
  }
 }

 FUNC_4(FUNC_3(100));


 if (FUNC_7(VAR_1, VAR_2)) {
  VAR_5 = VAR_0;

  goto clean_err;
 }

 VAR_5 = 0;
 FUNC_1(VAR_1->shost, "clean_pending_req: Success.\n");

 return VAR_5;

clean_err:
 VAR_5 = VAR_0;
 FUNC_0(VAR_1->shost,
        "Failed to Clean Pending IOs on %s device.\n",
        FUNC_2(&VAR_3->sdev_gendev));

 return VAR_5;

}
