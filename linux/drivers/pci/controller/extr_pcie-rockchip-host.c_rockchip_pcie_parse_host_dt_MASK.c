
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {void* vpcie0v9; void* vpcie1v8; void* vpcie3v3; void* vpcie12v; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct rockchip_pcie*) ;
 int FUNC_5 (struct rockchip_pcie*) ;

__attribute__((used)) static int FUNC_6(struct rockchip_pcie *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_1->vpcie12v = FUNC_3(VAR_2, "vpcie12v");
 if (FUNC_0(VAR_1->vpcie12v)) {
  if (FUNC_1(VAR_1->vpcie12v) != -VAR_0)
   return FUNC_1(VAR_1->vpcie12v);
  FUNC_2(VAR_2, "no vpcie12v regulator found\n");
 }

 VAR_1->vpcie3v3 = FUNC_3(VAR_2, "vpcie3v3");
 if (FUNC_0(VAR_1->vpcie3v3)) {
  if (FUNC_1(VAR_1->vpcie3v3) != -VAR_0)
   return FUNC_1(VAR_1->vpcie3v3);
  FUNC_2(VAR_2, "no vpcie3v3 regulator found\n");
 }

 VAR_1->vpcie1v8 = FUNC_3(VAR_2, "vpcie1v8");
 if (FUNC_0(VAR_1->vpcie1v8)) {
  if (FUNC_1(VAR_1->vpcie1v8) != -VAR_0)
   return FUNC_1(VAR_1->vpcie1v8);
  FUNC_2(VAR_2, "no vpcie1v8 regulator found\n");
 }

 VAR_1->vpcie0v9 = FUNC_3(VAR_2, "vpcie0v9");
 if (FUNC_0(VAR_1->vpcie0v9)) {
  if (FUNC_1(VAR_1->vpcie0v9) != -VAR_0)
   return FUNC_1(VAR_1->vpcie0v9);
  FUNC_2(VAR_2, "no vpcie0v9 regulator found\n");
 }

 return 0;
}
