
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct amd8111e_priv {int ext_phy_id; int ext_phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amd8111e_priv*,int,int ,int*) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct amd8111e_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = 0x1e; VAR_4 >= 0; VAR_4--) {
  u32 VAR_5, VAR_6;

  if (FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_5))
   continue;
  if (FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_6))
   continue;
  VAR_3->ext_phy_id = (VAR_5 << 16) | VAR_6;
  VAR_3->ext_phy_addr = VAR_4;
  return;
 }
 VAR_3->ext_phy_id = 0;
 VAR_3->ext_phy_addr = 1;
}
