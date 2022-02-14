
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_conn {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct inode*,int *,struct kstat*,int ,unsigned int) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(const struct path *VAR_1, struct kstat *VAR_2,
   u32 VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_1->dentry);
 struct fuse_conn *VAR_6 = FUNC_3(VAR_5);

 if (!FUNC_1(VAR_6))
  return -VAR_0;

 return FUNC_2(VAR_5, ((void*)0), VAR_2, VAR_3, VAR_4);
}
