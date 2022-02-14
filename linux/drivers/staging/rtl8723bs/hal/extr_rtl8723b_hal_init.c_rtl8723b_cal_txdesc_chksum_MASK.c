
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tx_desc {int txdw7; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tx_desc *VAR_0)
{
 u16 *VAR_1 = (u16 *)VAR_0;
 u32 VAR_2;
 u32 VAR_3;
 u16 VAR_4 = 0;



 VAR_0->txdw7 &= FUNC_0(0xffff0000);




 VAR_2 = 16;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 |= FUNC_1(*(__le16 *)(VAR_1 + VAR_3));
 }

 VAR_0->txdw7 |= FUNC_0(VAR_4 & 0x0000ffff);
}
