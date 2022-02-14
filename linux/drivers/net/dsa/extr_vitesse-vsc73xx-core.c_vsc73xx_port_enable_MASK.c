
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsc73xx {int dev; } ;
struct phy_device {int dummy; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vsc73xx*,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_0, int VAR_1,
          struct phy_device *VAR_2)
{
 struct vsc73xx *VAR_3 = VAR_0->priv;

 FUNC_0(VAR_3->dev, "enable port %d\n", VAR_1);
 FUNC_1(VAR_3, VAR_1);

 return 0;
}
