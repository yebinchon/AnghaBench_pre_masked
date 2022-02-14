
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_dest {struct db_dest* pnext; } ;
struct au1000_private {struct db_dest* pDBfree; } ;



void FUNC_0(struct au1000_private *VAR_0, struct db_dest *VAR_1)
{
 struct db_dest *VAR_2 = VAR_0->pDBfree;
 if (VAR_2)
  VAR_2->pnext = VAR_1;
 VAR_0->pDBfree = VAR_1;
}
