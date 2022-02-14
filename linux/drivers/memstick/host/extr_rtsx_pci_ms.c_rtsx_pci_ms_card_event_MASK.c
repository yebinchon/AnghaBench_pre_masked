
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_pci_ms {int msh; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct realtek_pci_ms* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct realtek_pci_ms *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->msh);
}
