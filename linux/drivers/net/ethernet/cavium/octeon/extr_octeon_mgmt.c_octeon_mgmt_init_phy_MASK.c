
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct octeon_mgmt {int * phy_np; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct octeon_mgmt* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 struct phy_device* FUNC_3 (struct net_device*,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct octeon_mgmt *VAR_4 = FUNC_0(VAR_3);
 struct phy_device *VAR_5 = ((void*)0);

 if (FUNC_2() || VAR_4->phy_np == ((void*)0)) {

  FUNC_1(VAR_3);
  return 0;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4->phy_np,
    VAR_2, 0,
    VAR_1);

 if (!VAR_5)
  return -VAR_0;

 return 0;
}
