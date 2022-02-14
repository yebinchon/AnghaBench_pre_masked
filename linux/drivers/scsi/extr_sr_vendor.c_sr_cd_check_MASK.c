
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct packet_command {int* cmd; unsigned char* buffer; int buflen; int quiet; void* timeout; void* data_direction; } ;
struct cdrom_device_info {int mask; TYPE_3__* handle; } ;
struct TYPE_9__ {int mask; } ;
struct TYPE_10__ {int vendor; unsigned long ms_offset; int xa_flag; TYPE_1__* device; TYPE_2__ cdi; } ;
struct TYPE_8__ {int sector_size; } ;
typedef TYPE_3__ Scsi_CD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;


 void* VAR_14 ;


 unsigned long FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (struct packet_command*,int ,int) ;
 scalar_t__ FUNC_4 (struct cdrom_device_info*) ;
 int FUNC_5 (TYPE_3__*,struct packet_command*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,TYPE_3__*,char*,...) ;
 int FUNC_8 (TYPE_3__*,int) ;

int FUNC_9(struct cdrom_device_info *VAR_15)
{
 Scsi_CD *VAR_16 = VAR_15->handle;
 unsigned long VAR_17;
 unsigned char *VAR_18;
 struct packet_command VAR_19;
 int VAR_20, VAR_21;

 if (VAR_16->cdi.mask & VAR_0)
  return 0;

 VAR_18 = FUNC_2(512, VAR_9 | VAR_8);
 if (!VAR_18)
  return -VAR_7;

 VAR_17 = 0;
 VAR_21 = 0;
 VAR_20 = 0;

 FUNC_3(&VAR_19, 0, sizeof(struct packet_command));

 switch (VAR_16->vendor) {

 case 130:
  VAR_19.cmd[0] = VAR_13;
  VAR_19.cmd[8] = 12;
  VAR_19.cmd[9] = 0x40;
  VAR_19.buffer = VAR_18;
  VAR_19.buflen = 12;
  VAR_19.quiet = 1;
  VAR_19.data_direction = VAR_5;
  VAR_19.timeout = VAR_14;
  VAR_20 = FUNC_5(VAR_16, &VAR_19);
  if (VAR_20 != 0)
   break;
  if ((VAR_18[0] << 8) + VAR_18[1] < 0x0a) {
   FUNC_7(VAR_11, VAR_16, "Hmm, seems the drive "
      "doesn't support multisession CD's\n");
   VAR_21 = 1;
   break;
  }
  VAR_17 = VAR_18[11] + (VAR_18[10] << 8) +
      (VAR_18[9] << 16) + (VAR_18[8] << 24);
  if (VAR_18[6] <= 1) {

   VAR_17 = 0;
  }
  break;
 default:

  FUNC_7(VAR_12, VAR_16,
     "unknown vendor code (%i), not initialized ?\n",
     VAR_16->vendor);
  VAR_17 = 0;
  VAR_21 = 1;
  break;
 }
 VAR_16->ms_offset = VAR_17;
 VAR_16->xa_flag = 0;
 if (VAR_1 != FUNC_4(VAR_15) && 1 == FUNC_6(VAR_16))
  VAR_16->xa_flag = 1;

 if (2048 != VAR_16->device->sector_size) {
  FUNC_8(VAR_16, 2048);
 }
 if (VAR_21)
  VAR_15->mask |= VAR_0;






 FUNC_1(VAR_18);
 return VAR_20;
}
