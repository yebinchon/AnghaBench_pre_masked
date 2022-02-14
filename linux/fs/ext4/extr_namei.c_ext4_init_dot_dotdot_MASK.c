
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_ino; int i_sb; } ;
struct ext4_dir_entry_2 {int name_len; int name; void* rec_len; void* inode; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (unsigned int) ;
 struct ext4_dir_entry_2* FUNC_2 (struct ext4_dir_entry_2*,int) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,struct ext4_dir_entry_2*,int ) ;
 int FUNC_5 (int ,char*) ;

struct ext4_dir_entry_2 *FUNC_6(struct inode *VAR_1,
     struct ext4_dir_entry_2 *VAR_2,
     int VAR_3, int VAR_4,
     unsigned int VAR_5, int VAR_6)
{
 VAR_2->inode = FUNC_1(VAR_1->i_ino);
 VAR_2->name_len = 1;
 VAR_2->rec_len = FUNC_3(FUNC_0(VAR_2->name_len),
        VAR_3);
 FUNC_5(VAR_2->name, ".");
 FUNC_4(VAR_1->i_sb, VAR_2, VAR_0);

 VAR_2 = FUNC_2(VAR_2, VAR_3);
 VAR_2->inode = FUNC_1(VAR_5);
 VAR_2->name_len = 2;
 if (!VAR_6)
  VAR_2->rec_len = FUNC_3(VAR_3 -
     (VAR_4 + FUNC_0(1)),
     VAR_3);
 else
  VAR_2->rec_len = FUNC_3(
    FUNC_0(VAR_2->name_len), VAR_3);
 FUNC_5(VAR_2->name, "..");
 FUNC_4(VAR_1->i_sb, VAR_2, VAR_0);

 return FUNC_2(VAR_2, VAR_3);
}
