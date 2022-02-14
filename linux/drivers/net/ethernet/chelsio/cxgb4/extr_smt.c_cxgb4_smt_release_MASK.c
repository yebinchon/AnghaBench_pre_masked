
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_entry {scalar_t__ refcnt; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smt_entry*) ;

void FUNC_3(struct smt_entry *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 if ((--VAR_0->refcnt) == 0)
  FUNC_2(VAR_0);
 FUNC_1(&VAR_0->lock);
}
