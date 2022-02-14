
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_lock_res {scalar_t__ l_level; int l_lock; int l_lksb; } ;
struct inode {int dummy; } ;
typedef unsigned int ssize_t ;
struct TYPE_2__ {struct user_lock_res ip_lockres; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (char*,char*,unsigned int) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

ssize_t FUNC_7(struct inode *VAR_2,
     char *VAR_3,
     unsigned int VAR_4)
{
 struct user_lock_res *VAR_5 = &FUNC_1(VAR_2)->ip_lockres;
 char *VAR_6;
 ssize_t VAR_7 = VAR_4;

 FUNC_0(VAR_4 > VAR_1);

 FUNC_5(&VAR_5->l_lock);

 FUNC_0(VAR_5->l_level < VAR_0);
 if (FUNC_4(&VAR_5->l_lksb)) {
  VAR_6 = FUNC_3(&VAR_5->l_lksb);
  FUNC_2(VAR_3, VAR_6, VAR_4);
 } else
  VAR_7 = 0;

 FUNC_6(&VAR_5->l_lock);
 return VAR_7;
}
