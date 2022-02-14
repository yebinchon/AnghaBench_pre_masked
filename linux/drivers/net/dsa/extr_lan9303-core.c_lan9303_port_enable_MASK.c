
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct lan9303 {int dummy; } ;
struct dsa_switch {struct lan9303* priv; } ;


 int FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (struct lan9303*,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_0, int VAR_1,
          struct phy_device *VAR_2)
{
 struct lan9303 *VAR_3 = VAR_0->priv;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 return FUNC_1(VAR_3, VAR_1);
}
