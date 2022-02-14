
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {int vpcie12v; int vpcie3v3; int vpcie1v8; int vpcie0v9; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pcie *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2;

 if (!FUNC_0(VAR_0->vpcie12v)) {
  VAR_2 = FUNC_3(VAR_0->vpcie12v);
  if (VAR_2) {
   FUNC_1(VAR_1, "fail to enable vpcie12v regulator\n");
   goto err_out;
  }
 }

 if (!FUNC_0(VAR_0->vpcie3v3)) {
  VAR_2 = FUNC_3(VAR_0->vpcie3v3);
  if (VAR_2) {
   FUNC_1(VAR_1, "fail to enable vpcie3v3 regulator\n");
   goto err_disable_12v;
  }
 }

 if (!FUNC_0(VAR_0->vpcie1v8)) {
  VAR_2 = FUNC_3(VAR_0->vpcie1v8);
  if (VAR_2) {
   FUNC_1(VAR_1, "fail to enable vpcie1v8 regulator\n");
   goto err_disable_3v3;
  }
 }

 if (!FUNC_0(VAR_0->vpcie0v9)) {
  VAR_2 = FUNC_3(VAR_0->vpcie0v9);
  if (VAR_2) {
   FUNC_1(VAR_1, "fail to enable vpcie0v9 regulator\n");
   goto err_disable_1v8;
  }
 }

 return 0;

err_disable_1v8:
 if (!FUNC_0(VAR_0->vpcie1v8))
  FUNC_2(VAR_0->vpcie1v8);
err_disable_3v3:
 if (!FUNC_0(VAR_0->vpcie3v3))
  FUNC_2(VAR_0->vpcie3v3);
err_disable_12v:
 if (!FUNC_0(VAR_0->vpcie12v))
  FUNC_2(VAR_0->vpcie12v);
err_out:
 return VAR_2;
}
