
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_xa_loc {TYPE_2__* xl_inode; struct ocfs2_xattr_bucket* xl_storage; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_blocksize_bits; int s_blocksize; } ;


 void* FUNC_0 (struct ocfs2_xattr_bucket*,int) ;

__attribute__((used)) static void *FUNC_1(struct ocfs2_xa_loc *VAR_0,
         int VAR_1)
{
 struct ocfs2_xattr_bucket *VAR_2 = VAR_0->xl_storage;
 int VAR_3, VAR_4;


 VAR_3 = VAR_1 >> VAR_0->xl_inode->i_sb->s_blocksize_bits;
 VAR_4 = VAR_1 % VAR_0->xl_inode->i_sb->s_blocksize;

 return FUNC_0(VAR_2, VAR_3) + VAR_4;
}
