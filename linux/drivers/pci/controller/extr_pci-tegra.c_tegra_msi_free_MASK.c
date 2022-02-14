
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct tegra_msi {int lock; int used; TYPE_1__ chip; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct tegra_msi *VAR_0, unsigned long VAR_1)
{
 struct device *VAR_2 = VAR_0->chip.dev;

 FUNC_2(&VAR_0->lock);

 if (!FUNC_4(VAR_1, VAR_0->used))
  FUNC_1(VAR_2, "trying to free unused MSI#%lu\n", VAR_1);
 else
  FUNC_0(VAR_1, VAR_0->used);

 FUNC_3(&VAR_0->lock);
}
