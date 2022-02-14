
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int FUNC_0 (struct gswip_priv*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dsa_switch *VAR_1, int VAR_2,
     unsigned int VAR_3,
     phy_interface_t VAR_4)
{
 struct gswip_priv *VAR_5 = VAR_1->priv;

 FUNC_0(VAR_5, VAR_0, 0, VAR_2);
}
