
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct esas2r_sg_context {scalar_t__ length; } ;
struct esas2r_request {TYPE_4__* vrq; struct esas2r_ioctl_fs* interrupt_cx; int interrupt_cb; } ;
struct esas2r_ioctlfs_command {int command; int flash_addr; int checksum; int length; } ;
struct esas2r_ioctl_fs {scalar_t__ version; scalar_t__ adap_type; scalar_t__ driver_ver; void* status; int driver_error; struct esas2r_ioctlfs_command command; } ;
struct esas2r_adapter {int flags; TYPE_1__* pcid; } ;
struct TYPE_6__ {int sge; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_3__ flash; } ;
struct TYPE_5__ {scalar_t__ device; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int* VAR_23 ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sg_context*) ;
 int VAR_24 ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_sg_context*,struct esas2r_adapter*,struct esas2r_request*,int ) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

bool FUNC_8(struct esas2r_adapter *VAR_25,
        struct esas2r_ioctl_fs *VAR_26,
        struct esas2r_request *VAR_27,
        struct esas2r_sg_context *VAR_28)
{
 u8 VAR_29 = (u8)FUNC_0(VAR_23);
 struct esas2r_ioctlfs_command *VAR_30 = &VAR_26->command;
 u8 VAR_31 = 0;
 u32 VAR_32;

 VAR_26->status = VAR_6;
 VAR_26->driver_error = VAR_19;

 if (VAR_26->version > VAR_18) {
  VAR_26->status = VAR_10;
  return 0;
 }

 if (VAR_30->command >= VAR_29) {
  VAR_26->status = VAR_9;
  return 0;
 }

 VAR_31 = VAR_23[VAR_30->command];
 if (VAR_31 == 0xFF) {
  VAR_26->status = VAR_9;
  return 0;
 }

 if (VAR_30->command != VAR_16) {
  if ((VAR_25->pcid->device != VAR_1
       || VAR_26->adap_type != VAR_12)
      && (VAR_25->pcid->device != VAR_3
   || VAR_26->adap_type != VAR_14)
      && (VAR_25->pcid->device != VAR_4
   || VAR_26->adap_type != VAR_15)
      && (VAR_25->pcid->device != VAR_2
   || VAR_26->adap_type != VAR_13)) {
   VAR_26->status = VAR_7;
   return 0;
  }

  if (VAR_26->driver_ver > VAR_17) {
   VAR_26->status = VAR_8;
   return 0;
  }
 }

 if (FUNC_7(VAR_0, &VAR_25->flags)) {
  VAR_26->status = VAR_5;
  return 0;
 }

 VAR_27->interrupt_cb = VAR_24;
 VAR_27->interrupt_cx = VAR_26;
 VAR_32 = FUNC_6(VAR_30->length);
 FUNC_1(VAR_25,
          VAR_27,
          VAR_31,
          VAR_30->checksum,
          FUNC_6(VAR_30->flash_addr),
          VAR_32);

 if (VAR_31 == VAR_22
     || VAR_31 == VAR_21) {
  if (VAR_32 == 0) {
   VAR_26->status = VAR_9;
   return 0;
  }

  FUNC_4(VAR_28, VAR_25, VAR_27, VAR_27->vrq->flash.data.sge);
  VAR_28->length = VAR_32;

  if (!FUNC_2(VAR_25, VAR_27, VAR_28)) {
   VAR_26->status = VAR_11;
   return 0;
  }
 }

 if (VAR_31 == VAR_20)
  FUNC_3(VAR_25);

 FUNC_5(VAR_25, VAR_27);

 return 1;
}
