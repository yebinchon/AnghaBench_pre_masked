
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; int use_bd; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct adapter *VAR_1)
{
 return (VAR_1->flags & VAR_0) && !VAR_1->use_bd;
}
