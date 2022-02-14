
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct scsi_device {struct MR_PRIV_DEVICE* hostdata; TYPE_1__* host; } ;
struct megasas_instance {TYPE_3__* host; scalar_t__ enable_sdev_max_qd; TYPE_2__* tgt_prop; } ;
struct MR_PRIV_DEVICE {int interface_type; } ;
struct TYPE_6__ {scalar_t__ can_queue; } ;
struct TYPE_5__ {int device_qdepth; } ;
struct TYPE_4__ {int host_no; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct megasas_instance* FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_5,
       bool VAR_6)
{
 u8 VAR_7;
 u32 VAR_8 = VAR_0;
 u32 VAR_9;
 struct megasas_instance *VAR_10;
 struct MR_PRIV_DEVICE *VAR_11;

 VAR_10 = FUNC_1(VAR_5->host->host_no);
 VAR_11 = VAR_5->hostdata;
 VAR_7 = VAR_11->interface_type;

 switch (VAR_7) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 case 130:
  VAR_8 = VAR_1;
  break;
 }

 if (VAR_6) {
  VAR_9 = FUNC_0(VAR_10->tgt_prop->device_qdepth);
  if (VAR_9 &&
      (VAR_9 <= VAR_10->host->can_queue))
   VAR_8 = VAR_9;
 }

 if (VAR_10->enable_sdev_max_qd && VAR_7 != VAR_4)
  VAR_8 = VAR_10->host->can_queue;

 FUNC_2(VAR_5, VAR_8);
}
