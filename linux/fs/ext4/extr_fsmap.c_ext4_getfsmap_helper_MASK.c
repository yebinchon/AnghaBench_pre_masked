
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_getfsmap_info {scalar_t__ gfi_next_fsblk; int (* gfi_formatter ) (struct ext4_fsmap*,int ) ;TYPE_1__* gfi_head; int gfi_format_arg; int gfi_dev; scalar_t__ gfi_last; } ;
struct ext4_fsmap {scalar_t__ fmr_physical; scalar_t__ fmr_length; void* fmr_flags; int fmr_owner; int fmr_device; } ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {scalar_t__ fmh_count; scalar_t__ fmh_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct ext4_sb_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct super_block*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_3 (struct ext4_getfsmap_info*,struct ext4_fsmap*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ext4_fsmap*,int ) ;
 int FUNC_6 (struct ext4_fsmap*,int ) ;
 int FUNC_7 (struct super_block*,int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_6,
    struct ext4_getfsmap_info *VAR_7,
    struct ext4_fsmap *VAR_8)
{
 struct ext4_fsmap VAR_9;
 struct ext4_sb_info *VAR_10 = FUNC_1(VAR_6);
 ext4_fsblk_t VAR_11 = VAR_8->fmr_physical;
 ext4_group_t VAR_12;
 ext4_grpblk_t VAR_13;
 int VAR_14;

 if (FUNC_4(VAR_5))
  return -VAR_0;





 if (FUNC_3(VAR_7, VAR_8)) {
  VAR_11 += VAR_8->fmr_length;
  if (VAR_7->gfi_next_fsblk < VAR_11)
   VAR_7->gfi_next_fsblk = VAR_11;
  return VAR_3;
 }


 if (VAR_7->gfi_head->fmh_count == 0) {
  if (VAR_11 > VAR_7->gfi_next_fsblk)
   VAR_7->gfi_head->fmh_entries++;

  if (VAR_7->gfi_last)
   return VAR_3;

  VAR_7->gfi_head->fmh_entries++;

  VAR_11 += VAR_8->fmr_length;
  if (VAR_7->gfi_next_fsblk < VAR_11)
   VAR_7->gfi_next_fsblk = VAR_11;
  return VAR_3;
 }






 if (VAR_11 > VAR_7->gfi_next_fsblk) {
  if (VAR_7->gfi_head->fmh_entries >= VAR_7->gfi_head->fmh_count)
   return VAR_2;

  FUNC_2(VAR_6, VAR_7->gfi_next_fsblk,
    &VAR_12, &VAR_13);
  FUNC_7(VAR_6, VAR_7->gfi_dev, VAR_12,
    FUNC_0(VAR_10, VAR_13),
    VAR_11 - VAR_7->gfi_next_fsblk,
    VAR_1);

  VAR_9.fmr_device = VAR_7->gfi_dev;
  VAR_9.fmr_physical = VAR_7->gfi_next_fsblk;
  VAR_9.fmr_owner = VAR_1;
  VAR_9.fmr_length = VAR_11 - VAR_7->gfi_next_fsblk;
  VAR_9.fmr_flags = VAR_4;
  VAR_14 = VAR_7->gfi_formatter(&VAR_9, VAR_7->gfi_format_arg);
  if (VAR_14)
   return VAR_14;
  VAR_7->gfi_head->fmh_entries++;
 }

 if (VAR_7->gfi_last)
  goto out;


 if (VAR_7->gfi_head->fmh_entries >= VAR_7->gfi_head->fmh_count)
  return VAR_2;

 FUNC_2(VAR_6, VAR_11, &VAR_12, &VAR_13);
 FUNC_7(VAR_6, VAR_7->gfi_dev, VAR_12, FUNC_0(VAR_10, VAR_13),
   VAR_8->fmr_length, VAR_8->fmr_owner);

 VAR_9.fmr_device = VAR_7->gfi_dev;
 VAR_9.fmr_physical = VAR_11;
 VAR_9.fmr_owner = VAR_8->fmr_owner;
 VAR_9.fmr_flags = VAR_4;
 VAR_9.fmr_length = VAR_8->fmr_length;
 VAR_14 = VAR_7->gfi_formatter(&VAR_9, VAR_7->gfi_format_arg);
 if (VAR_14)
  return VAR_14;
 VAR_7->gfi_head->fmh_entries++;

out:
 VAR_11 += VAR_8->fmr_length;
 if (VAR_7->gfi_next_fsblk < VAR_11)
  VAR_7->gfi_next_fsblk = VAR_11;
 return VAR_3;
}
