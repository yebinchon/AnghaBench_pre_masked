
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct fuse_conn* s_fs_info; } ;
struct fuse_conn {int dummy; } ;



__attribute__((used)) static inline struct fuse_conn *FUNC_0(struct super_block *VAR_0)
{
 return VAR_0->s_fs_info;
}
