
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_bus {int sprom_size; scalar_t__ sprom_offset; scalar_t__ mmio; struct pci_dev* host_pci; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int const,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ssb_bus *VAR_2, const u16 *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->host_pci;
 int VAR_5, VAR_6;
 u32 VAR_7;
 u16 VAR_8 = VAR_2->sprom_size;

 FUNC_5("Writing SPROM. Do NOT turn off the power! Please stand by...\n");
 VAR_6 = FUNC_1(VAR_4, VAR_0, &VAR_7);
 if (VAR_6)
  goto err_ctlreg;
 VAR_7 |= VAR_1;
 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_7);
 if (VAR_6)
  goto err_ctlreg;
 FUNC_5("[ 0%%");
 FUNC_0(500);
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  if (VAR_5 == VAR_8 / 4)
   FUNC_3("25%%");
  else if (VAR_5 == VAR_8 / 2)
   FUNC_3("50%%");
  else if (VAR_5 == (VAR_8 * 3) / 4)
   FUNC_3("75%%");
  else if (VAR_5 % 2)
   FUNC_3(".");
  FUNC_6(VAR_3[VAR_5], VAR_2->mmio + VAR_2->sprom_offset + (VAR_5 * 2));
  FUNC_0(20);
 }
 VAR_6 = FUNC_1(VAR_4, VAR_0, &VAR_7);
 if (VAR_6)
  goto err_ctlreg;
 VAR_7 &= ~VAR_1;
 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_7);
 if (VAR_6)
  goto err_ctlreg;
 FUNC_0(500);
 FUNC_3("100%% ]\n");
 FUNC_5("SPROM written\n");

 return 0;
err_ctlreg:
 FUNC_4("Could not access SPROM control register.\n");
 return VAR_6;
}
