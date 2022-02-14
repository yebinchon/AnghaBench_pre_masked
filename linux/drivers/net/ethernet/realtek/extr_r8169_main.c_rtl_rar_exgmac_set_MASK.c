
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl8169_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int,int ,int const) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_1, u8 *VAR_2)
{
 const u16 VAR_3[] = {
  VAR_2[0] | (VAR_2[1] << 8),
  VAR_2[2] | (VAR_2[3] << 8),
  VAR_2[4] | (VAR_2[5] << 8)
 };

 FUNC_0(VAR_1, 0xe0, VAR_0, VAR_3[0] | (VAR_3[1] << 16));
 FUNC_0(VAR_1, 0xe4, VAR_0, VAR_3[2]);
 FUNC_0(VAR_1, 0xf0, VAR_0, VAR_3[0] << 16);
 FUNC_0(VAR_1, 0xf4, VAR_0, VAR_3[1] | (VAR_3[2] << 16));
}
