
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int* cmd; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
typedef int Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (int *,struct packet_command*) ;
 int FUNC_2 (int ,int *,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(Scsi_CD *VAR_4, unsigned char *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct packet_command VAR_9;






 FUNC_0(&VAR_9, 0, sizeof(struct packet_command));
 VAR_9.cmd[0] = VAR_1;
 VAR_9.cmd[1] = ((VAR_7 & 7) << 2);
 VAR_9.cmd[2] = (unsigned char) (VAR_6 >> 24) & 0xff;
 VAR_9.cmd[3] = (unsigned char) (VAR_6 >> 16) & 0xff;
 VAR_9.cmd[4] = (unsigned char) (VAR_6 >> 8) & 0xff;
 VAR_9.cmd[5] = (unsigned char) VAR_6 & 0xff;
 VAR_9.cmd[8] = 1;
 switch (VAR_8) {
 case 2336:
  VAR_9.cmd[9] = 0x58;
  break;
 case 2340:
  VAR_9.cmd[9] = 0x78;
  break;
 case 2352:
  VAR_9.cmd[9] = 0xf8;
  break;
 default:
  VAR_9.cmd[9] = 0x10;
  break;
 }
 VAR_9.buffer = VAR_5;
 VAR_9.buflen = VAR_8;
 VAR_9.data_direction = VAR_0;
 VAR_9.timeout = VAR_2;
 return FUNC_1(VAR_4, &VAR_9);
}
