
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack {int plength; int found; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipack*) ;
 int FUNC_1 (struct ipack*) ;

void FUNC_2(struct ipack *VAR_1)
{
 if (VAR_1->plength != VAR_0 - 6 || VAR_1->found <= 6)
  return;
 VAR_1->plength = VAR_1->found - 6;
 VAR_1->found = 0;
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
