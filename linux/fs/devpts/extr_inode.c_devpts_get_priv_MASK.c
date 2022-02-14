
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {void* d_fsdata; TYPE_1__* d_sb; } ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 scalar_t__ VAR_0 ;

void *FUNC_0(struct dentry *VAR_1)
{
 if (VAR_1->d_sb->s_magic != VAR_0)
  return ((void*)0);
 return VAR_1->d_fsdata;
}
