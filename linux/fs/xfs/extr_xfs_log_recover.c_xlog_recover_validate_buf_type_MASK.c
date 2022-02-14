
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_lsn_t ;
typedef int xfs_buf_log_format_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct xfs_mount {int m_sb; } ;
struct xfs_da_blkinfo {int magic; } ;
struct TYPE_2__ {scalar_t__ li_lsn; } ;
struct xfs_buf_log_item {TYPE_1__ bli_item; } ;
struct xfs_buf {scalar_t__ b_iodone; struct xfs_buf_log_item* b_log_item; int * b_ops; struct xfs_da_blkinfo* b_addr; } ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;




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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;






 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (struct xfs_mount*,char*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (struct xfs_buf*,struct xfs_mount*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_6 (int *) ;
 int VAR_45 ;
 int FUNC_7 (struct xfs_mount*,char*,...) ;
 scalar_t__ VAR_46 ;

__attribute__((used)) static void
FUNC_8(
 struct xfs_mount *VAR_47,
 struct xfs_buf *VAR_48,
 xfs_buf_log_format_t *VAR_49,
 xfs_lsn_t VAR_50)
{
 struct xfs_da_blkinfo *VAR_51 = VAR_48->b_addr;
 uint32_t VAR_52;
 uint16_t VAR_53;
 uint16_t VAR_54;
 char *VAR_55 = ((void*)0);
 if (!FUNC_6(&VAR_47->m_sb))
  return;

 VAR_52 = FUNC_2(*(__be32 *)VAR_48->b_addr);
 VAR_53 = FUNC_1(*(__be16*)VAR_48->b_addr);
 VAR_54 = FUNC_1(VAR_51->magic);
 switch (FUNC_4(VAR_49)) {
 case 150:
  switch (VAR_52) {
  case 159:
  case 158:
   VAR_48->b_ops = &VAR_29;
   break;
  case 157:
  case 156:
   VAR_48->b_ops = &VAR_30;
   break;
  case 131:
  case 130:
   VAR_48->b_ops = &VAR_39;
   break;
  case 133:
  case 132:
   VAR_48->b_ops = &VAR_38;
   break;
  case 135:
  case 134:
   VAR_48->b_ops = &VAR_28;
   break;
  case 128:
   VAR_48->b_ops = &VAR_42;
   break;
  case 129:
   VAR_48->b_ops = &VAR_41;
   break;
  default:
   VAR_55 = "Bad btree block magic!";
   break;
  }
  break;
 case 154:
  if (VAR_52 != VAR_2) {
   VAR_55 = "Bad AGF block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_23;
  break;
 case 155:
  if (VAR_52 != VAR_1) {
   VAR_55 = "Bad AGFL block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_24;
  break;
 case 153:
  if (VAR_52 != VAR_3) {
   VAR_55 = "Bad AGI block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_25;
  break;
 case 136:
 case 141:
 case 142:







  FUNC_3(VAR_47,
 "Trying to recover dquots without QUOTA support built in!");
  FUNC_0(0);

  break;
 case 148:
  if (VAR_53 != VAR_9) {
   VAR_55 = "Bad INODE block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_40;
  break;
 case 137:
  if (VAR_52 != VAR_22) {
   VAR_55 = "Bad symlink block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_45;
  break;
 case 147:
  if (VAR_52 != VAR_10 &&
      VAR_52 != VAR_15) {
   VAR_55 = "Bad dir block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_32;
  break;
 case 146:
  if (VAR_52 != VAR_11 &&
      VAR_52 != VAR_16) {
   VAR_55 = "Bad dir data magic!";
   break;
  }
  VAR_48->b_ops = &VAR_33;
  break;
 case 145:
  if (VAR_52 != VAR_12 &&
      VAR_52 != VAR_17) {
   VAR_55 = "Bad dir3 free magic!";
   break;
  }
  VAR_48->b_ops = &VAR_34;
  break;
 case 144:
  if (VAR_54 != VAR_13 &&
      VAR_54 != VAR_18) {
   VAR_55 = "Bad dir leaf1 magic!";
   break;
  }
  VAR_48->b_ops = &VAR_35;
  break;
 case 143:
  if (VAR_54 != VAR_14 &&
      VAR_54 != VAR_19) {
   VAR_55 = "Bad dir leafn magic!";
   break;
  }
  VAR_48->b_ops = &VAR_36;
  break;
 case 149:
  if (VAR_54 != VAR_8 &&
      VAR_54 != VAR_7) {
   VAR_55 = "Bad da node magic!";
   break;
  }
  VAR_48->b_ops = &VAR_31;
  break;
 case 152:
  if (VAR_54 != VAR_6 &&
      VAR_54 != VAR_4) {
   VAR_55 = "Bad attr leaf magic!";
   break;
  }
  VAR_48->b_ops = &VAR_26;
  break;
 case 151:
  if (VAR_52 != VAR_5) {
   VAR_55 = "Bad attr remote magic!";
   break;
  }
  VAR_48->b_ops = &VAR_27;
  break;
 case 138:
  if (VAR_52 != VAR_21) {
   VAR_55 = "Bad SB block magic!";
   break;
  }
  VAR_48->b_ops = &VAR_44;
  break;







 default:
  FUNC_7(VAR_47, "Unknown buffer type %d!",
    FUNC_4(VAR_49));
  break;
 }






 if (VAR_50 == VAR_0)
  return;

 if (VAR_55) {
  FUNC_7(VAR_47, VAR_55);
  FUNC_0(0);
 }
 if (VAR_48->b_ops) {
  struct xfs_buf_log_item *VAR_56;

  FUNC_0(!VAR_48->b_iodone || VAR_48->b_iodone == VAR_46);
  VAR_48->b_iodone = VAR_46;
  FUNC_5(VAR_48, VAR_47);
  VAR_56 = VAR_48->b_log_item;
  VAR_56->bli_item.li_lsn = VAR_50;
 }
}
