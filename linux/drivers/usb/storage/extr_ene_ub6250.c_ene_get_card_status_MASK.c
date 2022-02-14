
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {scalar_t__ IsMMC; scalar_t__ HiCapacity; } ;
struct ene_ub6250_info {int SD_READ_BL_LEN; int HC_C_SIZE; int SD_C_SIZE; int SD_C_SIZE_MULT; int SD_Block_Mult; TYPE_1__ SD_Status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct us_data *VAR_2, u8 *VAR_3)
{
 u16 VAR_4;
 u32 VAR_5;
 struct ene_ub6250_info *VAR_6 = (struct ene_ub6250_info *) VAR_2->extra;


 VAR_5 = *(u32 *)&VAR_3[0x18];
 VAR_6->SD_READ_BL_LEN = (u8)((VAR_5 >> 8) & 0x0f);

 VAR_4 = (u16) VAR_5;
 VAR_5 = *(u32 *)(&VAR_3[0x14]);
 if (VAR_6->SD_Status.HiCapacity && !VAR_6->SD_Status.IsMMC)
  VAR_6->HC_C_SIZE = (VAR_5 >> 8) & 0x3fffff;

 VAR_6->SD_C_SIZE = ((VAR_4 & 0x03) << 10) | (u16)(VAR_5 >> 22);
 VAR_6->SD_C_SIZE_MULT = (u8)(VAR_5 >> 7) & 0x07;
 if (VAR_6->SD_Status.HiCapacity && VAR_6->SD_Status.IsMMC)
  VAR_6->HC_C_SIZE = *(u32 *)(&VAR_3[0x100]);

 if (VAR_6->SD_READ_BL_LEN > VAR_0) {
  VAR_6->SD_Block_Mult = 1 << (VAR_6->SD_READ_BL_LEN-VAR_0);
  VAR_6->SD_READ_BL_LEN = VAR_0;
 } else {
  VAR_6->SD_Block_Mult = 1;
 }

 return VAR_1;
}
