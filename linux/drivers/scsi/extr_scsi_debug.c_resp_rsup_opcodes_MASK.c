
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int* cmnd; } ;
struct opcode_info_t {int num_attached; int flags; int opcode; int sa; int* len_mask; struct opcode_info_t* arrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct scsi_cmnd*,int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (struct scsi_cmnd*,int ,int ,int ) ;
 int FUNC_6 (struct scsi_cmnd*,int ,int,int) ;
 int* VAR_8 ;
 struct opcode_info_t* VAR_9 ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int,int*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_10,
        struct sdebug_dev_info *VAR_11)
{
 bool VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 const struct opcode_info_t *VAR_28;
 const struct opcode_info_t *VAR_29;
 u8 *VAR_30;
 u8 *VAR_31 = VAR_10->cmnd;

 VAR_12 = !!(VAR_31[2] & 0x80);
 VAR_13 = VAR_31[2] & 0x7;
 VAR_14 = VAR_31[3];
 VAR_17 = FUNC_1(VAR_31 + 4);
 VAR_19 = FUNC_2(VAR_31 + 6);
 if (VAR_19 < 4 || VAR_19 > 0xffff) {
  FUNC_6(VAR_10, VAR_6, 6, -1);
  return VAR_7;
 }
 if (VAR_19 > 8192)
  VAR_20 = 8192;
 else
  VAR_20 = VAR_19;
 VAR_30 = FUNC_4((VAR_20 < 256) ? 320 : VAR_20 + 64, VAR_2);
 if (((void*)0) == VAR_30) {
  FUNC_5(VAR_10, VAR_3, VAR_4,
    VAR_5);
  return VAR_7;
 }
 switch (VAR_13) {
 case 0:

  for (VAR_25 = 0, VAR_28 = VAR_9;
       VAR_28->num_attached != 0xff; ++VAR_28) {
   if (VAR_1 & VAR_28->flags)
    continue;
   VAR_25 += (VAR_28->num_attached + 1);
  }
  VAR_26 = VAR_12 ? 20 : 8;
  FUNC_8(VAR_25 * VAR_26, VAR_30);
  for (VAR_22 = 4, VAR_28 = VAR_9;
       VAR_28->num_attached != 0xff && VAR_22 < VAR_20; ++VAR_28) {
   if (VAR_1 & VAR_28->flags)
    continue;
   VAR_27 = VAR_28->num_attached;
   VAR_30[VAR_22] = VAR_28->opcode;
   FUNC_7(VAR_28->sa, VAR_30 + VAR_22 + 2);
   if (VAR_12)
    VAR_30[VAR_22 + 5] |= 0x2;
   if (VAR_0 & VAR_28->flags)
    VAR_30[VAR_22 + 5] |= 0x1;
   FUNC_7(VAR_28->len_mask[0], VAR_30 + VAR_22 + 6);
   if (VAR_12)
    FUNC_7(0xa, VAR_30 + VAR_22 + 8);
   VAR_29 = VAR_28;
   for (VAR_21 = 0, VAR_28 = VAR_28->arrp; VAR_21 < VAR_27; ++VAR_21, ++VAR_28) {
    if (VAR_1 & VAR_28->flags)
     continue;
    VAR_22 += VAR_26;
    VAR_30[VAR_22] = VAR_28->opcode;
    FUNC_7(VAR_28->sa, VAR_30 + VAR_22 + 2);
    if (VAR_12)
     VAR_30[VAR_22 + 5] |= 0x2;
    if (VAR_0 & VAR_28->flags)
     VAR_30[VAR_22 + 5] |= 0x1;
    FUNC_7(VAR_28->len_mask[0],
         VAR_30 + VAR_22 + 6);
    if (VAR_12)
     FUNC_7(0xa,
          VAR_30 + VAR_22 + 8);
   }
   VAR_28 = VAR_29;
   VAR_22 += VAR_26;
  }
  break;
 case 1:
 case 2:
 case 3:
  VAR_15 = VAR_8[VAR_14];
  VAR_28 = &VAR_9[VAR_15];
  if (VAR_1 & VAR_28->flags) {
   VAR_16 = 1;
   VAR_22 = 4;
  } else {
   if (1 == VAR_13) {
    if (VAR_0 & VAR_28->flags) {
     FUNC_6(VAR_10, VAR_6,
            2, 2);
     FUNC_3(VAR_30);
     return VAR_7;
    }
    VAR_17 = 0;
   } else if (2 == VAR_13 &&
       0 == (VAR_0 & VAR_28->flags)) {
    FUNC_6(VAR_10, VAR_6, 4, -1);
    FUNC_3(VAR_30);
    return VAR_7;
   }
   if (0 == (VAR_0 & VAR_28->flags) &&
       VAR_14 == VAR_28->opcode)
    VAR_16 = 3;
   else if (0 == (VAR_0 & VAR_28->flags)) {
    VAR_27 = VAR_28->num_attached;
    for (VAR_21 = 0, VAR_28 = VAR_28->arrp; VAR_21 < VAR_27;
         ++VAR_21, ++VAR_28) {
     if (VAR_14 == VAR_28->opcode)
      break;
    }
    VAR_16 = (VAR_21 >= VAR_27) ? 1 : 3;
   } else if (VAR_17 != VAR_28->sa) {
    VAR_27 = VAR_28->num_attached;
    for (VAR_21 = 0, VAR_28 = VAR_28->arrp; VAR_21 < VAR_27;
         ++VAR_21, ++VAR_28) {
     if (VAR_17 == VAR_28->sa)
      break;
    }
    VAR_16 = (VAR_21 >= VAR_27) ? 1 : 3;
   } else
    VAR_16 = 3;
   if (3 == VAR_16) {
    VAR_18 = VAR_28->len_mask[0];
    FUNC_7(VAR_18, VAR_30 + 2);
    VAR_30[4] = VAR_28->opcode;
    for (VAR_21 = 1; VAR_21 < VAR_18; ++VAR_21)
     VAR_30[4 + VAR_21] = (VAR_21 < 16) ?
       VAR_28->len_mask[VAR_21] : 0xff;
    VAR_22 = 4 + VAR_18;
   } else
    VAR_22 = 4;
  }
  VAR_30[1] = (VAR_12 ? 0x80 : 0) | VAR_16;
  if (VAR_12) {
   FUNC_7(0xa, VAR_30 + VAR_22);
   VAR_22 += 12;
  }
  break;
 default:
  FUNC_6(VAR_10, VAR_6, 2, 2);
  FUNC_3(VAR_30);
  return VAR_7;
 }
 VAR_22 = (VAR_22 < VAR_20) ? VAR_22 : VAR_20;
 VAR_23 = (VAR_22 < VAR_19) ? VAR_22 : VAR_19;
 VAR_24 = FUNC_0(VAR_10, VAR_30, VAR_23);
 FUNC_3(VAR_30);
 return VAR_24;
}
