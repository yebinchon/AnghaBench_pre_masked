
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct file_lock*,int *) ;
 int FUNC_3 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, int VAR_4, struct file_lock *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (FUNC_0(FUNC_1(VAR_3)->i_sb)->flags & VAR_2) {
  if (VAR_4 == VAR_1) {
   VAR_6 = 0;
   FUNC_3(VAR_3, VAR_5);
  } else {
   VAR_6 = FUNC_2(VAR_3, VAR_5, ((void*)0));
  }
 }

 return VAR_6;
}
