
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {scalar_t__ mac_version; TYPE_1__* dev; int cp_cmd; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int FUNC_3 (struct rtl8169_private*) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 scalar_t__ FUNC_8 (struct rtl8169_private*) ;
 int FUNC_9 (struct rtl8169_private*,int ) ;
 int FUNC_10 (struct rtl8169_private*) ;
 int FUNC_11 (struct rtl8169_private*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct rtl8169_private*) ;
 int FUNC_14 (struct rtl8169_private*) ;
 int FUNC_15 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_16(struct rtl8169_private *VAR_6)
{
 FUNC_15(VAR_6);

 VAR_6->cp_cmd &= VAR_0;
 FUNC_1(VAR_6, VAR_1, VAR_6->cp_cmd);

 if (VAR_6->mac_version <= VAR_5)
  FUNC_5(VAR_6);
 else if (FUNC_8(VAR_6))
  FUNC_3(VAR_6);
 else
  FUNC_4(VAR_6);

 FUNC_11(VAR_6);
 FUNC_13(VAR_6);
 FUNC_10(VAR_6);

 FUNC_9(VAR_6, VAR_6->dev->mtu);


 FUNC_0(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_2, VAR_4 | VAR_3);
 FUNC_6(VAR_6);
 FUNC_14(VAR_6);
 FUNC_12(VAR_6->dev);
 FUNC_7(VAR_6);
}
