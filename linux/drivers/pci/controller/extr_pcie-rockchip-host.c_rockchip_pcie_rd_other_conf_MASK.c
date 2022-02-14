
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rockchip_pcie {scalar_t__ root_bus_nr; scalar_t__ reg_base; } ;
struct pci_bus {TYPE_1__* parent; int number; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct rockchip_pcie*,int ) ;

__attribute__((used)) static int FUNC_8(struct rockchip_pcie *VAR_4,
           struct pci_bus *VAR_5, u32 VAR_6,
           int VAR_7, int VAR_8, u32 *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_5->number, FUNC_3(VAR_6),
    FUNC_2(VAR_6), VAR_7);

 if (!FUNC_0(VAR_10, VAR_8)) {
  *VAR_9 = 0;
  return VAR_2;
 }

 if (VAR_5->parent->number == VAR_4->root_bus_nr)
  FUNC_7(VAR_4,
      VAR_0);
 else
  FUNC_7(VAR_4,
      VAR_1);

 if (VAR_8 == 4) {
  *VAR_9 = FUNC_5(VAR_4->reg_base + VAR_10);
 } else if (VAR_8 == 2) {
  *VAR_9 = FUNC_6(VAR_4->reg_base + VAR_10);
 } else if (VAR_8 == 1) {
  *VAR_9 = FUNC_4(VAR_4->reg_base + VAR_10);
 } else {
  *VAR_9 = 0;
  return VAR_2;
 }
 return VAR_3;
}
