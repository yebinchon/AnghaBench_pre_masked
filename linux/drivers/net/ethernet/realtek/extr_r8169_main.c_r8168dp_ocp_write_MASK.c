
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8169_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8169_private*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_4, u8 VAR_5, u16 VAR_6,
         u32 VAR_7)
{
 FUNC_0(VAR_4, VAR_2, VAR_7);
 FUNC_0(VAR_4, VAR_0, VAR_1 | ((u32)VAR_5 & 0x0f) << 12 | (VAR_6 & 0x0fff));
 FUNC_1(VAR_4, &VAR_3, 100, 20);
}
