
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmstb_waketmr {int irq; struct device* dev; } ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct brcmstb_waketmr *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2 = 0;

 if (FUNC_1(VAR_1)) {
  VAR_2 = FUNC_2(VAR_0->irq);
  if (VAR_2) {
   FUNC_0(VAR_1, "failed to enable wake-up interrupt\n");
   return VAR_2;
  }
 }

 return VAR_2;
}
