
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xattr_bucket {int bu_inode; } ;
struct ocfs2_xa_loc {int xl_size; struct ocfs2_xattr_entry* xl_entry; int xl_header; struct ocfs2_xattr_bucket* xl_storage; int * xl_ops; int xl_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_xattr_bucket*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ocfs2_xa_loc *VAR_2,
        struct ocfs2_xattr_bucket *VAR_3,
        struct ocfs2_xattr_entry *VAR_4)
{
 VAR_2->xl_inode = VAR_3->bu_inode;
 VAR_2->xl_ops = &VAR_1;
 VAR_2->xl_storage = VAR_3;
 VAR_2->xl_header = FUNC_0(VAR_3);
 VAR_2->xl_entry = VAR_4;
 VAR_2->xl_size = VAR_0;
}
