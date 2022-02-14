
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_nt0_area {int rs; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct chsc_sei_nt0_area *VAR_0)
{
 FUNC_0(3, "chsc: ap config changed\n");
 if (VAR_0->rs != 5)
  return;

 FUNC_1();
}
