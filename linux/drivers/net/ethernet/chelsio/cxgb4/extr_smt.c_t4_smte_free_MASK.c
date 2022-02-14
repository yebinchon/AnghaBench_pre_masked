
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_entry {scalar_t__ refcnt; int state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct smt_entry *VAR_1)
{
 if (VAR_1->refcnt == 0) {
  VAR_1->state = VAR_0;
 }
}
