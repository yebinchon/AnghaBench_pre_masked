
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct rtl8169_private*,int *,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rtl8169_private *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_3, VAR_1, 0x0 | (VAR_4 & 0x1f) << 16);

 VAR_5 = FUNC_2(VAR_3, &VAR_2, 25, 20) ?
  FUNC_0(VAR_3, VAR_1) & 0xffff : -VAR_0;





 FUNC_3(20);

 return VAR_5;
}
