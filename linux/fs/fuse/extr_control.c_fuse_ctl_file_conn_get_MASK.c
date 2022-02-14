
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct fuse_conn* i_private; } ;


 TYPE_1__* FUNC_0 (struct file*) ;
 struct fuse_conn* FUNC_1 (struct fuse_conn*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct fuse_conn *FUNC_4(struct file *VAR_1)
{
 struct fuse_conn *VAR_2;
 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1)->i_private;
 if (VAR_2)
  VAR_2 = FUNC_1(VAR_2);
 FUNC_3(&VAR_0);
 return VAR_2;
}
