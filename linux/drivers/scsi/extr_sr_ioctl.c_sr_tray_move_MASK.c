
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
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (int *,struct packet_command*) ;

int FUNC_2(struct cdrom_device_info *VAR_3, int VAR_4)
{
 Scsi_CD *VAR_5 = VAR_3->handle;
 struct packet_command VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(struct packet_command));
 VAR_6.cmd[0] = VAR_1;
 VAR_6.cmd[4] = (VAR_4 == 0) ? 0x03 : 0x02 ;
 VAR_6.data_direction = VAR_0;
 VAR_6.timeout = VAR_2;
 return FUNC_1(VAR_5, &VAR_6);
}
