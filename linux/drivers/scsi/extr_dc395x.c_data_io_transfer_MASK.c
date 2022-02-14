
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ScsiReqBlk {int total_xfer_length; int sg_index; int sg_count; int sg_bus_addr; size_t request_length; int state; int status; int adapter_status; struct DeviceCtlBlk* dcb; TYPE_3__* cmd; TYPE_2__* segment_x; } ;
struct SGentry {int dummy; } ;
struct DeviceCtlBlk {int sync_period; } ;
struct AdapterCtlBlk {struct ScsiReqBlk* tmp_srb; } ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_7__ {int address; int length; } ;
struct TYPE_6__ {scalar_t__ lun; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int) ;
 int FUNC_3 (struct AdapterCtlBlk*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,TYPE_3__*,int ,int,char,int,int,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (char*,...) ;
 unsigned char* FUNC_11 (int ,int,size_t*,size_t*) ;
 int FUNC_12 (unsigned char*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct ScsiReqBlk*) ;

__attribute__((used)) static void FUNC_16(struct AdapterCtlBlk *VAR_31,
  struct ScsiReqBlk *VAR_32, u16 VAR_33)
{
 struct DeviceCtlBlk *VAR_34 = VAR_32->dcb;
 u8 VAR_35;
 FUNC_5(VAR_2,
  "data_io_transfer: (0x%p) <%02i-%i> %c len=%i, sg=(%i/%i)\n",
  VAR_32->cmd, VAR_32->cmd->device->id, (u8)VAR_32->cmd->device->lun,
  ((VAR_33 & VAR_5) ? 'r' : 'w'),
  VAR_32->total_xfer_length, VAR_32->sg_index, VAR_32->sg_count);
 if (VAR_32 == VAR_31->tmp_srb)
  FUNC_6(VAR_10, "data_io_transfer: Using tmp_srb!\n");
 if (VAR_32->sg_index >= VAR_32->sg_count) {

  return;
 }

 if (VAR_32->total_xfer_length > VAR_4) {
  u8 VAR_36 = FUNC_0(VAR_31, VAR_20);




  if (VAR_36 & VAR_30) {
   FUNC_6(VAR_9, "data_io_transfer: Xfer pending! "
    "Expect trouble!\n");
   FUNC_7(VAR_31, VAR_34, VAR_32);
   FUNC_3(VAR_31, VAR_19, VAR_1);
  }





  VAR_32->state |= VAR_16;
  FUNC_2(VAR_31, VAR_22, 0);
  if (FUNC_13(VAR_32->cmd)) {
   VAR_33 |= VAR_6;
   FUNC_2(VAR_31, VAR_23,
           VAR_32->sg_bus_addr +
           sizeof(struct SGentry) *
           VAR_32->sg_index);

   FUNC_2(VAR_31, VAR_21,
           ((u32)(VAR_32->sg_count -
           VAR_32->sg_index) << 3));
  } else {
   VAR_33 &= ~VAR_6;
   FUNC_2(VAR_31, VAR_23,
           VAR_32->segment_x[0].address);
   FUNC_2(VAR_31, VAR_21,
           VAR_32->segment_x[0].length);
  }

  FUNC_2(VAR_31, VAR_27,
          VAR_32->total_xfer_length);
  FUNC_1(VAR_31, VAR_26, VAR_7);
  if (VAR_33 & VAR_5) {
   FUNC_3(VAR_31, VAR_24,
          VAR_12);
   FUNC_1(VAR_31, VAR_18, VAR_33);
  } else {
   FUNC_1(VAR_31, VAR_18, VAR_33);
   FUNC_3(VAR_31, VAR_24,
          VAR_13);
  }

 }
 else {
  u8 VAR_37 = 0, VAR_38 = 0;
  if (VAR_32->sg_count) {
   VAR_32->adapter_status = VAR_8;
   VAR_32->status |= VAR_11;
  }





  if (VAR_34->sync_period & VAR_29) {
   FUNC_2(VAR_31, VAR_27, 2);
   FUNC_3(VAR_31, VAR_25,
          VAR_0);
   if (VAR_33 & VAR_5) {
    VAR_37 = FUNC_0(VAR_31, VAR_28);
    VAR_38 = FUNC_0(VAR_31, VAR_28);
   } else {



    FUNC_3(VAR_31, VAR_28, 'K');
    FUNC_3(VAR_31, VAR_28, 'G');
   }
   FUNC_3(VAR_31, VAR_25, 0);
  } else {
   FUNC_2(VAR_31, VAR_27, 1);


   if (VAR_33 & VAR_5)
    VAR_37 = FUNC_0(VAR_31, VAR_28);
   else
    FUNC_3(VAR_31, VAR_28, 'K');
  }
  VAR_32->state |= VAR_17;
  FUNC_1(VAR_31, VAR_26, VAR_7);

  VAR_35 = (VAR_33 & VAR_5) ? VAR_14 : VAR_15;
  FUNC_3(VAR_31, VAR_24, VAR_35);
 }
}
