
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
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static u32 FUNC_3(struct rtl8169_private *VAR_3, u8 VAR_4, u16 VAR_5)
{
 FUNC_1(VAR_3, VAR_0, ((u32)VAR_4 & 0x0f) << 12 | (VAR_5 & 0x0fff));
 return FUNC_2(VAR_3, &VAR_2, 100, 20) ?
  FUNC_0(VAR_3, VAR_1) : ~0;
}
