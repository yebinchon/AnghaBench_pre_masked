
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct qnx6_sb_info {int s_ptrbits; } ;
struct qnx6_inode_info {int di_filelevels; int * di_block_ptr; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __fs32 ;


 struct qnx6_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct qnx6_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct super_block*,int ) ;
 struct buffer_head* FUNC_6 (struct super_block*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_7(struct inode *VAR_1, unsigned VAR_2)
{
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct qnx6_sb_info *VAR_4 = FUNC_1(VAR_3);
 struct qnx6_inode_info *VAR_5 = FUNC_0(VAR_1);
 unsigned VAR_6 = 0;
 struct buffer_head *VAR_7;
 __fs32 VAR_8;
 int VAR_9;
 int VAR_10 = VAR_4->s_ptrbits;
 int VAR_11;
 u32 VAR_12 = (1 << VAR_10) - 1;
 int VAR_13 = VAR_5->di_filelevels;
 int VAR_14;

 VAR_11 = VAR_10 * VAR_13;
 VAR_9 = VAR_2 >> VAR_11;

 if (VAR_9 > VAR_0 - 1) {
  FUNC_3("Requested file block number (%u) too big.", VAR_2);
  return 0;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_5->di_block_ptr[VAR_9]);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_7 = FUNC_6(VAR_3, VAR_6);
  if (!VAR_7) {
   FUNC_3("Error reading block (%u)\n", VAR_6);
   return 0;
  }
  VAR_11 -= VAR_10;
  VAR_9 = (VAR_2 >> VAR_11) & VAR_12;
  VAR_8 = ((__fs32 *)VAR_7->b_data)[VAR_9];

  if (!FUNC_4(VAR_8))
   return 0;

  VAR_6 = FUNC_5(VAR_3, VAR_8);
  FUNC_2(VAR_7);
 }
 return VAR_6;
}
