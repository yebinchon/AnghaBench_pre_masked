
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int* cmd; int timeout; int data_direction; } ;
struct cdrom_device_info {int * handle; } ;
typedef int Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 scalar_t__ FUNC_1 (int *,struct packet_command*) ;

int FUNC_2(struct cdrom_device_info *VAR_4, int VAR_5)
{
 Scsi_CD *VAR_6 = VAR_4->handle;
 struct packet_command VAR_7;

 if (VAR_5 == 0)
  VAR_5 = 0xffff;
 else
  VAR_5 *= 177;

 FUNC_0(&VAR_7, 0, sizeof(struct packet_command));
 VAR_7.cmd[0] = VAR_2;
 VAR_7.cmd[2] = (VAR_5 >> 8) & 0xff;
 VAR_7.cmd[3] = VAR_5 & 0xff;
 VAR_7.data_direction = VAR_0;
 VAR_7.timeout = VAR_3;

 if (FUNC_1(VAR_6, &VAR_7))
  return -VAR_1;
 return 0;
}
