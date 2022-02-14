
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,char*,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int,int ) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10;

 VAR_8 = VAR_6 + VAR_1 + (VAR_7 * VAR_0);
 VAR_9 = VAR_6 + VAR_3 + (VAR_7 * VAR_0);

 FUNC_1(VAR_5, VAR_8, &VAR_10);
 FUNC_3(VAR_5, VAR_8,
          VAR_10 | VAR_2);

 if (FUNC_2(VAR_5, VAR_9, VAR_4))
  return;

 FUNC_0(VAR_5, "VC%d port arbitration table failed to load\n", VAR_7);
}
