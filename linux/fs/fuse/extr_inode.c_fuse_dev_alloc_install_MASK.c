
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_dev {int dummy; } ;
struct fuse_conn {int dummy; } ;


 struct fuse_dev* FUNC_0 () ;
 int FUNC_1 (struct fuse_dev*,struct fuse_conn*) ;

struct fuse_dev *FUNC_2(struct fuse_conn *VAR_0)
{
 struct fuse_dev *VAR_1;

 VAR_1 = FUNC_0();
 if (!VAR_1)
  return ((void*)0);

 FUNC_1(VAR_1, VAR_0);
 return VAR_1;
}
