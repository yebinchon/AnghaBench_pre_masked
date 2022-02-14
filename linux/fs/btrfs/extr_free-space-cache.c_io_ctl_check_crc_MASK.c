
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct btrfs_io_ctl {int num_pages; int fs_info; scalar_t__ orig; int * pages; int check_crcs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct btrfs_io_ctl*,int ) ;
 int FUNC_4 (struct btrfs_io_ctl*) ;
 scalar_t__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct btrfs_io_ctl *VAR_2, int VAR_3)
{
 u32 *VAR_4, VAR_5;
 u32 VAR_6 = ~(u32)0;
 unsigned VAR_7 = 0;

 if (!VAR_2->check_crcs) {
  FUNC_3(VAR_2, 0);
  return 0;
 }

 if (VAR_3 == 0)
  VAR_7 = sizeof(u32) * VAR_2->num_pages;

 VAR_4 = FUNC_5(VAR_2->pages[0]);
 VAR_4 += VAR_3;
 VAR_5 = *VAR_4;

 FUNC_3(VAR_2, 0);
 VAR_6 = FUNC_0(VAR_6, VAR_2->orig + VAR_7, VAR_1 - VAR_7);
 FUNC_1(VAR_6, (u8 *)&VAR_6);
 if (VAR_5 != VAR_6) {
  FUNC_2(VAR_2->fs_info,
   "csum mismatch on free space cache");
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 return 0;
}
