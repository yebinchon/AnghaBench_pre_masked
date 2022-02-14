
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_port {int dummy; } ;
struct kirin_pcie {TYPE_1__* pci; } ;
struct dw_pcie {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct pcie_port*) ;
 int FUNC_2 (struct kirin_pcie*,int ,int ) ;
 scalar_t__ FUNC_3 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_4 (struct pcie_port*) ;
 struct kirin_pcie* FUNC_5 (struct dw_pcie*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pcie_port *VAR_5)
{
 struct dw_pcie *VAR_6 = FUNC_4(VAR_5);
 struct kirin_pcie *VAR_7 = FUNC_5(VAR_6);
 struct device *VAR_8 = VAR_7->pci->dev;
 int VAR_9 = 0;

 if (FUNC_3(VAR_6))
  return 0;

 FUNC_1(VAR_5);


 FUNC_2(VAR_7, VAR_4,
         VAR_3);


 while (!FUNC_3(VAR_6)) {
  FUNC_6(VAR_2, VAR_1);
  VAR_9++;
  if (VAR_9 == 1000) {
   FUNC_0(VAR_8, "Link Fail\n");
   return -VAR_0;
  }
 }

 return 0;
}
