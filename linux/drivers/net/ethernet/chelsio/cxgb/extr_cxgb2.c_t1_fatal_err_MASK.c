
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; int name; int sge; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct adapter *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  FUNC_2(VAR_1->sge);
  FUNC_1(VAR_1);
 }
 FUNC_0("%s: encountered fatal error, operation suspended\n",
   VAR_1->name);
}
