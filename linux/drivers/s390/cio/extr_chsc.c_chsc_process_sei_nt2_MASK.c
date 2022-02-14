
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_nt2_area {int cc; int ccdf; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct chsc_sei_nt2_area *VAR_0)
{
 switch (VAR_0->cc) {
 case 1:
  FUNC_2(VAR_0->ccdf);
  break;
 case 2:
  FUNC_1(VAR_0->ccdf);
  break;
 default:
  FUNC_0(2, "chsc: sei nt2 unhandled cc=%d\n",
         VAR_0->cc);
  break;
 }
}
