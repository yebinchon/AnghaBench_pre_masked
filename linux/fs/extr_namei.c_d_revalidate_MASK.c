
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_flags; TYPE_1__* d_op; } ;
struct TYPE_2__ {int (* d_revalidate ) (struct dentry*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct dentry *VAR_1, unsigned int VAR_2)
{
 if (FUNC_1(VAR_1->d_flags & VAR_0))
  return VAR_1->d_op->d_revalidate(VAR_1, VAR_2);
 else
  return 1;
}
