
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_sb; int i_ino; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int name; int name_len; scalar_t__ inode; int file_type; void* rec_len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,struct ext4_dir_entry_2*,int ) ;
 int FUNC_5 (struct ext4_filename*) ;
 int FUNC_6 (struct ext4_filename*) ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8(struct inode *VAR_1,
   struct ext4_dir_entry_2 *VAR_2,
   int VAR_3,
   struct ext4_filename *VAR_4)
{

 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2->name_len);
 VAR_6 = FUNC_2(VAR_2->rec_len, VAR_3);
 if (VAR_2->inode) {
  struct ext4_dir_entry_2 *VAR_7 =
   (struct ext4_dir_entry_2 *)((char *)VAR_2 + VAR_5);
  VAR_7->rec_len = FUNC_3(VAR_6 - VAR_5, VAR_3);
  VAR_2->rec_len = FUNC_3(VAR_5, VAR_3);
  VAR_2 = VAR_7;
 }
 VAR_2->file_type = VAR_0;
 VAR_2->inode = FUNC_1(VAR_1->i_ino);
 FUNC_4(VAR_1->i_sb, VAR_2, VAR_1->i_mode);
 VAR_2->name_len = FUNC_5(VAR_4);
 FUNC_7(VAR_2->name, FUNC_6(VAR_4), FUNC_5(VAR_4));
}
