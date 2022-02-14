
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcar_pcie {int root_bus_nr; } ;
struct pci_bus {TYPE_1__* parent; int number; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_5 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (struct pci_bus*) ;
 int FUNC_8 (struct rcar_pcie*,int ) ;
 int FUNC_9 (struct rcar_pcie*,int,int ) ;
 int FUNC_10 (struct rcar_pcie*,int ) ;

__attribute__((used)) static int FUNC_11(struct rcar_pcie *VAR_15,
  unsigned char VAR_16, struct pci_bus *VAR_17,
  unsigned int VAR_18, int VAR_19, u32 *VAR_20)
{
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_21 = FUNC_5(VAR_18);
 VAR_22 = FUNC_4(VAR_18);
 VAR_23 = VAR_19 & ~3;
 VAR_24 = VAR_23 / 4;
 if (FUNC_7(VAR_17)) {
  if (VAR_21 != 0)
   return VAR_1;

  if (VAR_16 == VAR_11) {
   *VAR_20 = FUNC_8(VAR_15, FUNC_0(VAR_24));
  } else {

   if (FUNC_7(VAR_17) && (VAR_23 == VAR_7))
    VAR_15->root_bus_nr = *VAR_20 & 0xff;

   FUNC_9(VAR_15, *VAR_20, FUNC_0(VAR_24));
  }

  return VAR_2;
 }

 if (VAR_15->root_bus_nr < 0)
  return VAR_1;


 FUNC_9(VAR_15, FUNC_8(VAR_15, VAR_6), VAR_6);


 FUNC_9(VAR_15, FUNC_1(VAR_17->number) |
  FUNC_2(VAR_21) | FUNC_3(VAR_22) | VAR_23, VAR_3);


 if (VAR_17->parent->number == VAR_15->root_bus_nr)
  FUNC_9(VAR_15, VAR_0 | VAR_12, VAR_4);
 else
  FUNC_9(VAR_15, VAR_0 | VAR_13, VAR_4);


 if (FUNC_8(VAR_15, VAR_6) & VAR_14)
  return VAR_1;


 if (FUNC_10(VAR_15, FUNC_6(VAR_8)) &
  (VAR_9 | VAR_10))
  return VAR_1;

 if (VAR_16 == VAR_11)
  *VAR_20 = FUNC_8(VAR_15, VAR_5);
 else
  FUNC_9(VAR_15, *VAR_20, VAR_5);


 FUNC_9(VAR_15, 0, VAR_4);

 return VAR_2;
}
