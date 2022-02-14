
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct scsi_device {struct Scsi_Host* host; } ;
struct TYPE_7__ {int phase; } ;
struct scsi_cmnd {TYPE_3__ SCp; struct scsi_device* device; } ;
struct fib {int flags; scalar_t__ callback_data; TYPE_2__* hw_fib_va; } ;
struct aac_hba_map_info {scalar_t__ devtype; } ;
struct aac_dev {TYPE_4__* pdev; struct aac_hba_map_info** hba_map; struct fib* fibs; } ;
struct Scsi_Host {int can_queue; scalar_t__ hostdata; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {scalar_t__ XferState; } ;
struct TYPE_6__ {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct aac_dev*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct aac_dev*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 size_t FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd* VAR_11)
{
 struct scsi_device * VAR_12 = VAR_11->device;
 struct Scsi_Host * VAR_13 = VAR_12->host;
 struct aac_dev * VAR_14 = (struct aac_dev *)VAR_13->hostdata;
 int VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;


 VAR_16 = FUNC_1(FUNC_5(VAR_11));

 for (VAR_15 = 0; VAR_15 < (VAR_13->can_queue + VAR_4); ++VAR_15) {
  struct fib *VAR_18 = &VAR_14->fibs[VAR_15];

  if (VAR_18->hw_fib_va->header.XferState &&
      (VAR_18->flags & VAR_7) &&
      (VAR_18->flags & VAR_9)) {
   struct aac_hba_map_info *VAR_19;
   u32 VAR_20, VAR_21;

   VAR_11 = (struct scsi_cmnd *)VAR_18->callback_data;
   VAR_20 = FUNC_1(FUNC_5(VAR_11));
   if (VAR_20 != VAR_16)
    continue;
   VAR_21 = FUNC_6(VAR_11);
   VAR_19 = &VAR_14->hba_map[VAR_20][VAR_21];
   if (VAR_20 >= VAR_2 || VAR_21 >= VAR_3 ||
       VAR_19->devtype != VAR_0) {
    VAR_18->flags |= VAR_8;
    VAR_11->SCp.phase = VAR_5;
   }
  }
 }

 FUNC_4("%s: Host adapter reset request. SCSI hang ?\n", VAR_1);




 VAR_17 = FUNC_0(VAR_14);
 if (VAR_17)
  FUNC_2(&VAR_14->pdev->dev, "Adapter health - %d\n", VAR_17);

 VAR_15 = FUNC_3(VAR_14);
 return (VAR_15 == 0) ? VAR_10 : VAR_6;
}
