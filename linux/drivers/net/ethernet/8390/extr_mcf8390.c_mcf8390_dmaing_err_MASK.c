
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int irqlock; int dmaing; } ;


 int FUNC_0 (struct net_device*,char*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, struct net_device *VAR_1,
          struct ei_device *VAR_2)
{
 FUNC_0(VAR_1, "%s: DMAing conflict [DMAstat:%d][irqlock:%d]\n",
  VAR_0, VAR_2->dmaing, VAR_2->irqlock);
}
