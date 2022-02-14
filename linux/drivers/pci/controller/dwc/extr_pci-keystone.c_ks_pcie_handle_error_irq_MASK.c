
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct keystone_pcie {scalar_t__ is_am6; TYPE_1__* pci; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct keystone_pcie*,int ) ;
 int FUNC_3 (struct keystone_pcie*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct keystone_pcie *VAR_10)
{
 u32 VAR_11;
 struct device *VAR_12 = VAR_10->pci->dev;

 VAR_11 = FUNC_2(VAR_10, VAR_5);
 if (!VAR_11)
  return VAR_9;

 if (VAR_11 & VAR_7)
  FUNC_1(VAR_12, "System Error\n");

 if (VAR_11 & VAR_4)
  FUNC_1(VAR_12, "Fatal Error\n");

 if (VAR_11 & VAR_6)
  FUNC_0(VAR_12, "Non Fatal Error\n");

 if (VAR_11 & VAR_3)
  FUNC_0(VAR_12, "Correctable Error\n");

 if (!VAR_10->is_am6 && (VAR_11 & VAR_2))
  FUNC_1(VAR_12, "AXI tag lookup fatal Error\n");

 if (VAR_11 & VAR_1 || (VAR_10->is_am6 && (VAR_11 & VAR_0)))
  FUNC_1(VAR_12, "ECRC Error\n");

 FUNC_3(VAR_10, VAR_5, VAR_11);

 return VAR_8;
}
