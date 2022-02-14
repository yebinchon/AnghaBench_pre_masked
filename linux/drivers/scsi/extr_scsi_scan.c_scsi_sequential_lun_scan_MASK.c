
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u64 ;
struct TYPE_2__ {int parent; } ;
struct scsi_target {TYPE_1__ dev; } ;
struct Scsi_Host {int max_lun; } ;
typedef enum scsi_scan_mode { ____Placeholder_scsi_scan_mode } scsi_scan_mode ;
typedef int blist_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_6 ;
 struct Scsi_Host* FUNC_1 (int ) ;
 unsigned int VAR_7 ;
 int FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (struct scsi_target*,int,int *,int *,int,int *) ;
 int FUNC_4 (int ,struct scsi_target*,char*) ;

__attribute__((used)) static void FUNC_5(struct scsi_target *VAR_8,
         blist_flags_t VAR_9, int VAR_10,
         enum scsi_scan_mode VAR_11)
{
 uint VAR_12;
 u64 VAR_13, VAR_14;
 struct Scsi_Host *VAR_15 = FUNC_1(VAR_8->dev.parent);

 FUNC_0(3, FUNC_4(VAR_4, VAR_8,
  "scsi scan: Sequential scan\n"));

 VAR_12 = FUNC_2(VAR_7, VAR_15->max_lun);





 if (VAR_9 & VAR_3) {
  VAR_12 = VAR_15->max_lun;
  VAR_13 = 1;
 } else
  VAR_13 = 0;
 if (VAR_9 & VAR_0)
  VAR_12 = VAR_15->max_lun;



 if (VAR_9 & VAR_2)
  VAR_12 = FUNC_2(5U, VAR_12);




 if (VAR_10 < VAR_5 && !(VAR_9 & VAR_1))
  VAR_12 = FUNC_2(8U, VAR_12);
 else
  VAR_12 = FUNC_2(256U, VAR_12);






 for (VAR_14 = 1; VAR_14 < VAR_12; ++VAR_14)
  if ((FUNC_3(VAR_8, VAR_14, ((void*)0), ((void*)0), VAR_11,
         ((void*)0)) != VAR_6) &&
      !VAR_13)
   return;
}
