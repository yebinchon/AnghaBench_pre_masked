
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct msdos_sb_info {scalar_t__ dirty; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int state; } ;
struct fat_boot_sector {TYPE_2__ fat16; TYPE_1__ fat32; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct super_block*,int ,char*) ;
 scalar_t__ FUNC_3 (struct msdos_sb_info*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct super_block*,int ) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5)
{
 struct buffer_head *VAR_6;
 struct fat_boot_sector *VAR_7;
 struct msdos_sb_info *VAR_8 = FUNC_0(VAR_3);


 if (FUNC_6(VAR_3) && !VAR_5)
  return;


 if (VAR_8->dirty) {

  if (VAR_4)
   FUNC_2(VAR_3, VAR_2, "Volume was not properly "
    "unmounted. Some data may be corrupt. "
    "Please run fsck.");
  return;
 }

 VAR_6 = FUNC_5(VAR_3, 0);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_3, VAR_1, "unable to read boot sector "
   "to mark fs as dirty");
  return;
 }

 VAR_7 = (struct fat_boot_sector *) VAR_6->b_data;

 if (FUNC_3(VAR_8)) {
  if (VAR_4)
   VAR_7->fat32.state |= VAR_0;
  else
   VAR_7->fat32.state &= ~VAR_0;
 } else {
  if (VAR_4)
   VAR_7->fat16.state |= VAR_0;
  else
   VAR_7->fat16.state &= ~VAR_0;
 }

 FUNC_4(VAR_6);
 FUNC_7(VAR_6);
 FUNC_1(VAR_6);
}
