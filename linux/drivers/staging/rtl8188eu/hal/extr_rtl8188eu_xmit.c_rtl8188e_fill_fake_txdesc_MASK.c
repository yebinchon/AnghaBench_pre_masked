
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct tx_desc {int txdw4; int txdw2; int txdw3; int txdw1; int txdw0; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (struct tx_desc*) ;

void FUNC_4(struct adapter *VAR_9, u8 *VAR_10, u32 VAR_11, u8 VAR_12, u8 VAR_13)
{
 struct tx_desc *VAR_14;


 VAR_14 = (struct tx_desc *)VAR_10;
 FUNC_2(VAR_10, 0, VAR_8);


 VAR_14->txdw0 |= FUNC_1(VAR_5 | VAR_0 | VAR_1);

 VAR_14->txdw0 |= FUNC_1(((VAR_8+VAR_4)<<VAR_3)&0x00ff0000);

 VAR_14->txdw0 |= FUNC_1(VAR_11&0x0000ffff);


 VAR_14->txdw1 |= FUNC_1((VAR_7<<VAR_6)&0x00001f00);


 if (VAR_12) {
  VAR_14->txdw1 |= FUNC_1(VAR_2);
 } else {
  VAR_14->txdw4 |= FUNC_1(FUNC_0(7));
  VAR_14->txdw3 |= FUNC_1((8 << 28));
 }

 if (VAR_13)
  VAR_14->txdw2 |= FUNC_1(FUNC_0(23));


 VAR_14->txdw4 |= FUNC_1(FUNC_0(8));



 FUNC_3(VAR_14);
}
