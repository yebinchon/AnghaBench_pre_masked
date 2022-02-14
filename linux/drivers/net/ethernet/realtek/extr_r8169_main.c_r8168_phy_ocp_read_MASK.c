
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8169_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct rtl8169_private*,int) ;
 scalar_t__ FUNC_3 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static int FUNC_4(struct rtl8169_private *VAR_3, u32 VAR_4)
{
 if (FUNC_2(VAR_3, VAR_4))
  return 0;

 FUNC_1(VAR_3, VAR_1, VAR_4 << 15);

 return FUNC_3(VAR_3, &VAR_2, 25, 10) ?
  (FUNC_0(VAR_3, VAR_1) & 0xffff) : -VAR_0;
}
