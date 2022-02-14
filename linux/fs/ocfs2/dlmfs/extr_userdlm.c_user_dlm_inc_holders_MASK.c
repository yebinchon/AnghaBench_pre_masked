
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_ro_holders; int l_ex_holders; } ;


 int FUNC_0 () ;



__attribute__((used)) static inline void FUNC_1(struct user_lock_res *VAR_0,
     int VAR_1)
{
 switch(VAR_1) {
 case 129:
  VAR_0->l_ex_holders++;
  break;
 case 128:
  VAR_0->l_ro_holders++;
  break;
 default:
  FUNC_0();
 }
}
