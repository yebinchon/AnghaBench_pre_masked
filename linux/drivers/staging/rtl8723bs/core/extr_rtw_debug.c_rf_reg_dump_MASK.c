
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (void*,char*,...) ;
 int FUNC_1 (void*,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_3 (struct adapter*,int,int,int) ;

void FUNC_4(void *VAR_3, struct adapter *VAR_4)
{
 int VAR_5, VAR_6 = 1, VAR_7;
 u32 VAR_8;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;

 FUNC_2(VAR_4, VAR_0, (u8 *)(&VAR_9));
 if ((VAR_2 == VAR_9) || (VAR_1 == VAR_9))
  VAR_10 = 1;
 else
  VAR_10 = 2;

 FUNC_1(VAR_3, "======= RF REG =======\n");

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  FUNC_1(VAR_3, "RF_Path(%x)\n", VAR_7);
  for (VAR_5 = 0; VAR_5 < 0x100; VAR_5++) {
   VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_5, 0xffffffff);
   if (VAR_6%4 == 1)
    FUNC_1(VAR_3, "0x%02x ", VAR_5);
   FUNC_0(VAR_3, " 0x%08x ", VAR_8);
   if ((VAR_6++)%4 == 0)
    FUNC_0(VAR_3, "\n");
  }
 }
}
