
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {int l1_master_cdn_o; int cmu_master_cdn_o; int config_version; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 struct serdes_am654* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_1)
{
 struct serdes_am654 *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->config_version, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->cmu_master_cdn_o, 0x1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->l1_master_cdn_o, 0x1);
 if (VAR_3)
  return VAR_3;

 return 0;
}
