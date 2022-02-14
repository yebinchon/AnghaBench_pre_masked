
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct adapter *VAR_4 = VAR_3;

 if (VAR_4->flags & VAR_0)
  FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 return VAR_1;
}
