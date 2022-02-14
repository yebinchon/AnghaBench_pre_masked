
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_blocking; int l_ex_holders; int l_ro_holders; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int FUNC_1 (struct ocfs2_super*) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_super *VAR_1,
     struct ocfs2_lock_res *VAR_2)
{
 int VAR_3 = 0;




 if (VAR_2->l_flags & VAR_0) {
  switch(VAR_2->l_blocking) {
  case 129:
   if (!VAR_2->l_ex_holders && !VAR_2->l_ro_holders)
    VAR_3 = 1;
   break;
  case 128:
   if (!VAR_2->l_ex_holders)
    VAR_3 = 1;
   break;
  default:
   FUNC_0();
  }
 }

 if (VAR_3)
  FUNC_1(VAR_1);
}
