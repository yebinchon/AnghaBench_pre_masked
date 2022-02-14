
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {scalar_t__ IsMMC; scalar_t__ HiCapacity; } ;
struct ene_ub6250_info {int HC_C_SIZE; int SD_READ_BL_LEN; int SD_Block_Mult; int SD_C_SIZE; int SD_C_SIZE_MULT; int bl_num; TYPE_1__ SD_Status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,struct scsi_cmnd*,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_1 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_2, struct scsi_cmnd *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 unsigned int VAR_6 = 0;
 unsigned char VAR_7[8];
 struct scatterlist *VAR_8 = ((void*)0);
 struct ene_ub6250_info *VAR_9 = (struct ene_ub6250_info *) VAR_2->extra;

 FUNC_1(VAR_2, "sd_scsi_read_capacity\n");
 if (VAR_9->SD_Status.HiCapacity) {
  VAR_5 = 0x200;
  if (VAR_9->SD_Status.IsMMC)
   VAR_4 = VAR_9->HC_C_SIZE-1;
  else
   VAR_4 = (VAR_9->HC_C_SIZE + 1) * 1024 - 1;
 } else {
  VAR_5 = 1 << (VAR_9->SD_READ_BL_LEN);
  VAR_4 = VAR_9->SD_Block_Mult * (VAR_9->SD_C_SIZE + 1)
    * (1 << (VAR_9->SD_C_SIZE_MULT + 2)) - 1;
 }
 VAR_9->bl_num = VAR_4;
 FUNC_1(VAR_2, "bl_len = %x\n", VAR_5);
 FUNC_1(VAR_2, "bl_num = %x\n", VAR_4);


 VAR_7[0] = (VAR_4 >> 24) & 0xff;
 VAR_7[1] = (VAR_4 >> 16) & 0xff;
 VAR_7[2] = (VAR_4 >> 8) & 0xff;
 VAR_7[3] = (VAR_4 >> 0) & 0xff;
 VAR_7[4] = (VAR_5 >> 24) & 0xff;
 VAR_7[5] = (VAR_5 >> 16) & 0xff;
 VAR_7[6] = (VAR_5 >> 8) & 0xff;
 VAR_7[7] = (VAR_5 >> 0) & 0xff;

 FUNC_0(VAR_7, 8, VAR_3, &VAR_8, &VAR_6, VAR_0);

 return VAR_1;
}
