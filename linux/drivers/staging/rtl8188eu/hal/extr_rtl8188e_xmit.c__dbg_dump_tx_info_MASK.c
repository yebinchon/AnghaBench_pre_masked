
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tx_desc {int txdw7; int txdw6; int txdw5; int txdw4; int txdw3; int txdw2; int txdw1; int txdw0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,int ,int*) ;

void FUNC_2(struct adapter *VAR_3, int VAR_4,
         struct tx_desc *VAR_5)
{
 u8 VAR_6;
 bool VAR_7 = 0;

 FUNC_1(VAR_3, VAR_1, &(VAR_6));

 if (VAR_6 == 1) {
  FUNC_0("dump tx_desc for data frame\n");
  if ((VAR_4 & 0x0f) == VAR_0)
   VAR_7 = 1;
 } else if (VAR_6 == 2) {
  FUNC_0("dump tx_desc for mgnt frame\n");
  if ((VAR_4 & 0x0f) == VAR_2)
   VAR_7 = 1;
 }

 if (VAR_7) {
  FUNC_0("=====================================\n");
  FUNC_0("txdw0(0x%08x)\n", VAR_5->txdw0);
  FUNC_0("txdw1(0x%08x)\n", VAR_5->txdw1);
  FUNC_0("txdw2(0x%08x)\n", VAR_5->txdw2);
  FUNC_0("txdw3(0x%08x)\n", VAR_5->txdw3);
  FUNC_0("txdw4(0x%08x)\n", VAR_5->txdw4);
  FUNC_0("txdw5(0x%08x)\n", VAR_5->txdw5);
  FUNC_0("txdw6(0x%08x)\n", VAR_5->txdw6);
  FUNC_0("txdw7(0x%08x)\n", VAR_5->txdw7);
  FUNC_0("=====================================\n");
 }
}
