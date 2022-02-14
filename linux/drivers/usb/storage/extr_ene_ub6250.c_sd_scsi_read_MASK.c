
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct us_data {scalar_t__ extra; scalar_t__ iobuf; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;
struct TYPE_2__ {scalar_t__ HiCapacity; } ;
struct ene_ub6250_info {int bl_num; TYPE_1__ SD_Status; } ;
struct bulk_cb_wrap {int DataTransferLength; int* CDB; int Flags; int Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ) ;
 int FUNC_2 (struct us_data*,int ,int ,int) ;
 int FUNC_3 (struct bulk_cb_wrap*,int ,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_6, struct scsi_cmnd *VAR_7)
{
 int VAR_8;
 unsigned char *VAR_9 = VAR_7->cmnd;
 struct bulk_cb_wrap *VAR_10 = (struct bulk_cb_wrap *) VAR_6->iobuf;
 struct ene_ub6250_info *VAR_11 = (struct ene_ub6250_info *) VAR_6->extra;

 u32 VAR_12 = ((VAR_9[2] << 24) & 0xff000000) | ((VAR_9[3] << 16) & 0x00ff0000) |
   ((VAR_9[4] << 8) & 0x0000ff00) | ((VAR_9[5] << 0) & 0x000000ff);
 u16 VAR_13 = ((VAR_9[7] << 8) & 0xff00) | ((VAR_9[8] << 0) & 0x00ff);
 u32 VAR_14 = VAR_12 * 0x200;
 u32 VAR_15 = VAR_13 * 0x200;

 if (VAR_12 > VAR_11->bl_num)
  return VAR_2;

 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (VAR_8 != VAR_3) {
  FUNC_5(VAR_6, "Load SD RW pattern Fail !!\n");
  return VAR_2;
 }

 if (VAR_11->SD_Status.HiCapacity)
  VAR_14 = VAR_12;


 FUNC_3(VAR_10, 0, sizeof(struct bulk_cb_wrap));
 VAR_10->Signature = FUNC_0(VAR_4);
 VAR_10->DataTransferLength = VAR_15;
 VAR_10->Flags = VAR_5;
 VAR_10->CDB[0] = 0xF1;
 VAR_10->CDB[5] = (unsigned char)(VAR_14);
 VAR_10->CDB[4] = (unsigned char)(VAR_14>>8);
 VAR_10->CDB[3] = (unsigned char)(VAR_14>>16);
 VAR_10->CDB[2] = (unsigned char)(VAR_14>>24);

 VAR_8 = FUNC_2(VAR_6, VAR_0, FUNC_4(VAR_7), 1);
 return VAR_8;
}
