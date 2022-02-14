
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_dev {int rom_base_reg; struct resource* resource; scalar_t__ is_virtfn; scalar_t__ non_compliant_bars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ,struct resource*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_8, unsigned int VAR_9, int VAR_10)
{
 unsigned int VAR_11, VAR_12;

 if (VAR_8->non_compliant_bars)
  return;


 if (VAR_8->is_virtfn)
  return;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  struct resource *VAR_13 = &VAR_8->resource[VAR_11];
  VAR_12 = VAR_4 + (VAR_11 << 2);
  VAR_11 += FUNC_0(VAR_8, VAR_7, VAR_13, VAR_12);
 }

 if (VAR_10) {
  struct resource *VAR_14 = &VAR_8->resource[VAR_5];
  VAR_8->rom_base_reg = VAR_10;
  VAR_14->flags = VAR_0 | VAR_1 |
    VAR_2 | VAR_3;
  FUNC_0(VAR_8, VAR_6, VAR_14, VAR_10);
 }
}
