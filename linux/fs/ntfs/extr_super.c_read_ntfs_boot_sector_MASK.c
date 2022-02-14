
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_2__ {int nr_blocks; int on_errors; } ;
typedef int NTFS_BOOT_SECTOR ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct super_block*,int *,int const) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct super_block*,char const*,...) ;
 int FUNC_7 (struct super_block*,char*) ;
 struct buffer_head* FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_11(struct super_block *VAR_2,
  const int VAR_3)
{
 const char *VAR_4 = "Unable to read %s boot sector.";
 struct buffer_head *VAR_5, *VAR_6;
 sector_t VAR_7 = FUNC_0(VAR_2)->nr_blocks;


 if ((VAR_5 = FUNC_8(VAR_2, 0))) {
  if (FUNC_3(VAR_2, (NTFS_BOOT_SECTOR*)
    VAR_5->b_data, VAR_3))
   return VAR_5;
  if (!VAR_3)
   FUNC_6(VAR_2, "Primary boot sector is invalid.");
 } else if (!VAR_3)
  FUNC_6(VAR_2, VAR_4, "primary");
 if (!(FUNC_0(VAR_2)->on_errors & VAR_1)) {
  if (VAR_5)
   FUNC_1(VAR_5);
  if (!VAR_3)
   FUNC_6(VAR_2, "Mount option errors=recover not used. "
     "Aborting without trying to recover.");
  return ((void*)0);
 }

 if ((VAR_6 = FUNC_8(VAR_2, VAR_7 - 1))) {
  if (FUNC_3(VAR_2, (NTFS_BOOT_SECTOR*)
    VAR_6->b_data, VAR_3))
   goto hotfix_primary_boot_sector;
  FUNC_1(VAR_6);
 } else if (!VAR_3)
  FUNC_6(VAR_2, VAR_4, "backup");

 if ((VAR_6 = FUNC_8(VAR_2, VAR_7 >> 1))) {
  if (FUNC_3(VAR_2, (NTFS_BOOT_SECTOR*)
    VAR_6->b_data, VAR_3))
   goto hotfix_primary_boot_sector;
  if (!VAR_3)
   FUNC_6(VAR_2, "Could not find a valid backup boot "
     "sector.");
  FUNC_1(VAR_6);
 } else if (!VAR_3)
  FUNC_6(VAR_2, VAR_4, "backup");

 if (VAR_5)
  FUNC_1(VAR_5);
 return ((void*)0);
hotfix_primary_boot_sector:
 if (VAR_5) {
  if (!FUNC_9(VAR_2)) {
   FUNC_7(VAR_2, "Hot-fix: Recovering invalid primary "
     "boot sector from backup copy.");
   FUNC_5(VAR_5->b_data, VAR_6->b_data,
     VAR_0);
   FUNC_4(VAR_5);
   FUNC_10(VAR_5);
   if (FUNC_2(VAR_5)) {
    FUNC_1(VAR_6);
    return VAR_5;
   }
   FUNC_6(VAR_2, "Hot-fix: Device write error while "
     "recovering primary boot sector.");
  } else {
   FUNC_7(VAR_2, "Hot-fix: Recovery of primary boot "
     "sector failed: Read-only mount.");
  }
  FUNC_1(VAR_5);
 }
 FUNC_7(VAR_2, "Using backup boot sector.");
 return VAR_6;
}
