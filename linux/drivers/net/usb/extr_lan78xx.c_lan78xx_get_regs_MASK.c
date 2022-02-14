
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int phydev; } ;
struct lan78xx_net {int dummy; } ;
struct ethtool_regs {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lan78xx_net*,int ,int *) ;
 int * VAR_0 ;
 struct lan78xx_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
   void *VAR_3)
{
 u32 *VAR_4 = VAR_3;
 int VAR_5, VAR_6;
 struct lan78xx_net *VAR_7 = FUNC_2(VAR_1);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  FUNC_1(VAR_7, VAR_0[VAR_5], &VAR_4[VAR_5]);

 if (!VAR_1->phydev)
  return;


 for (VAR_6 = 0; VAR_6 < 32; VAR_5++, VAR_6++)
  VAR_4[VAR_5] = FUNC_3(VAR_1->phydev, VAR_6);
}
