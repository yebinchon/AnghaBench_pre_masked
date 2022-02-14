
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_lock_res {scalar_t__ l_level; int l_lock; int l_lksb; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct user_lock_res ip_lockres; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_2,
   const char *VAR_3,
   unsigned int VAR_4)
{
 struct user_lock_res *VAR_5 = &FUNC_1(VAR_2)->ip_lockres;
 char *VAR_6;

 FUNC_0(VAR_4 > VAR_1);

 FUNC_4(&VAR_5->l_lock);

 FUNC_0(VAR_5->l_level < VAR_0);
 VAR_6 = FUNC_3(&VAR_5->l_lksb);
 FUNC_2(VAR_6, VAR_3, VAR_4);

 FUNC_5(&VAR_5->l_lock);
}
