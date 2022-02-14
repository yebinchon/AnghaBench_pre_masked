
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pluto {int i2cbug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pluto*,int ,int ,int ) ;
 int FUNC_1 (struct pluto*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, int VAR_3)
{
 struct pluto *VAR_4 = VAR_2;

 if (VAR_3)
  FUNC_0(VAR_4, VAR_0, VAR_1, VAR_1);
 else
  FUNC_0(VAR_4, VAR_0, VAR_1, 0);



 if ((VAR_3) && (VAR_4->i2cbug == 0)) {
  VAR_4->i2cbug = 1;
 } else {
  if ((!VAR_3) && (VAR_4->i2cbug == 1))
   FUNC_1(VAR_4, 1);
  VAR_4->i2cbug = 0;
 }
}
