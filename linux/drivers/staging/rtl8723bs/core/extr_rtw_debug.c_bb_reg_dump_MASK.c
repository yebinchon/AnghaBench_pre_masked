
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int FUNC_0 (void*,char*,...) ;
 int FUNC_1 (void*,char*,...) ;
 int FUNC_2 (struct adapter*,int) ;

void FUNC_3(void *VAR_0, struct adapter *VAR_1)
{
 int VAR_2, VAR_3 = 1;

 FUNC_1(VAR_0, "======= BB REG =======\n");
 for (VAR_2 = 0x800; VAR_2 < 0x1000 ; VAR_2 += 4) {
  if (VAR_3%4 == 1)
   FUNC_1(VAR_0, "0x%03x", VAR_2);
  FUNC_0(VAR_0, " 0x%08x ", FUNC_2(VAR_1, VAR_2));
  if ((VAR_3++)%4 == 0)
   FUNC_0(VAR_0, "\n");
 }
}
