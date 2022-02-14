
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct dentry {TYPE_2__* d_sb; TYPE_1__ d_name; } ;
struct TYPE_4__ {int s_d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dentry*,int *) ;
 int FUNC_2 (struct dentry*,int *) ;
 int VAR_2 ;

struct dentry *FUNC_3(struct inode *VAR_3, struct dentry *VAR_4, unsigned int VAR_5)
{
 if (VAR_4->d_name.len > VAR_1)
  return FUNC_0(-VAR_0);
 if (!VAR_4->d_sb->s_d_op)
  FUNC_2(VAR_4, &VAR_2);
 FUNC_1(VAR_4, ((void*)0));
 return ((void*)0);
}
