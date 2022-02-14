
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct uniphier_pcie_priv {TYPE_1__ pci; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct uniphier_pcie_priv *VAR_2)
{
 u32 VAR_3;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2->base + VAR_1, VAR_3,
     VAR_3 & VAR_0, 100000, 1000000);
 if (VAR_4) {
  FUNC_0(VAR_2->pci.dev,
   "Failed to initialize controller in RC mode\n");
  return VAR_4;
 }

 return 0;
}
