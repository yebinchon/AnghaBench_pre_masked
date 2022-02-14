
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_dir_entry_tail {scalar_t__ det_reserved_ft; scalar_t__ det_reserved_zero2; scalar_t__ det_rec_len; scalar_t__ det_reserved_zero1; } ;
struct ext4_dir_entry {scalar_t__ rec_len; } ;
struct buffer_head {int b_data; } ;


 int FUNC_0 (int ) ;
 struct ext4_dir_entry_tail* FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct ext4_dir_entry_tail *FUNC_3(struct inode *VAR_1,
         struct buffer_head *VAR_2)
{
 struct ext4_dir_entry_tail *VAR_3;
 VAR_3 = FUNC_1(VAR_2->b_data, FUNC_0(VAR_1->i_sb));


 if (VAR_3->det_reserved_zero1 ||
     FUNC_2(VAR_3->det_rec_len) != sizeof(struct ext4_dir_entry_tail) ||
     VAR_3->det_reserved_zero2 ||
     VAR_3->det_reserved_ft != VAR_0)
  return ((void*)0);

 return VAR_3;
}
