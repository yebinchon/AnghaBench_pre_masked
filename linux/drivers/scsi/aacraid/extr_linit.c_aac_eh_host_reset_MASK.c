
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct Scsi_Host* host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct aac_hba_map_info {scalar_t__ devtype; scalar_t__ reset_state; } ;
struct TYPE_2__ {int supported_options2; } ;
struct aac_dev {struct aac_hba_map_info** hba_map; TYPE_1__ supplement_adapter_info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct aac_dev*,int,int ) ;

int FUNC_1(struct scsi_cmnd *VAR_10)
{
 struct scsi_device * VAR_11 = VAR_10->device;
 struct Scsi_Host * VAR_12 = VAR_11->host;
 struct aac_dev * VAR_13 = (struct aac_dev *)VAR_12->hostdata;
 int VAR_14 = VAR_6;
 __le32 VAR_15 = 0;
 bool VAR_16;
 bool VAR_17;
 bool VAR_18;




 VAR_15 = VAR_13->supplement_adapter_info.supported_options2;
 VAR_16 = VAR_15 & VAR_5;
 VAR_18 = VAR_15 & VAR_3;
 VAR_17 = VAR_15 & VAR_4;





 if ((VAR_16 || VAR_18)
  && VAR_9
  && (VAR_9 != -1 || !VAR_17)) {

  if (FUNC_0(VAR_13, 2, VAR_7) == 0)
   VAR_14 = VAR_8;
 }



 if (VAR_14 == VAR_8) {
  int VAR_19, VAR_20;
  struct aac_hba_map_info *VAR_21;

  for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
   for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
    VAR_21 = &VAR_13->hba_map[VAR_19][VAR_20];
    if (VAR_21->devtype == VAR_0)
     VAR_21->reset_state = 0;
   }
  }
 }
 return VAR_14;
}
