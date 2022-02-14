
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsc8531_private {int nstats; } ;
struct phy_device {struct vsc8531_private* priv; } ;



__attribute__((used)) static int FUNC_0(struct phy_device *VAR_0)
{
 struct vsc8531_private *VAR_1 = VAR_0->priv;

 if (!VAR_1)
  return 0;

 return VAR_1->nstats;
}
