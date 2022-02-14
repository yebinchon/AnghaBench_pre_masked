
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_xattr_header {int xh_name_value_len; void* xh_free_start; } ;
struct ocfs2_xa_loc {TYPE_1__* xl_entry; TYPE_2__* xl_inode; struct ocfs2_xattr_header* xl_header; } ;
struct TYPE_4__ {struct super_block* i_sb; } ;
struct TYPE_3__ {void* xe_name_offset; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct super_block*,int,int) ;
 int FUNC_3 (struct ocfs2_xa_loc*) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_xa_loc *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0);
 struct ocfs2_xattr_header *VAR_3 = VAR_0->xl_header;
 struct super_block *VAR_4 = VAR_0->xl_inode->i_sb;
 int VAR_5;

 VAR_2 = FUNC_2(VAR_4, VAR_2, VAR_1);
 VAR_5 = VAR_2 - VAR_1;
 VAR_0->xl_entry->xe_name_offset = FUNC_0(VAR_5);
 VAR_3->xh_free_start = FUNC_0(VAR_5);
 FUNC_1(&VAR_3->xh_name_value_len, VAR_1);

}
