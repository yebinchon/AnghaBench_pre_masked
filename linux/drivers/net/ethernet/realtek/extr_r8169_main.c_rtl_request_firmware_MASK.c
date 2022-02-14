
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_fw {int dev; scalar_t__ fw_name; int mac_mcu_read; int mac_mcu_write; int phy_read; int phy_write; } ;
struct rtl8169_private {struct rtl_fw* rtl_fw; scalar_t__ fw_name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_fw*) ;
 struct rtl_fw* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rtl8169_private*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct rtl_fw*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_5(struct rtl8169_private *VAR_6)
{
 struct rtl_fw *VAR_7;


 if (VAR_6->rtl_fw || !VAR_6->fw_name)
  return;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_2(VAR_6, VAR_1, VAR_6->dev, "Unable to load firmware, out of memory\n");
  return;
 }

 VAR_7->phy_write = VAR_5;
 VAR_7->phy_read = VAR_4;
 VAR_7->mac_mcu_write = VAR_3;
 VAR_7->mac_mcu_read = VAR_2;
 VAR_7->fw_name = VAR_6->fw_name;
 VAR_7->dev = FUNC_4(VAR_6);

 if (FUNC_3(VAR_7))
  FUNC_0(VAR_7);
 else
  VAR_6->rtl_fw = VAR_7;
}
