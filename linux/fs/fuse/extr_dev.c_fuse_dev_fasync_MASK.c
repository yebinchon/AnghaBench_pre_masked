
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fuse_dev {TYPE_2__* fc; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int fasync; } ;
struct TYPE_4__ {TYPE_1__ iq; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct file*,int,int *) ;
 struct fuse_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct fuse_dev *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4)
  return -VAR_0;


 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->fc->iq.fasync);
}
