
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_msi {int used; int domain; } ;
struct tegra_pcie {struct tegra_msi msi; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct tegra_pcie*,scalar_t__) ;
 int FUNC_1 (struct tegra_pcie*,int,scalar_t__) ;
 int FUNC_2 (struct device*,char*) ;
 unsigned int FUNC_3 (unsigned long*,int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct tegra_pcie *VAR_5 = VAR_4;
 struct device *VAR_6 = VAR_5->dev;
 struct tegra_msi *VAR_7 = &VAR_5->msi;
 unsigned int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  unsigned long VAR_10 = FUNC_0(VAR_5, VAR_0 + VAR_8 * 4);

  while (VAR_10) {
   unsigned int VAR_11 = FUNC_3(&VAR_10, 32);
   unsigned int VAR_12 = VAR_8 * 32 + VAR_11;
   unsigned int VAR_13;


   FUNC_1(VAR_5, 1 << VAR_11, VAR_0 + VAR_8 * 4);

   VAR_13 = FUNC_5(VAR_7->domain, VAR_12);
   if (VAR_13) {
    if (FUNC_6(VAR_12, VAR_7->used))
     FUNC_4(VAR_13);
    else
     FUNC_2(VAR_6, "unhandled MSI\n");
   } else {




    FUNC_2(VAR_6, "unexpected MSI\n");
   }


   VAR_10 = FUNC_0(VAR_5, VAR_0 + VAR_8 * 4);

   VAR_9++;
  }
 }

 return VAR_9 > 0 ? VAR_1 : VAR_2;
}
