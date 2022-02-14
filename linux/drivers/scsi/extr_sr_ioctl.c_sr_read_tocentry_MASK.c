
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cd {int dummy; } ;
struct packet_command {int* cmd; unsigned char* buffer; int buflen; int data_direction; int timeout; } ;
struct TYPE_3__ {unsigned char minute; unsigned char second; unsigned char frame; } ;
struct TYPE_4__ {unsigned char lba; TYPE_1__ msf; } ;
struct cdrom_tocentry {scalar_t__ cdte_format; int cdte_track; unsigned char cdte_ctrl; unsigned char cdte_adr; int cdte_datamode; TYPE_2__ cdte_addr; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_cd*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (struct packet_command*,int ,int) ;
 int FUNC_4 (struct scsi_cd*,struct packet_command*) ;

__attribute__((used)) static int FUNC_5(struct cdrom_device_info *VAR_6,
  struct cdrom_tocentry *VAR_7)
{
 struct scsi_cd *VAR_8 = VAR_6->handle;
 struct packet_command VAR_9;
 int VAR_10;
 unsigned char *VAR_11;

 VAR_11 = FUNC_2(32, VAR_3 | FUNC_0(VAR_8));
 if (!VAR_11)
  return -VAR_2;

 FUNC_3(&VAR_9, 0, sizeof(struct packet_command));
 VAR_9.timeout = VAR_5;
 VAR_9.cmd[0] = VAR_4;
 VAR_9.cmd[1] |= (VAR_7->cdte_format == VAR_0) ? 0x02 : 0;
 VAR_9.cmd[6] = VAR_7->cdte_track;
 VAR_9.cmd[8] = 12;
 VAR_9.buffer = VAR_11;
 VAR_9.buflen = 12;
 VAR_9.data_direction = VAR_1;

 VAR_10 = FUNC_4(VAR_8, &VAR_9);

 VAR_7->cdte_ctrl = VAR_11[5] & 0xf;
 VAR_7->cdte_adr = VAR_11[5] >> 4;
 VAR_7->cdte_datamode = (VAR_7->cdte_ctrl & 0x04) ? 1 : 0;
 if (VAR_7->cdte_format == VAR_0) {
  VAR_7->cdte_addr.msf.minute = VAR_11[9];
  VAR_7->cdte_addr.msf.second = VAR_11[10];
  VAR_7->cdte_addr.msf.frame = VAR_11[11];
 } else
  VAR_7->cdte_addr.lba = (((((VAR_11[8] << 8) + VAR_11[9]) << 8)
   + VAR_11[10]) << 8) + VAR_11[11];

 FUNC_1(VAR_11);
 return VAR_10;
}
