
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct ocfs2_xattr_value_buf {scalar_t__ vb_bh; int vb_access; } ;
struct ocfs2_xattr_bucket {scalar_t__* bu_bhs; } ;
struct ocfs2_xa_loc {TYPE_2__* xl_entry; TYPE_1__* xl_inode; struct ocfs2_xattr_bucket* xl_storage; } ;
struct TYPE_4__ {int xe_name_offset; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ocfs2_xa_loc *VAR_1,
        struct ocfs2_xattr_value_buf *VAR_2)
{
 struct ocfs2_xattr_bucket *VAR_3 = VAR_1->xl_storage;
 struct super_block *VAR_4 = VAR_1->xl_inode->i_sb;
 int VAR_5 = FUNC_1(VAR_1->xl_entry->xe_name_offset);
 int VAR_6 = FUNC_2(VAR_1->xl_entry);
 int VAR_7 = VAR_5 >> VAR_4->s_blocksize_bits;


 FUNC_0(VAR_7 !=
        ((VAR_5 + VAR_6 - 1) >> VAR_4->s_blocksize_bits));

 FUNC_0(!VAR_3->bu_bhs[VAR_7]);

 VAR_2->vb_access = VAR_0;
 VAR_2->vb_bh = VAR_3->bu_bhs[VAR_7];
}
