
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
typedef scalar_t__ phy_interface_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gswip_priv*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dsa_switch *VAR_2, int VAR_3,
          unsigned int VAR_4,
          phy_interface_t VAR_5,
          struct phy_device *VAR_6)
{
 struct gswip_priv *VAR_7 = VAR_2->priv;


 if (VAR_5 != VAR_1)
  FUNC_0(VAR_7, 0, VAR_0, VAR_3);
}
