
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_dir_entry {int rec_len; } ;
struct dx_root_info {int info_length; scalar_t__ reserved_zero; } ;
struct dx_countlimit {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct dx_countlimit *FUNC_2(struct inode *VAR_0,
            struct ext4_dir_entry *VAR_1,
            int *VAR_2)
{
 struct ext4_dir_entry *VAR_3;
 struct dx_root_info *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_1->rec_len) == FUNC_0(VAR_0->i_sb))
  VAR_5 = 8;
 else if (FUNC_1(VAR_1->rec_len) == 12) {
  VAR_3 = (struct ext4_dir_entry *)(((void *)VAR_1) + 12);
  if (FUNC_1(VAR_3->rec_len) !=
      FUNC_0(VAR_0->i_sb) - 12)
   return ((void*)0);
  VAR_4 = (struct dx_root_info *)(((void *)VAR_3 + 12));
  if (VAR_4->reserved_zero ||
      VAR_4->info_length != sizeof(struct dx_root_info))
   return ((void*)0);
  VAR_5 = 32;
 } else
  return ((void*)0);

 if (VAR_2)
  *VAR_2 = VAR_5;
 return (struct dx_countlimit *)(((void *)VAR_1) + VAR_5);
}
