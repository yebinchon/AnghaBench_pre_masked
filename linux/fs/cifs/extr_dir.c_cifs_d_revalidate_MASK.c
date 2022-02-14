
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_flags; int d_lock; } ;
struct TYPE_3__ {scalar_t__ time; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct dentry *VAR_9, unsigned int VAR_10)
{
 struct inode *VAR_11;

 if (VAR_10 & VAR_4)
  return -VAR_1;

 if (FUNC_6(VAR_9)) {
  VAR_11 = FUNC_5(VAR_9);
  if ((VAR_10 & VAR_6) && !FUNC_0(FUNC_1(VAR_11)))
   FUNC_1(VAR_11)->time = 0;

  if (FUNC_4(VAR_9))
   return 0;
  else {







   if (FUNC_2(VAR_11) &&
      !(VAR_9->d_flags & VAR_0)) {
    FUNC_7(&VAR_9->d_lock);
    VAR_9->d_flags |= VAR_0;
    FUNC_8(&VAR_9->d_lock);
   }

   return 1;
  }
 }





 if (!VAR_10)
  return 0;






 if (VAR_10 & (VAR_3 | VAR_5))
  return 0;

 if (FUNC_9(VAR_7, FUNC_3(VAR_9) + VAR_2) || !VAR_8)
  return 0;

 return 1;
}
