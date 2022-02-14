
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_bucket {int bu_blocks; TYPE_2__* bu_inode; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_xattr_bucket*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_xattr_bucket *VAR_0,
      struct ocfs2_xattr_bucket *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->bu_inode->i_sb->s_blocksize;

 FUNC_0(VAR_0->bu_blocks != VAR_1->bu_blocks);
 FUNC_0(VAR_0->bu_inode != VAR_1->bu_inode);

 for (VAR_2 = 0; VAR_2 < VAR_1->bu_blocks; VAR_2++) {
  FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_1(VAR_1, VAR_2),
         VAR_3);
 }
}
