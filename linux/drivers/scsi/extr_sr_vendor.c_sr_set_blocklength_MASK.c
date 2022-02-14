
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct packet_command {int* cmd; int block_desc_length; int density; int block_length_med; int block_length_lo; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
struct ccs_modesel_head {int* cmd; int block_desc_length; int density; int block_length_med; int block_length_lo; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
struct TYPE_7__ {scalar_t__ vendor; TYPE_1__* device; } ;
struct TYPE_6__ {int sector_size; } ;
typedef TYPE_2__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (struct packet_command*,int ,int) ;
 int FUNC_3 (TYPE_2__*,struct packet_command*) ;
 int FUNC_4 (int ,TYPE_2__*,char*,int,...) ;

int FUNC_5(Scsi_CD *VAR_8, int VAR_9)
{
 unsigned char *VAR_10;
 struct packet_command VAR_11;
 struct ccs_modesel_head *VAR_12;
 int VAR_13, VAR_14 = 0;






 VAR_10 = FUNC_1(512, VAR_3 | VAR_2);
 if (!VAR_10)
  return -VAR_1;




 FUNC_2(&VAR_11, 0, sizeof(struct packet_command));
 VAR_11.cmd[0] = VAR_5;
 VAR_11.cmd[1] = (1 << 4);
 VAR_11.cmd[4] = 12;
 VAR_12 = (struct ccs_modesel_head *) VAR_10;
 FUNC_2(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->block_desc_length = 0x08;
 VAR_12->density = VAR_14;
 VAR_12->block_length_med = (VAR_9 >> 8) & 0xff;
 VAR_12->block_length_lo = VAR_9 & 0xff;
 VAR_11.buffer = VAR_10;
 VAR_11.buflen = sizeof(*VAR_12);
 VAR_11.data_direction = VAR_0;
 VAR_11.timeout = VAR_6;
 if (0 == (VAR_13 = FUNC_3(VAR_8, &VAR_11))) {
  VAR_8->device->sector_size = VAR_9;
 }






 FUNC_0(VAR_10);
 return VAR_13;
}
