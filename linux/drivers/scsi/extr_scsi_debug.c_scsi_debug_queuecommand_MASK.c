
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sdebug_dev_info {int stopped; int uas_bm; } ;
struct scsi_device {scalar_t__ lun; scalar_t__ hostdata; } ;
struct scsi_cmnd {size_t* cmnd; int cmd_len; int request; struct scsi_device* device; } ;
struct opcode_info_t {int num_attached; int (* pfp ) (struct scsi_cmnd*,struct sdebug_dev_info*) ;int flags; size_t opcode; int sa; int* len_mask; struct opcode_info_t* arrp; } ;
struct Scsi_Host {int dummy; } ;
typedef int b ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 struct sdebug_dev_info* FUNC_5 (struct scsi_device*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (size_t*) ;
 scalar_t__ FUNC_8 (int (*) (struct scsi_cmnd*,struct sdebug_dev_info*)) ;
 int FUNC_9 (struct scsi_cmnd*,struct sdebug_dev_info*) ;
 int FUNC_10 (struct scsi_cmnd*,int ,int ,int) ;
 int FUNC_11 (struct scsi_cmnd*,int ,int,int) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (int,int ,int) ;
 int VAR_23 ;
 size_t* VAR_24 ;
 struct opcode_info_t* VAR_25 ;
 int FUNC_14 (struct scsi_cmnd*,struct sdebug_dev_info*,int,int (*) (struct scsi_cmnd*,struct sdebug_dev_info*),int,int) ;
 scalar_t__ FUNC_15 (char*,int,char*,int) ;
 int FUNC_16 (struct scsi_cmnd*,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_17 (int ,struct scsi_device*,char*,int ,...) ;
 int FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct Scsi_Host *VAR_36,
       struct scsi_cmnd *VAR_37)
{
 u8 VAR_38;
 struct scsi_device *VAR_39 = VAR_37->device;
 const struct opcode_info_t *VAR_40;
 const struct opcode_info_t *VAR_41;
 struct sdebug_dev_info *VAR_42;
 u8 *VAR_43 = VAR_37->cmnd;
 int (*VAR_44)(struct scsi_cmnd *, struct sdebug_dev_info *);
 int (*VAR_45)(struct scsi_cmnd *, struct sdebug_dev_info *) = ((void*)0);
 int VAR_46, VAR_47;
 int VAR_48 = 0;
 u32 VAR_49;
 u16 VAR_50;
 u8 VAR_51 = VAR_43[0];
 bool VAR_52;

 FUNC_16(VAR_37, 0);
 if (VAR_33)
  FUNC_0(&VAR_26);
 if (FUNC_19(VAR_35 &&
       !(VAR_19 & VAR_32))) {
  char VAR_53[120];
  int VAR_54, VAR_55, VAR_56;

  VAR_55 = VAR_37->cmd_len;
  VAR_56 = (int)sizeof(VAR_53);
  if (VAR_55 > 32)
   FUNC_18(VAR_53, "too long, over 32 bytes");
  else {
   for (VAR_46 = 0, VAR_54 = 0; VAR_46 < VAR_55 && VAR_54 < VAR_56; ++VAR_46)
    VAR_54 += FUNC_15(VAR_53 + VAR_54, VAR_56 - VAR_54, "%02x ",
            (u32)VAR_43[VAR_46]);
  }
  FUNC_17(VAR_13, VAR_39, "%s: tag=%#x, cmd %s\n", VAR_23,
       FUNC_2(VAR_37->request), VAR_53);
 }
 if (FUNC_3(VAR_37))
  return VAR_16;
 VAR_52 = (VAR_39->lun == VAR_17);
 if (FUNC_19((VAR_39->lun >= VAR_30) && !VAR_52))
  goto err_out;

 VAR_38 = VAR_24[VAR_51];
 VAR_40 = &VAR_25[VAR_38];
 VAR_42 = (struct sdebug_dev_info *)VAR_39->hostdata;
 if (FUNC_19(!VAR_42)) {
  VAR_42 = FUNC_5(VAR_39);
  if (((void*)0) == VAR_42)
   goto err_out;
 }
 VAR_47 = VAR_40->num_attached;
 VAR_44 = VAR_40->pfp;
 if (VAR_47) {
  VAR_41 = VAR_40;
  if (VAR_1 & VAR_41->flags) {
   if (VAR_9 & VAR_40->flags)
    VAR_50 = 0x1f & VAR_43[1];
   else
    VAR_50 = FUNC_7(VAR_43 + 8);
   for (VAR_46 = 0; VAR_46 <= VAR_47; VAR_40 = VAR_41->arrp + VAR_46++) {
    if (VAR_51 == VAR_40->opcode && VAR_50 == VAR_40->sa)
     break;
   }
  } else {
   for (VAR_46 = 0; VAR_46 <= VAR_47; VAR_40 = VAR_41->arrp + VAR_46++) {
    if (VAR_51 == VAR_40->opcode)
     break;
   }
  }
  if (VAR_46 > VAR_47) {
   if (VAR_9 & VAR_41->flags)
    FUNC_11(VAR_37, VAR_20, 1, 4);
   else if (VAR_8 & VAR_41->flags)
    FUNC_11(VAR_37, VAR_20, 8, 7);
   else
    FUNC_12(VAR_37);
   goto check_cond;
  }
 }
 VAR_49 = VAR_40->flags;
 if (FUNC_19(VAR_4 & VAR_49)) {
  FUNC_12(VAR_37);
  goto check_cond;
 }
 if (FUNC_19(VAR_52 && !(VAR_7 & VAR_49))) {
  if (VAR_35)
   FUNC_17(VAR_13, VAR_39, "%s: Opcode 0x%x not%s\n",
        VAR_23, VAR_51, " supported for wlun");
  FUNC_12(VAR_37);
  goto check_cond;
 }
 if (FUNC_19(VAR_34)) {
  u8 VAR_57;
  int VAR_58;

  for (VAR_46 = 1; VAR_46 < VAR_40->len_mask[0] && VAR_46 < 16; ++VAR_46) {
   VAR_57 = ~VAR_40->len_mask[VAR_46] & VAR_43[VAR_46];
   if (VAR_57) {
    for (VAR_58 = 7; VAR_58 >= 0; --VAR_58, VAR_57 <<= 1) {
     if (0x80 & VAR_57)
      break;
    }
    FUNC_11(VAR_37, VAR_20, VAR_46, VAR_58);
    goto check_cond;
   }
  }
 }
 if (FUNC_19(!(VAR_10 & VAR_49) &&
       FUNC_6(VAR_42->uas_bm,
        VAR_18) != VAR_18)) {
  VAR_48 = FUNC_9(VAR_37, VAR_42);
  if (VAR_48)
   goto check_cond;
 }
 if (FUNC_19((VAR_6 & VAR_49) && FUNC_1(&VAR_42->stopped))) {
  FUNC_10(VAR_37, VAR_15, VAR_14, 0x2);
  if (VAR_35)
   FUNC_17(VAR_13, VAR_39, "%s reports: Not ready: "
        "%s\n", VAR_23, "initializing command "
        "required");
  VAR_48 = VAR_22;
  goto fini;
 }
 if (VAR_28 && (VAR_3 & VAR_49))
  goto fini;
 if (FUNC_19(VAR_27)) {
  if (FUNC_4(VAR_37))
   return 0;
 }
 if (FUNC_8(VAR_40->pfp))
  VAR_45 = VAR_40->pfp;
 else
  VAR_45 = VAR_44;

fini:
 if (VAR_2 & VAR_49)
  return FUNC_14(VAR_37, VAR_42, VAR_48, VAR_45, 0, 0);
 else if ((VAR_49 & VAR_5) && (VAR_29 > 0 ||
         VAR_31 > 10000)) {






  int VAR_59 = (VAR_29 < 2) ? 1 : VAR_29;
  int VAR_60 = (VAR_49 & VAR_11) ? 20 : 1;

  VAR_59 = FUNC_13(VAR_21 * VAR_59, VAR_12, VAR_60 * VAR_21);
  return FUNC_14(VAR_37, VAR_42, VAR_48, VAR_45, VAR_59, 0);
 } else
  return FUNC_14(VAR_37, VAR_42, VAR_48, VAR_45, VAR_29,
         VAR_31);
check_cond:
 return FUNC_14(VAR_37, VAR_42, VAR_22, ((void*)0), 0, 0);
err_out:
 return FUNC_14(VAR_37, ((void*)0), VAR_0 << 16, ((void*)0), 0, 0);
}
