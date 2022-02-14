
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_inode {int dummy; } ;
struct ext2_group_desc {int bg_inode_table; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ino_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_inodes_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext2_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,char*,char*,unsigned long,...) ;
 struct ext2_group_desc* FUNC_8 (struct super_block*,unsigned long,int *) ;
 unsigned long FUNC_9 (int ) ;
 struct buffer_head* FUNC_10 (struct super_block*,unsigned long) ;

__attribute__((used)) static struct ext2_inode *FUNC_11(struct super_block *VAR_3, ino_t VAR_4,
     struct buffer_head **VAR_5)
{
 struct buffer_head * VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct ext2_group_desc * VAR_10;

 *VAR_5 = ((void*)0);
 if ((VAR_4 != VAR_2 && VAR_4 < FUNC_3(VAR_3)) ||
     VAR_4 > FUNC_9(FUNC_6(VAR_3)->s_es->s_inodes_count))
  goto Einval;

 VAR_7 = (VAR_4 - 1) / FUNC_4(VAR_3);
 VAR_10 = FUNC_8(VAR_3, VAR_7, ((void*)0));
 if (!VAR_10)
  goto Egdp;



 VAR_9 = ((VAR_4 - 1) % FUNC_4(VAR_3)) * FUNC_5(VAR_3);
 VAR_8 = FUNC_9(VAR_10->bg_inode_table) +
  (VAR_9 >> FUNC_2(VAR_3));
 if (!(VAR_6 = FUNC_10(VAR_3, VAR_8)))
  goto Eio;

 *VAR_5 = VAR_6;
 VAR_9 &= (FUNC_1(VAR_3) - 1);
 return (struct ext2_inode *) (VAR_6->b_data + VAR_9);

Einval:
 FUNC_7(VAR_3, "ext2_get_inode", "bad inode number: %lu",
     (unsigned long) VAR_4);
 return FUNC_0(-VAR_0);
Eio:
 FUNC_7(VAR_3, "ext2_get_inode",
     "unable to read inode block - inode=%lu, block=%lu",
     (unsigned long) VAR_4, VAR_8);
Egdp:
 return FUNC_0(-VAR_1);
}
