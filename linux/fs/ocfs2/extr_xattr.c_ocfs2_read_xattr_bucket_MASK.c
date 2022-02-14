
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_xattr_bucket {TYPE_3__* bu_inode; int bu_blocks; int bu_bhs; } ;
struct TYPE_6__ {int i_sb; } ;
struct TYPE_5__ {int osb_xattr_lock; } ;
struct TYPE_4__ {int xh_check; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct ocfs2_xattr_bucket*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (struct ocfs2_xattr_bucket*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_xattr_bucket *VAR_0,
       u64 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(FUNC_0(VAR_0->bu_inode), VAR_1,
          VAR_0->bu_blocks, VAR_0->bu_bhs, 0,
          ((void*)0));
 if (!VAR_2) {
  FUNC_7(&FUNC_1(VAR_0->bu_inode->i_sb)->osb_xattr_lock);
  VAR_2 = FUNC_5(VAR_0->bu_inode->i_sb,
       VAR_0->bu_bhs,
       VAR_0->bu_blocks,
       &FUNC_2(VAR_0)->xh_check);
  FUNC_8(&FUNC_1(VAR_0->bu_inode->i_sb)->osb_xattr_lock);
  if (VAR_2)
   FUNC_3(VAR_2);
 }

 if (VAR_2)
  FUNC_6(VAR_0);
 return VAR_2;
}
