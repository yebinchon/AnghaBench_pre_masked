
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct fuse_conn {int dummy; } ;


 struct fuse_conn* FUNC_0 (int ) ;

__attribute__((used)) static inline struct fuse_conn *FUNC_1(struct inode *VAR_0)
{
 return FUNC_0(VAR_0->i_sb);
}
