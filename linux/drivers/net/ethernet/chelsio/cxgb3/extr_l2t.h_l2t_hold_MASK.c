
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {int refcnt; } ;
struct l2t_data {int nfree; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct l2t_data *VAR_0, struct l2t_entry *VAR_1)
{
 if (VAR_0 && FUNC_0(1, &VAR_1->refcnt) == 1)
  FUNC_1(&VAR_0->nfree);
}
