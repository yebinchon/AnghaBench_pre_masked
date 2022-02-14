
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int km_diag; int km_msg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
 int VAR_3;

 if (VAR_2 >= 0) {
  FUNC_0("no error detected (diagnostic is %d)\n", VAR_2);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].km_diag == VAR_2) {
   FUNC_0("diag: %d: %s\n", VAR_2, VAR_1[VAR_3].km_msg);
   return;
  }
 }

 FUNC_0("Unknown diag %d\n", -VAR_2);
}
