
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct metapage {int data; } ;
struct jfs_sb_info {int l2nbperpage; scalar_t__ nbperpage; } ;
struct TYPE_4__ {int flag; } ;
struct jfs_inode_info {TYPE_1__ ea; } ;
struct jfs_ea_list {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 struct jfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*,struct jfs_ea_list*) ;
 int FUNC_4 (struct super_block*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ,int) ;
 struct metapage* FUNC_8 (struct inode*,int,int,int) ;
 int FUNC_9 (struct metapage*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_3, struct jfs_ea_list *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->i_sb;
 struct jfs_inode_info *VAR_6 = FUNC_0(VAR_3);
 struct jfs_sb_info *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;
 s64 VAR_9;
 char *VAR_10 = (char *) VAR_4;
 int VAR_11;
 int VAR_12, VAR_13;
 s32 VAR_14;
 struct metapage *VAR_15;


 if (VAR_6->ea.flag & VAR_0)
  return FUNC_3(VAR_3, VAR_4);

 VAR_12 = FUNC_10(&VAR_6->ea);
 if (!VAR_12) {
  FUNC_4(VAR_5, "nbytes is 0\n");
  return -VAR_1;
 }





 VAR_8 = FUNC_5(&VAR_6->ea) << VAR_7->l2nbperpage;
 VAR_9 = FUNC_2(&VAR_6->ea) << VAR_7->l2nbperpage;






 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11 += VAR_7->nbperpage) {




  VAR_13 = FUNC_7(VAR_2, VAR_12);
  VAR_14 =
      ((((VAR_13 + VAR_5->s_blocksize - 1)) >> VAR_5->s_blocksize_bits))
      << VAR_5->s_blocksize_bits;

  if (!(VAR_15 = FUNC_8(VAR_3, VAR_9 + VAR_11, VAR_14, 1)))
   return -VAR_1;

  FUNC_6(VAR_10, VAR_15->data, VAR_13);
  FUNC_9(VAR_15);

  VAR_10 += VAR_2;
  VAR_12 -= VAR_13;
 }

 return 0;
}
