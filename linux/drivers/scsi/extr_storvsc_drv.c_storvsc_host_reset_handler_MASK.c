
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int path_id; } ;
struct vstor_packet {TYPE_2__ vm_srb; int flags; int operation; } ;
struct storvsc_cmd_request {int wait_event; struct vstor_packet vstor_packet; } ;
struct storvsc_device {struct storvsc_cmd_request reset_request; int path_id; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct hv_host_device {struct hv_device* dev; } ;
struct hv_device {int channel; } ;
struct TYPE_3__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct storvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (int *) ;
 struct hv_host_device* FUNC_2 (int ) ;
 int FUNC_3 (struct storvsc_device*) ;
 int FUNC_4 (int ,struct vstor_packet*,scalar_t__,unsigned long,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_9)
{
 struct hv_host_device *VAR_10 = FUNC_2(VAR_9->device->host);
 struct hv_device *VAR_11 = VAR_10->dev;

 struct storvsc_device *VAR_12;
 struct storvsc_cmd_request *VAR_13;
 struct vstor_packet *VAR_14;
 int VAR_15, VAR_16;


 VAR_12 = FUNC_0(VAR_11);
 if (!VAR_12)
  return VAR_0;

 VAR_13 = &VAR_12->reset_request;
 VAR_14 = &VAR_13->vstor_packet;

 FUNC_1(&VAR_13->wait_event);

 VAR_14->operation = VAR_7;
 VAR_14->flags = VAR_2;
 VAR_14->vm_srb.path_id = VAR_12->path_id;

 VAR_15 = FUNC_4(VAR_11->channel, VAR_14,
          (sizeof(struct vstor_packet) -
    VAR_8),
          (unsigned long)&VAR_12->reset_request,
          VAR_6,
          VAR_5);
 if (VAR_15 != 0)
  return VAR_0;

 VAR_16 = FUNC_5(&VAR_13->wait_event, 5*VAR_1);
 if (VAR_16 == 0)
  return VAR_4;
 FUNC_3(VAR_12);

 return VAR_3;
}
