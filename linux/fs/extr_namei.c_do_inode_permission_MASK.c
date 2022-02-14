
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_opflags; int i_lock; TYPE_1__* i_op; } ;
struct TYPE_2__ {int (* permission ) (struct inode*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int) ;
 scalar_t__ FUNC_1 (int (*) (struct inode*,int)) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct inode *VAR_1, int VAR_2)
{
 if (FUNC_5(!(VAR_1->i_opflags & VAR_0))) {
  if (FUNC_1(VAR_1->i_op->permission))
   return VAR_1->i_op->permission(VAR_1, VAR_2);


  FUNC_2(&VAR_1->i_lock);
  VAR_1->i_opflags |= VAR_0;
  FUNC_3(&VAR_1->i_lock);
 }
 return FUNC_0(VAR_1, VAR_2);
}
