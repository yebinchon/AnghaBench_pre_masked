
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pcie_port {scalar_t__ base; int index; TYPE_1__* pcie; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct device*,char*,int ) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tegra_pcie_port*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct tegra_pcie_port *VAR_8)
{
 struct device *VAR_9 = VAR_8->pcie->dev;
 unsigned int VAR_10 = 3;
 unsigned long VAR_11;


 VAR_11 = FUNC_1(VAR_8->base + VAR_2);
 VAR_11 &= ~VAR_3;
 VAR_11 |= VAR_4;
 FUNC_4(VAR_11, VAR_8->base + VAR_2);

 do {
  unsigned int VAR_12 = VAR_7;

  do {
   VAR_11 = FUNC_1(VAR_8->base + VAR_5);

   if (VAR_11 & VAR_6)
    break;

   FUNC_3(1000, 2000);
  } while (--VAR_12);

  if (!VAR_12) {
   FUNC_0(VAR_9, "link %u down, retrying\n", VAR_8->index);
   goto retry;
  }

  VAR_12 = VAR_7;

  do {
   VAR_11 = FUNC_1(VAR_8->base + VAR_0);

   if (VAR_11 & VAR_1)
    return 1;

   FUNC_3(1000, 2000);
  } while (--VAR_12);

retry:
  FUNC_2(VAR_8);
 } while (--VAR_10);

 return 0;
}
