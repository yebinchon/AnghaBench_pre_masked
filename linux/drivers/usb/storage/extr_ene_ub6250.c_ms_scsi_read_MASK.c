
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct us_data {scalar_t__ extra; scalar_t__ iobuf; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;
struct TYPE_4__ {int PagesPerBlock; } ;
struct TYPE_3__ {scalar_t__ IsMSPro; } ;
struct ene_ub6250_info {int bl_num; TYPE_2__ MS_Lib; TYPE_1__ MS_Status; } ;
struct bulk_cb_wrap {int DataTransferLength; int* CDB; void* Flags; void* Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ) ;
 int FUNC_2 (struct us_data*,int ,void*,int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct bulk_cb_wrap*,int ,int) ;
 int FUNC_6 (struct ene_ub6250_info*,int) ;
 int FUNC_7 (char*,...) ;
 void* FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct us_data*,char*) ;
 int FUNC_10 (void*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct us_data *VAR_9, struct scsi_cmnd *VAR_10)
{
 int VAR_11;
 unsigned char *VAR_12 = VAR_10->cmnd;
 struct bulk_cb_wrap *VAR_13 = (struct bulk_cb_wrap *) VAR_9->iobuf;
 struct ene_ub6250_info *VAR_14 = (struct ene_ub6250_info *) VAR_9->extra;

 u32 VAR_15 = ((VAR_12[2] << 24) & 0xff000000) | ((VAR_12[3] << 16) & 0x00ff0000) |
  ((VAR_12[4] << 8) & 0x0000ff00) | ((VAR_12[5] << 0) & 0x000000ff);
 u16 VAR_16 = ((VAR_12[7] << 8) & 0xff00) | ((VAR_12[8] << 0) & 0x00ff);
 u32 VAR_17 = VAR_16 * 0x200;

 if (VAR_15 > VAR_14->bl_num)
  return VAR_5;

 if (VAR_14->MS_Status.IsMSPro) {
  VAR_11 = FUNC_1(VAR_9, VAR_2);
  if (VAR_11 != VAR_6) {
   FUNC_9(VAR_9, "Load MPS RW pattern Fail !!\n");
   return VAR_5;
  }


  FUNC_5(VAR_13, 0, sizeof(struct bulk_cb_wrap));
  VAR_13->Signature = FUNC_0(VAR_7);
  VAR_13->DataTransferLength = VAR_17;
  VAR_13->Flags = VAR_8;
  VAR_13->CDB[0] = 0xF1;
  VAR_13->CDB[1] = 0x02;
  VAR_13->CDB[5] = (unsigned char)(VAR_15);
  VAR_13->CDB[4] = (unsigned char)(VAR_15>>8);
  VAR_13->CDB[3] = (unsigned char)(VAR_15>>16);
  VAR_13->CDB[2] = (unsigned char)(VAR_15>>24);

  VAR_11 = FUNC_2(VAR_9, VAR_0, FUNC_8(VAR_10), 1);
 } else {
  void *VAR_18;
  int VAR_19 = 0;
  u16 VAR_20, VAR_21;
  u8 VAR_22;
  u16 VAR_23;
  u32 VAR_24;

  VAR_18 = FUNC_4(VAR_17, VAR_1);
  if (VAR_18 == ((void*)0))
   return VAR_5;

  VAR_11 = FUNC_1(VAR_9, VAR_4);
  if (VAR_11 != VAR_6) {
   FUNC_7("Load MS RW pattern Fail !!\n");
   VAR_11 = VAR_5;
   goto exit;
  }

  VAR_21 = (u16)(VAR_15 / VAR_14->MS_Lib.PagesPerBlock);
  VAR_22 = (u8)(VAR_15 % VAR_14->MS_Lib.PagesPerBlock);

  while (1) {
   if (VAR_16 > (VAR_14->MS_Lib.PagesPerBlock-VAR_22))
    VAR_23 = VAR_14->MS_Lib.PagesPerBlock-VAR_22;
   else
    VAR_23 = VAR_16;

   VAR_20 = FUNC_6(VAR_14, VAR_21);
   VAR_24 = VAR_20 * 0x20 + VAR_22;


   FUNC_5(VAR_13, 0, sizeof(struct bulk_cb_wrap));
   VAR_13->Signature = FUNC_0(VAR_7);
   VAR_13->DataTransferLength = 0x200 * VAR_23;
   VAR_13->Flags = VAR_8;
   VAR_13->CDB[0] = 0xF1;
   VAR_13->CDB[1] = 0x02;
   VAR_13->CDB[5] = (unsigned char)(VAR_24);
   VAR_13->CDB[4] = (unsigned char)(VAR_24>>8);
   VAR_13->CDB[3] = (unsigned char)(VAR_24>>16);
   VAR_13->CDB[2] = (unsigned char)(VAR_24>>24);

   VAR_11 = FUNC_2(VAR_9, VAR_0, VAR_18+VAR_19, 0);
   if (VAR_11 != VAR_6) {
    FUNC_7("MS_SCSI_Read --- result = %x\n", VAR_11);
    VAR_11 = VAR_5;
    goto exit;
   }

   VAR_16 -= VAR_23;
   if (VAR_16 <= 0)
    break;
   VAR_21++;
   VAR_22 = 0;
   VAR_19 += VAR_3*VAR_23;
  }
  FUNC_10(VAR_18, VAR_17, VAR_10);
exit:
  FUNC_3(VAR_18);
 }
 return VAR_11;
}
