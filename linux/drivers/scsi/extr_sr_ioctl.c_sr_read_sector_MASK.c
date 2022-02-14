
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct packet_command {unsigned char* cmd; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
struct TYPE_9__ {TYPE_1__* device; scalar_t__ readcd_known; } ;
struct TYPE_8__ {int sector_size; } ;
typedef TYPE_2__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (TYPE_2__*,struct packet_command*) ;
 int FUNC_2 (int ,TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int,int ,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(Scsi_CD *VAR_5, int VAR_6, int VAR_7, unsigned char *VAR_8)
{
 struct packet_command VAR_9;
 int VAR_10;


 if (VAR_5->readcd_known) {
  VAR_10 = FUNC_3(VAR_5, VAR_8, VAR_6, 0, VAR_7);
  if (-VAR_1 != VAR_10)
   return VAR_10;
  VAR_5->readcd_known = 0;
  FUNC_2(VAR_4, VAR_5,
     "CDROM does'nt support READ CD (0xbe) command\n");

 }

 if (VAR_7 != VAR_5->device->sector_size) {
  if (0 != (VAR_10 = FUNC_4(VAR_5, VAR_7)))
   return VAR_10;
 }





 FUNC_0(&VAR_9, 0, sizeof(struct packet_command));
 VAR_9.cmd[0] = VAR_2;
 VAR_9.cmd[2] = (unsigned char) (VAR_6 >> 24) & 0xff;
 VAR_9.cmd[3] = (unsigned char) (VAR_6 >> 16) & 0xff;
 VAR_9.cmd[4] = (unsigned char) (VAR_6 >> 8) & 0xff;
 VAR_9.cmd[5] = (unsigned char) VAR_6 & 0xff;
 VAR_9.cmd[8] = 1;
 VAR_9.buffer = VAR_8;
 VAR_9.buflen = VAR_7;
 VAR_9.data_direction = VAR_0;
 VAR_9.timeout = VAR_3;
 VAR_10 = FUNC_1(VAR_5, &VAR_9);

 return VAR_10;
}
