
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303 {scalar_t__ phy_addr_base; } ;
struct dsa_switch {struct lan9303* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (struct lan9303*,int) ;
 int FUNC_2 (struct dsa_switch*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_2, int VAR_3)
{
 struct lan9303 *VAR_4 = VAR_2->priv;

 if (!FUNC_0(VAR_2, VAR_3))
  return;

 FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_2, VAR_4->phy_addr_base + VAR_3, VAR_1, VAR_0);
}
