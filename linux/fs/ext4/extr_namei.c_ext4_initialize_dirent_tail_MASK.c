
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_dir_entry_tail {int det_reserved_ft; int det_rec_len; } ;
struct buffer_head {int b_data; } ;


 struct ext4_dir_entry_tail* FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct ext4_dir_entry_tail*,int ,int) ;

void FUNC_3(struct buffer_head *VAR_1,
     unsigned int VAR_2)
{
 struct ext4_dir_entry_tail *VAR_3 = FUNC_0(VAR_1->b_data, VAR_2);

 FUNC_2(VAR_3, 0, sizeof(struct ext4_dir_entry_tail));
 VAR_3->det_rec_len = FUNC_1(
   sizeof(struct ext4_dir_entry_tail), VAR_2);
 VAR_3->det_reserved_ft = VAR_0;
}
