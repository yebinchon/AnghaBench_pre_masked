
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet_command {int timeout; int data_direction; int * cmd; } ;
struct cdrom_tochdr {int cdth_trk1; int cdth_trk0; } ;
struct TYPE_3__ {int frame; int second; int minute; } ;
struct TYPE_4__ {TYPE_1__ msf; } ;
struct cdrom_tocentry {int cdte_track; TYPE_2__ cdte_addr; void* cdte_format; } ;
struct cdrom_ti {int cdti_trk1; int cdti_trk0; } ;
struct cdrom_device_info {int handle; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (int ,struct packet_command*) ;
 int FUNC_2 (struct cdrom_device_info*,struct cdrom_tocentry*) ;
 int FUNC_3 (struct cdrom_device_info*,struct cdrom_tochdr*) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_5, struct cdrom_ti *VAR_6)
{
 struct cdrom_tocentry VAR_7, VAR_8;
 struct cdrom_tochdr VAR_9;
 struct packet_command VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_3(VAR_5, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_11 = VAR_9.cdth_trk1 - VAR_9.cdth_trk0 + 1;

 if (VAR_6->cdti_trk1 == VAR_11)
  VAR_6->cdti_trk1 = VAR_0;
 else if (VAR_6->cdti_trk1 != VAR_0)
  VAR_6->cdti_trk1 ++;

 VAR_7.cdte_track = VAR_6->cdti_trk0;
 VAR_7.cdte_format = VAR_1;
 VAR_8.cdte_track = VAR_6->cdti_trk1;
 VAR_8.cdte_format = VAR_1;

 VAR_12 = FUNC_2(VAR_5, &VAR_7);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_12)
  return VAR_12;

 FUNC_0(&VAR_10, 0, sizeof(struct packet_command));
 VAR_10.cmd[0] = VAR_3;
 VAR_10.cmd[3] = VAR_7.cdte_addr.msf.minute;
 VAR_10.cmd[4] = VAR_7.cdte_addr.msf.second;
 VAR_10.cmd[5] = VAR_7.cdte_addr.msf.frame;
 VAR_10.cmd[6] = VAR_8.cdte_addr.msf.minute;
 VAR_10.cmd[7] = VAR_8.cdte_addr.msf.second;
 VAR_10.cmd[8] = VAR_8.cdte_addr.msf.frame;
 VAR_10.data_direction = VAR_2;
 VAR_10.timeout = VAR_4;
 return FUNC_1(VAR_5->handle, &VAR_10);
}
