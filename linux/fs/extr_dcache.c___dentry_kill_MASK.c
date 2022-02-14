
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_flags; int d_lock; TYPE_1__* d_op; scalar_t__ d_inode; int d_lockref; struct dentry* d_parent; } ;
struct TYPE_2__ {int (* d_release ) (struct dentry*) ;int (* d_prune ) (struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct dentry*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct dentry *VAR_5)
{
 struct dentry *VAR_6 = ((void*)0);
 bool VAR_7 = 1;
 if (!FUNC_0(VAR_5))
  VAR_6 = VAR_5->d_parent;




 FUNC_8(&VAR_5->d_lockref);





 if (VAR_5->d_flags & VAR_2)
  VAR_5->d_op->d_prune(VAR_5);

 if (VAR_5->d_flags & VAR_0) {
  if (!(VAR_5->d_flags & VAR_3))
   FUNC_3(VAR_5);
 }

 FUNC_1(VAR_5);
 FUNC_6(VAR_5, VAR_6);
 if (VAR_6)
  FUNC_10(&VAR_6->d_lock);
 if (VAR_5->d_inode)
  FUNC_5(VAR_5);
 else
  FUNC_10(&VAR_5->d_lock);
 FUNC_13(VAR_4);
 if (VAR_5->d_op && VAR_5->d_op->d_release)
  VAR_5->d_op->d_release(VAR_5);

 FUNC_9(&VAR_5->d_lock);
 if (VAR_5->d_flags & VAR_3) {
  VAR_5->d_flags |= VAR_1;
  VAR_7 = 0;
 }
 FUNC_10(&VAR_5->d_lock);
 if (FUNC_7(VAR_7))
  FUNC_4(VAR_5);
 FUNC_2();
}
