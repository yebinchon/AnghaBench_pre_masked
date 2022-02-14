
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdio_func {int dummy; } ;
struct ks_wlan_private {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_4(struct sdio_func *VAR_5,
      struct ks_wlan_private *VAR_6)
{
 u8 VAR_7;
 int VAR_8;






 FUNC_2(VAR_5);
 VAR_8 = FUNC_0(VAR_6, VAR_2, 0xff);
 FUNC_3(VAR_5);
 if (VAR_8)
  FUNC_1(VAR_6->net_dev, "write INT_PENDING_REG\n");


 VAR_7 = (VAR_1 | VAR_3 | VAR_4);
 FUNC_2(VAR_5);
 VAR_8 = FUNC_0(VAR_6, VAR_0, VAR_7);
 FUNC_3(VAR_5);
 if (VAR_8)
  FUNC_1(VAR_6->net_dev, "write INT_ENABLE_REG\n");
}
