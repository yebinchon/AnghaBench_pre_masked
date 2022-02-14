
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;

void FUNC_2(void)
{
 int VAR_1;
 unsigned long VAR_2 = VAR_0;

 for (VAR_1 = FUNC_0(VAR_2); VAR_1; VAR_1 = FUNC_0(VAR_2)) {

  VAR_1--;
  VAR_2 &= ~(1 << VAR_1);
  FUNC_1(VAR_1);
 }
}
