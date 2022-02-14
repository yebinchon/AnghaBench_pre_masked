
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int flags; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  FUNC_0(&VAR_1->work);
  VAR_1->flags &= ~VAR_0;
 }
}
