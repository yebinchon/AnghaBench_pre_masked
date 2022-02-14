
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct adapter *VAR_6 = VAR_5;

 FUNC_3(VAR_6, FUNC_0(VAR_3), 0);
 if (((VAR_6->flags & VAR_0) && FUNC_2(VAR_6)) |
     FUNC_1(VAR_6))
  return VAR_1;
 return VAR_2;
}
