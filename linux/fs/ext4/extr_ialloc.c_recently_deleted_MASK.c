
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ext4_inode {int i_dtime; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {int s_inodes_per_block; } ;


 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct ext4_group_desc* FUNC_5 (struct super_block*,int ,int *) ;
 scalar_t__ FUNC_6 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 struct buffer_head* FUNC_9 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_2, ext4_group_t VAR_3, int VAR_4)
{
 struct ext4_group_desc *VAR_5;
 struct ext4_inode *VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8 = FUNC_1(VAR_2)->s_inodes_per_block;
 int VAR_9, VAR_10 = 0;
 int VAR_11 = VAR_1;
 u32 VAR_12, VAR_13;

 VAR_5 = FUNC_5(VAR_2, VAR_3, ((void*)0));
 if (FUNC_11(!VAR_5))
  return 0;

 VAR_7 = FUNC_9(VAR_2, FUNC_6(VAR_2, VAR_5) +
         (VAR_4 / VAR_8));
 if (!VAR_7 || !FUNC_4(VAR_7))




  goto out;

 VAR_9 = (VAR_4 % VAR_8) * FUNC_0(VAR_2);
 VAR_6 = (struct ext4_inode *) (VAR_7->b_data + VAR_9);





 VAR_12 = FUNC_8(VAR_6->i_dtime);
 VAR_13 = FUNC_7();
 if (FUNC_3(VAR_7))
  VAR_11 += VAR_0;

 if (VAR_12 && FUNC_10(VAR_12, VAR_13) &&
     FUNC_10(VAR_13, VAR_12 + VAR_11))
  VAR_10 = 1;
out:
 FUNC_2(VAR_7);
 return VAR_10;
}
