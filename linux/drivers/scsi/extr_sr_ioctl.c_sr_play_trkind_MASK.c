
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int dummy; } ;
struct packet_command {int data_direction; int * cmd; int timeout; } ;
struct cdrom_ti {int cdti_ind1; int cdti_trk1; int cdti_ind0; int cdti_trk0; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (struct scsi_cd*,struct packet_command*) ;
 int FUNC_2 (struct cdrom_device_info*,struct cdrom_ti*) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_4,
  struct cdrom_ti *VAR_5)

{
 struct scsi_cd *VAR_6 = VAR_4->handle;
 struct packet_command VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, 0, sizeof(struct packet_command));
 VAR_7.timeout = VAR_3;
 VAR_7.cmd[0] = VAR_2;
 VAR_7.cmd[4] = VAR_5->cdti_trk0;
 VAR_7.cmd[5] = VAR_5->cdti_ind0;
 VAR_7.cmd[7] = VAR_5->cdti_trk1;
 VAR_7.cmd[8] = VAR_5->cdti_ind1;
 VAR_7.data_direction = VAR_0;

 VAR_8 = FUNC_1(VAR_6, &VAR_7);
 if (VAR_8 == -VAR_1)
  VAR_8 = FUNC_2(VAR_4, VAR_5);

 return VAR_8;
}
