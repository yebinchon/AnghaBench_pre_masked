
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct budget {int dummy; } ;


 int FUNC_0 (struct budget*,int) ;
 int FUNC_1 (int,char*,struct budget*) ;

__attribute__((used)) static void FUNC_2 (struct budget *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3=1, VAR_4;

 FUNC_1(2, "budget: %p\n", VAR_0);

 for (VAR_2=7; VAR_2>=0; VAR_2--) {
  VAR_4 = (VAR_1>>VAR_2)&1;
  VAR_3 ^= VAR_4;
  FUNC_0(VAR_0, VAR_4);
 }

 FUNC_0(VAR_0, VAR_3);
}
