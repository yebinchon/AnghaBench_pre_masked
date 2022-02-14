
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct inode {unsigned long i_ino; int i_mode; struct super_block* i_sb; } ;
struct ext2_super_block {int s_inodes_count; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_3__ {struct ext2_super_block* s_es; } ;


 unsigned long FUNC_0 (struct super_block*) ;
 unsigned long FUNC_1 (struct super_block*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,unsigned long,void*) ;
 int FUNC_8 (char*,unsigned long) ;
 int FUNC_9 (struct super_block*,char*,char*,unsigned long) ;
 int FUNC_10 (struct super_block*,unsigned long,int) ;
 unsigned long FUNC_11 (int ) ;
 int FUNC_12 (struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct super_block*,unsigned long) ;
 int FUNC_14 (TYPE_1__*,unsigned long) ;
 int FUNC_15 (struct buffer_head*) ;

void FUNC_16 (struct inode * VAR_1)
{
 struct super_block * VAR_2 = VAR_1->i_sb;
 int VAR_3;
 unsigned long VAR_4;
 struct buffer_head *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 struct ext2_super_block * VAR_8;

 VAR_4 = VAR_1->i_ino;
 FUNC_8 ("freeing inode %lu\n", VAR_4);






 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 VAR_8 = FUNC_2(VAR_2)->s_es;
 VAR_3 = FUNC_3(VAR_1->i_mode);

 if (VAR_4 < FUNC_0(VAR_2) ||
     VAR_4 > FUNC_11(VAR_8->s_inodes_count)) {
  FUNC_9 (VAR_2, "ext2_free_inode",
       "reserved or nonexistent inode %lu", VAR_4);
  return;
 }
 VAR_6 = (VAR_4 - 1) / FUNC_1(VAR_2);
 VAR_7 = (VAR_4 - 1) % FUNC_1(VAR_2);
 VAR_5 = FUNC_13(VAR_2, VAR_6);
 if (!VAR_5)
  return;


 if (!FUNC_7(FUNC_14(FUNC_2(VAR_2), VAR_6),
    VAR_7, (void *) VAR_5->b_data))
  FUNC_9 (VAR_2, "ext2_free_inode",
         "bit already cleared for inode %lu", VAR_4);
 else
  FUNC_10(VAR_2, VAR_6, VAR_3);
 FUNC_12(VAR_5);
 if (VAR_2->s_flags & VAR_0)
  FUNC_15(VAR_5);

 FUNC_4(VAR_5);
}
