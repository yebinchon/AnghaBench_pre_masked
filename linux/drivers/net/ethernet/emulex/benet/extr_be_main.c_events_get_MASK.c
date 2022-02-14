
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_eq_obj {int q; } ;
struct be_eq_entry {scalar_t__ evt; } ;


 int FUNC_0 (int *) ;
 struct be_eq_entry* FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(struct be_eq_obj *VAR_0)
{
 struct be_eq_entry *VAR_1;
 int VAR_2 = 0;

 do {
  VAR_1 = FUNC_1(&VAR_0->q);
  if (VAR_1->evt == 0)
   break;

  FUNC_2();
  VAR_1->evt = 0;
  VAR_2++;
  FUNC_0(&VAR_0->q);
 } while (1);

 return VAR_2;
}
