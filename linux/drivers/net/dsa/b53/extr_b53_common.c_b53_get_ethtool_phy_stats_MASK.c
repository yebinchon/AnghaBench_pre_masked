
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct phy_device {int dummy; } ;
struct dsa_switch {int dummy; } ;


 struct phy_device* FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (struct phy_device*,int *,int *) ;

void FUNC_2(struct dsa_switch *VAR_0, int VAR_1, uint64_t *VAR_2)
{
 struct phy_device *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3, ((void*)0), VAR_2);
}
