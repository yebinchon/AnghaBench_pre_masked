
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*,unsigned int) ;

__attribute__((used)) static inline
int FUNC_2(struct inode *VAR_4, struct dentry *VAR_5,
         unsigned int VAR_6)
{
 if (VAR_6 & (VAR_0 | VAR_2))
  return 0;
 if (FUNC_0(VAR_4)->flags & VAR_3)
  return 1;
 return !FUNC_1(VAR_4, VAR_5, VAR_6 & VAR_1);
}
