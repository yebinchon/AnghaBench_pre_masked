
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc3589x {int domain; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct tc3589x*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct tc3589x *VAR_5 = VAR_4;
 int VAR_6;

again:
 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6 < 0)
  return VAR_1;

 while (VAR_6) {
  int VAR_7 = FUNC_0(VAR_6);
  int VAR_8 = FUNC_2(VAR_5->domain, VAR_7);

  FUNC_1(VAR_8);
  VAR_6 &= ~(1 << VAR_7);
 }







 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6)
  goto again;

 return VAR_0;
}
