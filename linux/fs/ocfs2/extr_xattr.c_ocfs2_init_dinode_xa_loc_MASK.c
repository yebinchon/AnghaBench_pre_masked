
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xa_loc {scalar_t__ xl_size; struct ocfs2_xattr_header* xl_header; struct ocfs2_xattr_entry* xl_entry; struct buffer_head* xl_storage; int * xl_ops; struct inode* xl_inode; } ;
struct ocfs2_dinode {int i_xattr_inline_size; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ocfs2_xa_loc *VAR_2,
         struct inode *VAR_3,
         struct buffer_head *VAR_4,
         struct ocfs2_xattr_entry *VAR_5)
{
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_4->b_data;

 FUNC_0(!(FUNC_1(VAR_3)->ip_dyn_features & VAR_0));

 VAR_2->xl_inode = VAR_3;
 VAR_2->xl_ops = &VAR_1;
 VAR_2->xl_storage = VAR_4;
 VAR_2->xl_entry = VAR_5;
 VAR_2->xl_size = FUNC_2(VAR_6->i_xattr_inline_size);
 VAR_2->xl_header =
  (struct ocfs2_xattr_header *)(VAR_4->b_data + VAR_4->b_size -
           VAR_2->xl_size);
}
