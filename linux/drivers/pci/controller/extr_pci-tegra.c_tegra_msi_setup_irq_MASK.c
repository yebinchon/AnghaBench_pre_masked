
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_msi {int phys; int domain; } ;
struct pci_dev {int dummy; } ;
struct msi_msg {int data; int address_hi; int address_lo; } ;
struct msi_desc {int dummy; } ;
struct msi_controller {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned int,struct msi_desc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,struct msi_msg*) ;
 int FUNC_4 (struct tegra_msi*) ;
 int FUNC_5 (struct tegra_msi*,int) ;
 struct tegra_msi* FUNC_6 (struct msi_controller*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct msi_controller *VAR_1,
          struct pci_dev *VAR_2, struct msi_desc *VAR_3)
{
 struct tegra_msi *VAR_4 = FUNC_6(VAR_1);
 struct msi_msg VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_0(VAR_4->domain, VAR_7);
 if (!VAR_6) {
  FUNC_5(VAR_4, VAR_7);
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_3);

 VAR_5.address_lo = FUNC_2(VAR_4->phys);
 VAR_5.address_hi = FUNC_7(VAR_4->phys);
 VAR_5.data = VAR_7;

 FUNC_3(VAR_6, &VAR_5);

 return 0;
}
