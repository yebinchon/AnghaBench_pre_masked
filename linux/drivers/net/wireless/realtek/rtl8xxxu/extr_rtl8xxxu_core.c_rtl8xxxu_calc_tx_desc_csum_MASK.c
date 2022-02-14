
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8xxxu_txdesc32 {int csum; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rtl8xxxu_txdesc32 *VAR_0)
{
 __le16 *VAR_1 = (__le16 *)VAR_0;
 u16 VAR_2 = 0;
 int VAR_3;





 VAR_0->csum = FUNC_0(0);

 for (VAR_3 = 0; VAR_3 < (sizeof(struct rtl8xxxu_txdesc32) / sizeof(u16)); VAR_3++)
  VAR_2 = VAR_2 ^ FUNC_1(VAR_1[VAR_3]);

 VAR_0->csum |= FUNC_0(VAR_2);
}
