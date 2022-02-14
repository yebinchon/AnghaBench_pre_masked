
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;

 VAR_8 = FUNC_1(VAR_7, VAR_0);
 if (!VAR_8)
  return;

 FUNC_2(VAR_7, VAR_8 + VAR_1, &VAR_11);
 VAR_9 = (VAR_11 & VAR_5) >>
      VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_8 += 8) {
  struct resource *VAR_12;
  int VAR_13, VAR_14;

  FUNC_2(VAR_7, VAR_8 + VAR_1, &VAR_11);
  VAR_13 = VAR_11 & VAR_2;
  VAR_12 = VAR_7->resource + VAR_13;
  VAR_14 = FUNC_0(FUNC_4(VAR_12)) - 20;
  VAR_11 &= ~VAR_4;
  VAR_11 |= VAR_14 << VAR_3;
  FUNC_3(VAR_7, VAR_8 + VAR_1, VAR_11);
 }
}
