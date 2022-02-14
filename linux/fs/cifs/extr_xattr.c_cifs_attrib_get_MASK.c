
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;
typedef int __u32 ;
struct TYPE_2__ {int cifsAttrs; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_1,
      struct inode *VAR_2, void *VAR_3,
      size_t VAR_4)
{
 ssize_t VAR_5;
 __u32 *VAR_6;

 VAR_5 = FUNC_1(VAR_1);

 if (VAR_5)
  return VAR_5;

 if ((VAR_3 == ((void*)0)) || (VAR_4 == 0))
  return sizeof(__u32);
 else if (VAR_4 < sizeof(__u32))
  return -VAR_0;


 VAR_6 = (__u32 *)VAR_3;
 *VAR_6 = FUNC_0(VAR_2)->cifsAttrs;

 return sizeof(__u32);
}
