
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {scalar_t__ eh_depth; int eh_entries; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_extent_idx* FUNC_0 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,struct inode*,int *,int ,int,int) ;
 int FUNC_4 (struct ext4_extent_idx*) ;
 struct buffer_head* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_2, struct inode *VAR_3,
     struct ext4_extent_idx *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 ext4_fsblk_t VAR_7;
 struct buffer_head *VAR_8;
 struct ext4_extent_header *VAR_9;

 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = FUNC_5(VAR_3->i_sb, VAR_7, 0);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_9 = (struct ext4_extent_header *)VAR_8->b_data;
 if (VAR_9->eh_depth != 0) {
  VAR_4 = FUNC_0(VAR_9);
  for (VAR_5 = 0; VAR_5 < FUNC_7(VAR_9->eh_entries); VAR_5++, VAR_4++) {
   VAR_6 = FUNC_9(VAR_2, VAR_3, VAR_4);
   if (VAR_6)
    break;
  }
 }
 FUNC_8(VAR_8);
 FUNC_6(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3, ((void*)0), VAR_7, 1,
    VAR_1 | VAR_0);
 return VAR_6;
}
