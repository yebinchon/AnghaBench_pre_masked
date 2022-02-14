
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int FUNC_0 (void*,char*,...) ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (struct adapter*,int) ;

void FUNC_3(void *VAR_0, struct adapter *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0x0; VAR_2 <= 0xff; VAR_2++) {
  if (VAR_2%16 == 0)
   FUNC_1(VAR_0, "0x%02x ", VAR_2);

  FUNC_0(VAR_0, "%02x ", FUNC_2(VAR_1, VAR_2));

  if (VAR_2%16 == 15)
   FUNC_0(VAR_0, "\n");
  else if (VAR_2%8 == 7)
   FUNC_0(VAR_0, "\t");
 }
}
