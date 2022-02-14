
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_target {TYPE_2__* hostdata; } ;
struct scsi_device {scalar_t__ type; int tagged_supported; int host; } ;
struct TYPE_7__ {int tflags; scalar_t__ minSyncFactor; } ;
typedef TYPE_2__ VirtTarget ;
struct TYPE_9__ {scalar_t__ bus_type; TYPE_1__* sh; } ;
struct TYPE_8__ {TYPE_4__* ioc; } ;
struct TYPE_6__ {int can_queue; } ;
typedef TYPE_3__ MPT_SCSI_HOST ;
typedef TYPE_4__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct scsi_device*,int) ;
 struct scsi_target* FUNC_1 (struct scsi_device*) ;
 TYPE_3__* FUNC_2 (int ) ;

int
FUNC_3(struct scsi_device *VAR_6, int VAR_7)
{
 MPT_SCSI_HOST *VAR_8 = FUNC_2(VAR_6->host);
 VirtTarget *VAR_9;
 struct scsi_target *VAR_10;
 int VAR_11;
 MPT_ADAPTER *VAR_12 = VAR_8->ioc;

 VAR_10 = FUNC_1(VAR_6);
 VAR_9 = VAR_10->hostdata;

 if (VAR_12->bus_type == VAR_4) {
  if (!(VAR_9->tflags & VAR_2))
   VAR_11 = 1;
  else if (VAR_6->type == VAR_5 &&
    VAR_9->minSyncFactor <= VAR_3)
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_1;
 } else
   VAR_11 = VAR_12->sh->can_queue;

 if (!VAR_6->tagged_supported)
  VAR_11 = 1;

 if (VAR_7 > VAR_11)
  VAR_7 = VAR_11;

 return FUNC_0(VAR_6, VAR_7);
}
