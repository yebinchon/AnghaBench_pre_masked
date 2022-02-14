
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_exch {int ex_refcnt; int timeout_work; } ;


 int FUNC_0 (struct fc_exch*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct fc_exch *VAR_0)
{
 if (FUNC_2(&VAR_0->timeout_work)) {
  FUNC_0(VAR_0, "Exchange timer canceled\n");
  FUNC_1(&VAR_0->ex_refcnt);
 }
}
