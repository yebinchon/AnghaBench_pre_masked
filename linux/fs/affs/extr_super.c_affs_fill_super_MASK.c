
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int s_flags; int s_blocksize; int * s_export_op; int s_root; int * s_d_op; int s_id; TYPE_2__* s_bdev; struct affs_sb_info* s_fs_info; scalar_t__ s_time_min; scalar_t__ s_time_max; int s_time_gran; int * s_op; int s_magic; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_data; } ;
struct affs_sb_info {unsigned long s_flags; int s_mode; int s_reserved; int s_root_block; int s_partition_size; int s_hashsize; int s_data_blksize; struct buffer_head* s_root_bh; int s_gid; int s_uid; int s_volume; int s_prefix; int sb_work; int work_lock; int symlink_lock; int s_bmlock; struct super_block* sb; } ;
typedef int s32 ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef int __be32 ;
struct TYPE_10__ {int ptype; } ;
struct TYPE_9__ {int* disk_name; int stype; } ;
struct TYPE_8__ {unsigned long s_flags; } ;
struct TYPE_7__ {int bd_inode; } ;
struct TYPE_6__ {int tz_minuteswest; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (struct buffer_head*) ;
 TYPE_4__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 TYPE_3__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;







 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 long long VAR_18 ;
 struct buffer_head* FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct super_block*,struct buffer_head*) ;
 int VAR_19 ;
 int VAR_20 ;
 struct inode* FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (struct super_block*,int*) ;
 int VAR_21 ;
 int FUNC_11 (struct super_block*,int) ;
 int FUNC_12 (unsigned long,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_13 (unsigned long,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct inode*) ;
 int VAR_23 ;
 int FUNC_18 (int ) ;
 struct affs_sb_info* FUNC_19 (int,int ) ;
 int FUNC_20 (int*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (void*,int *,int *,int*,int*,int*,int*,int *,int ,unsigned long*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (char*,int,...) ;
 struct buffer_head* FUNC_26 (struct super_block*,int ) ;
 int FUNC_27 (struct super_block*) ;
 int FUNC_28 (int *) ;
 TYPE_1__ VAR_24 ;

__attribute__((used)) static int FUNC_29(struct super_block *VAR_25, void *VAR_26, int VAR_27)
{
 struct affs_sb_info *VAR_28;
 struct buffer_head *VAR_29 = ((void*)0);
 struct buffer_head *VAR_30;
 struct inode *VAR_31 = ((void*)0);
 s32 VAR_32;
 int VAR_33, VAR_34;
 u32 VAR_35;
 int VAR_36;
 int VAR_37, VAR_38;
 kuid_t VAR_39;
 kgid_t VAR_40;
 int VAR_41;
 unsigned long VAR_42;
 int VAR_43;
 u8 VAR_44[4];
 int VAR_45;

 FUNC_23("read_super(%s)\n", VAR_26 ? (const char *)VAR_26 : "no options");

 VAR_25->s_magic = VAR_1;
 VAR_25->s_op = &VAR_22;
 VAR_25->s_flags |= VAR_8;

 VAR_25->s_time_gran = VAR_5;
 VAR_25->s_time_min = VAR_24.tz_minuteswest * 60 + VAR_0;
 VAR_25->s_time_max = 86400LL * VAR_18 + 86400 + VAR_25->s_time_min;

 VAR_28 = FUNC_19(sizeof(struct affs_sb_info), VAR_4);
 if (!VAR_28)
  return -VAR_3;

 VAR_25->s_fs_info = VAR_28;
 VAR_28->sb = VAR_25;
 FUNC_21(&VAR_28->s_bmlock);
 FUNC_28(&VAR_28->symlink_lock);
 FUNC_28(&VAR_28->work_lock);
 FUNC_3(&VAR_28->sb_work, VAR_23);

 if (!FUNC_22(VAR_26,&VAR_39,&VAR_40,&VAR_37,&VAR_41,&VAR_32,
    &VAR_34,&VAR_28->s_prefix,
    VAR_28->s_volume, &VAR_42)) {
  FUNC_24("Error parsing options\n");
  return -VAR_2;
 }


 VAR_28->s_flags = VAR_42;
 VAR_28->s_mode = VAR_37;
 VAR_28->s_uid = VAR_39;
 VAR_28->s_gid = VAR_40;
 VAR_28->s_reserved= VAR_41;






 VAR_33 = FUNC_18(VAR_25->s_bdev->bd_inode) >> 9;
 FUNC_23("initial blocksize=%d, #blocks=%d\n", 512, VAR_33);

 FUNC_11(VAR_25, VAR_6);


 VAR_37 = FUNC_14(VAR_25->s_bdev);
 VAR_38 = VAR_6;
 if (VAR_34 > 0) {
  VAR_37 = VAR_38 = VAR_34;
  VAR_33 = VAR_33 / (VAR_34 / 512);
 }

 for (VAR_34 = VAR_37; VAR_34 <= VAR_38; VAR_34 <<= 1, VAR_33 >>= 1) {
  VAR_28->s_root_block = VAR_32;
  if (VAR_32 < 0)
   VAR_28->s_root_block = (VAR_41 + VAR_33 - 1) / 2;
  FUNC_23("setting blocksize to %d\n", VAR_34);
  FUNC_11(VAR_25, VAR_34);
  VAR_28->s_partition_size = VAR_33;
  for (VAR_36 = 0; VAR_36 < 2; VAR_36++) {
   FUNC_23("Dev %s, trying root=%u, bs=%d, "
    "size=%d, reserved=%d\n",
    VAR_25->s_id,
    VAR_28->s_root_block + VAR_36,
    VAR_34, VAR_33, VAR_41);
   VAR_29 = FUNC_6(VAR_25, VAR_28->s_root_block + VAR_36);
   if (!VAR_29)
    continue;
   if (!FUNC_8(VAR_25, VAR_29) &&
       FUNC_15(FUNC_0(VAR_29)->ptype) == VAR_17 &&
       FUNC_15(FUNC_1(VAR_25, VAR_29)->stype) == VAR_16) {
    VAR_28->s_hashsize = VAR_34 / 4 - 56;
    VAR_28->s_root_block += VAR_36;
    goto got_root;
   }
   FUNC_7(VAR_29);
   VAR_29 = ((void*)0);
  }
 }
 if (!VAR_27)
  FUNC_24("No valid root block on device %s\n", VAR_25->s_id);
 return -VAR_2;


got_root:

 VAR_28->s_root_bh = VAR_29;
 VAR_32 = VAR_28->s_root_block;


 VAR_30 = FUNC_26(VAR_25, 0);
 if (!VAR_30) {
  FUNC_24("Cannot read boot block\n");
  return -VAR_2;
 }
 FUNC_20(VAR_44, VAR_30->b_data, 4);
 FUNC_16(VAR_30);
 VAR_35 = FUNC_15(*(__be32 *)VAR_44);





 if ((VAR_35 == 140 || VAR_35 == 134 || VAR_35 == 139
      || VAR_35 == 133) && !FUNC_27(VAR_25)) {
  FUNC_25("Dircache FS - mounting %s read only\n", VAR_25->s_id);
  VAR_25->s_flags |= VAR_11;
 }
 switch (VAR_35) {
 case 131:
 case 130:
 case 134:
  FUNC_12(VAR_28->s_flags, VAR_13);

 case 137:
 case 140:
  FUNC_12(VAR_28->s_flags, VAR_12);
  break;
 case 132:
  FUNC_12(VAR_28->s_flags, VAR_13);
  break;
 case 138:
  break;
 case 128:
  FUNC_12(VAR_28->s_flags, VAR_13);

 case 135:
  FUNC_12(VAR_28->s_flags, VAR_14);
  VAR_25->s_flags |= VAR_9;
  break;
 case 133:
 case 129:
  FUNC_12(VAR_28->s_flags, VAR_13);

 case 139:
 case 136:
  FUNC_12(VAR_28->s_flags, VAR_12);
  FUNC_12(VAR_28->s_flags, VAR_14);
  VAR_25->s_flags |= VAR_9;
  break;
 default:
  FUNC_24("Unknown filesystem on device %s: %08X\n",
         VAR_25->s_id, VAR_35);
  return -VAR_2;
 }

 if (FUNC_13(VAR_42, VAR_15)) {
  u8 VAR_46 = FUNC_1(VAR_25, VAR_29)->disk_name[0];
  FUNC_25("Mounting volume \"%.*s\": Type=%.3s\\%c, Blocksize=%d\n",
   VAR_46 > 31 ? 31 : VAR_46,
   FUNC_1(VAR_25, VAR_29)->disk_name + 1,
   VAR_44, VAR_44[3] + '0', VAR_34);
 }

 VAR_25->s_flags |= VAR_7 | VAR_10;

 VAR_28->s_data_blksize = VAR_25->s_blocksize;
 if (FUNC_13(VAR_28->s_flags, VAR_14))
  VAR_28->s_data_blksize -= 24;

 VAR_43 = VAR_25->s_flags;
 VAR_45 = FUNC_10(VAR_25, &VAR_43);
 if (VAR_45)
  return VAR_45;
 VAR_25->s_flags = VAR_43;



 VAR_31 = FUNC_9(VAR_25, VAR_32);
 if (FUNC_4(VAR_31))
  return FUNC_5(VAR_31);

 if (FUNC_13(FUNC_2(VAR_25)->s_flags, VAR_12))
  VAR_25->s_d_op = &VAR_21;
 else
  VAR_25->s_d_op = &VAR_19;

 VAR_25->s_root = FUNC_17(VAR_31);
 if (!VAR_25->s_root) {
  FUNC_24("AFFS: Get root inode failed\n");
  return -VAR_3;
 }

 VAR_25->s_export_op = &VAR_20;
 FUNC_23("s_flags=%lX\n", VAR_25->s_flags);
 return 0;
}
