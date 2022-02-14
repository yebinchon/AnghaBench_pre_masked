
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int swintr; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct adapter *VAR_6 = VAR_5;
 u32 VAR_7 = FUNC_1(VAR_6, FUNC_0(VAR_3));

 if (VAR_7 & VAR_2) {
  VAR_6->swintr = 1;
  FUNC_3(VAR_6, FUNC_0(VAR_3), VAR_7);
 }
 if (VAR_6->flags & VAR_0)
  FUNC_2(VAR_6);
 return VAR_1;
}
