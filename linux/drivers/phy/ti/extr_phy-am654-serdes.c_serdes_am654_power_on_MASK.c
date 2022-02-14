
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct serdes_am654 {int cmu_ok_i_0; struct device* dev; } ;
struct phy {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct serdes_am654* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct serdes_am654*) ;
 int FUNC_4 (struct serdes_am654*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_2)
{
 struct serdes_am654 *VAR_3 = FUNC_1(VAR_2);
 struct device *VAR_4 = VAR_3->dev;
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_4, "Failed to enable PLL\n");
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_4, "Failed to enable TX RX\n");
  return VAR_5;
 }

 return FUNC_2(VAR_3->cmu_ok_i_0, VAR_6, VAR_6,
           VAR_1, VAR_0);
}
