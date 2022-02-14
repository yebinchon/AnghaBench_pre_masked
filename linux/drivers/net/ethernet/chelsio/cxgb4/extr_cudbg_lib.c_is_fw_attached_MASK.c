
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_init {struct adapter* adap; } ;
struct adapter {int flags; scalar_t__ use_bd; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cudbg_init *VAR_1)
{
 struct adapter *VAR_2 = VAR_1->adap;

 if (!(VAR_2->flags & VAR_0) || VAR_2->use_bd)
  return 0;

 return 1;
}
