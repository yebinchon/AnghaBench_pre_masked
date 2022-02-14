
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ses_component {int addr; } ;
struct enclosure_component {int slot; struct ses_component* scratch; } ;
typedef enum scsi_protocol { ____Placeholder_scsi_protocol } scsi_protocol ;





__attribute__((used)) static void FUNC_0(struct enclosure_component *VAR_0,
       unsigned char *VAR_1)
{
 int VAR_2 = VAR_1[0] & 0x10;
 int VAR_3 = VAR_1[0] & 0x80;
 enum scsi_protocol VAR_4 = VAR_1[0] & 0x0f;
 u64 VAR_5 = 0;
 int VAR_6 = -1;
 struct ses_component *VAR_7 = VAR_0->scratch;
 unsigned char *VAR_8;

 if (VAR_3)
  return;

 switch (VAR_4) {
 case 129:
  if (VAR_2) {
   VAR_8 = VAR_1 + 4;
   VAR_6 = VAR_8[3];
  }
  break;
 case 128:
  if (VAR_2) {
   VAR_8 = VAR_1 + 4;
   VAR_6 = VAR_8[3];
   VAR_8 = VAR_1 + 8;
  } else
   VAR_8 = VAR_1 + 4;

  VAR_5 = (u64)VAR_8[12] << 56 |
   (u64)VAR_8[13] << 48 |
   (u64)VAR_8[14] << 40 |
   (u64)VAR_8[15] << 32 |
   (u64)VAR_8[16] << 24 |
   (u64)VAR_8[17] << 16 |
   (u64)VAR_8[18] << 8 |
   (u64)VAR_8[19];
  break;
 default:

  break;
 }
 VAR_0->slot = VAR_6;
 VAR_7->addr = VAR_5;
}
