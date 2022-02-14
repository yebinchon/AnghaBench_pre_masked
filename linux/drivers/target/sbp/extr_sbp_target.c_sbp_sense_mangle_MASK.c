
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct se_cmd {int scsi_sense_length; int scsi_status; int scsi_asc; int scsi_ascq; } ;
struct TYPE_2__ {int* data; int status; } ;
struct sbp_target_request {int* sense_buf; TYPE_1__ status; struct se_cmd se_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(struct sbp_target_request *VAR_3)
{
 struct se_cmd *VAR_4 = &VAR_3->se_cmd;
 u8 *VAR_5 = VAR_3->sense_buf;
 u8 *VAR_6 = VAR_3->status.data;

 FUNC_4(VAR_4->scsi_sense_length < 18);

 switch (VAR_5[0] & 0x7f) {
 case 0x70:
  VAR_6[0] = 0 << 6;
  break;
 case 0x71:
  VAR_6[0] = 1 << 6;
  break;
 case 0x72:
 case 0x73:
 default:




  FUNC_6("sbp_send_sense: unknown sense format: 0x%x\n",
   VAR_5[0]);
  VAR_3->status.status |= FUNC_5(
   FUNC_2(VAR_2) |
   FUNC_0(0) |
   FUNC_1(1) |
   FUNC_3(VAR_1));
  return;
 }

 VAR_6[0] |= VAR_4->scsi_status & 0x3f;
 VAR_6[1] =
  (VAR_5[0] & 0x80) |
  ((VAR_5[2] & 0xe0) >> 1) |
  (VAR_5[2] & 0x0f);
 VAR_6[2] = VAR_4->scsi_asc;
 VAR_6[3] = VAR_4->scsi_ascq;


 VAR_6[4] = VAR_5[3];
 VAR_6[5] = VAR_5[4];
 VAR_6[6] = VAR_5[5];
 VAR_6[7] = VAR_5[6];


 VAR_6[8] = VAR_5[8];
 VAR_6[9] = VAR_5[9];
 VAR_6[10] = VAR_5[10];
 VAR_6[11] = VAR_5[11];


 VAR_6[12] = VAR_5[14];


 VAR_6[13] = VAR_5[15];
 VAR_6[14] = VAR_5[16];
 VAR_6[15] = VAR_5[17];

 VAR_3->status.status |= FUNC_5(
  FUNC_2(VAR_2) |
  FUNC_0(0) |
  FUNC_1(5) |
  FUNC_3(VAR_0));
}
