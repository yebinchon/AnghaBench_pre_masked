
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct dentry {int d_flags; TYPE_2__ d_lockref; TYPE_1__* d_op; } ;
struct TYPE_3__ {scalar_t__ (* d_delete ) (struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline bool FUNC_6(struct dentry *VAR_4)
{
 FUNC_0(FUNC_1(VAR_4));


 if (FUNC_5(FUNC_3(VAR_4)))
  return 0;

 if (FUNC_5(VAR_4->d_flags & VAR_0))
  return 0;

 if (FUNC_5(VAR_4->d_flags & VAR_2)) {
  if (VAR_4->d_op->d_delete(VAR_4))
   return 0;
 }

 VAR_4->d_lockref.count--;
 if (FUNC_5(!(VAR_4->d_flags & VAR_1)))
  FUNC_2(VAR_4);
 else if (FUNC_5(!(VAR_4->d_flags & VAR_3)))
  VAR_4->d_flags |= VAR_3;
 return 1;
}
