
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dev; struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct b53_device*,int) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct dsa_switch *VAR_0, int VAR_1)
{
 struct b53_device *VAR_2 = VAR_0->priv;

 if (FUNC_0(VAR_2, VAR_1))
  FUNC_1(VAR_0->dev, "fast ageing failed\n");
}
