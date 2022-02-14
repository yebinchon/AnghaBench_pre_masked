
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct keystone_pcie {int dummy; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct keystone_pcie*,int ) ;
 int FUNC_3 (struct keystone_pcie*,int ,int) ;
 struct keystone_pcie* FUNC_4 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_5(struct dw_pcie *VAR_2)
{
 struct keystone_pcie *VAR_3 = FUNC_4(VAR_2);
 struct device *VAR_4 = VAR_2->dev;
 u32 VAR_5;

 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_4, "link is already up\n");
  return 0;
 }


 VAR_5 = FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_0, VAR_1 | VAR_5);

 return 0;
}
