
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snic_req_info {int dummy; } ;
struct snic {scalar_t__ max_tag_id; int shost; } ;
struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
typedef int spinlock_t ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;
 struct scsi_cmnd* FUNC_3 (int ,scalar_t__) ;
 int * FUNC_4 (struct snic*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct snic *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct snic_req_info *VAR_3 = ((void*)0);
 struct scsi_cmnd *VAR_4 = ((void*)0);
 struct scsi_device *VAR_5 = ((void*)0);
 spinlock_t *VAR_6 = ((void*)0);
 u32 VAR_7;
 unsigned long VAR_8;

 if (VAR_2)
  VAR_5 = VAR_2->device;


 for (VAR_7 = 0; VAR_7 < VAR_1->max_tag_id; VAR_7++) {
  VAR_6 = FUNC_4(VAR_1, VAR_7);

  FUNC_6(VAR_6, VAR_8);
  VAR_4 = FUNC_3(VAR_1->shost, VAR_7);

  if (!VAR_4 || (VAR_2 && (VAR_4->device != VAR_5 || VAR_4 == VAR_2))) {
   FUNC_7(VAR_6, VAR_8);

   continue;
  }

  VAR_3 = (struct snic_req_info *) FUNC_0(VAR_4);
  if (!VAR_3) {
   FUNC_7(VAR_6, VAR_8);

   continue;
  }





  FUNC_2(VAR_1->shost, "Found IO in %s on LUN\n",
         FUNC_5(FUNC_1(VAR_4)));

  if (FUNC_1(VAR_4) == VAR_0) {
   FUNC_7(VAR_6, VAR_8);

   return 1;
  }

  FUNC_7(VAR_6, VAR_8);
 }

 return 0;
}
