
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct scsi_device {int channel; size_t id; struct MR_PRIV_DEVICE* hostdata; TYPE_2__* host; } ;
struct megasas_instance {int r1_ldio_hint_default; TYPE_1__* pd_list; scalar_t__ pd_list_not_supported; } ;
struct MR_PRIV_DEVICE {int r1_ldio_hint; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {scalar_t__ driveState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct MR_PRIV_DEVICE* FUNC_2 (int,int ) ;
 struct megasas_instance* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_5)
{
 u16 VAR_6 = 0;
 struct megasas_instance *VAR_7 ;
 struct MR_PRIV_DEVICE *VAR_8;

 VAR_7 = FUNC_3(VAR_5->host->host_no);
 if (!FUNC_0(VAR_5)) {



  VAR_6 =
   (VAR_5->channel * VAR_3) +
   VAR_5->id;
  if ((VAR_7->pd_list_not_supported ||
   VAR_7->pd_list[VAR_6].driveState ==
   VAR_4)) {
   goto scan_target;
  }
  return -VAR_1;
 }

scan_target:
 VAR_8 = FUNC_2(sizeof(*VAR_8),
     VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_5->hostdata = VAR_8;

 FUNC_1(&VAR_8->r1_ldio_hint,
     VAR_7->r1_ldio_hint_default);
 return 0;
}
