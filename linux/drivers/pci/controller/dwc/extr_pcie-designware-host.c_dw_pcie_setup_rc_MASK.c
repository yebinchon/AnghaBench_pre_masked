
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pcie_port {size_t num_vectors; size_t* irq_mask; int io_size; int io_bus_addr; int io_base; int mem_size; int mem_bus_addr; int mem_base; TYPE_1__* ops; } ;
struct dw_pcie {int num_viewport; } ;
struct TYPE_2__ {int rd_other_conf; int msi_host_init; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t VAR_20 ;
 int FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct dw_pcie*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct pcie_port*,scalar_t__,int,size_t*) ;
 size_t FUNC_4 (struct dw_pcie*,scalar_t__) ;
 int FUNC_5 (struct dw_pcie*) ;
 int FUNC_6 (struct pcie_port*,scalar_t__,int,size_t) ;
 int FUNC_7 (struct dw_pcie*,scalar_t__,size_t) ;
 struct dw_pcie* FUNC_8 (struct pcie_port*) ;

void FUNC_9(struct pcie_port *VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24;
 struct dw_pcie *VAR_25 = FUNC_8(VAR_21);





 FUNC_1(VAR_25);

 FUNC_5(VAR_25);

 if (!VAR_21->ops->msi_host_init) {
  VAR_24 = VAR_21->num_vectors / VAR_0;


  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
   VAR_21->irq_mask[VAR_23] = ~0;
   FUNC_6(VAR_21, VAR_8 +
         (VAR_23 * VAR_1),
         4, VAR_21->irq_mask[VAR_23]);
   FUNC_6(VAR_21, VAR_7 +
         (VAR_23 * VAR_1),
         4, ~0);
  }
 }


 FUNC_7(VAR_25, VAR_9, 0x00000004);
 FUNC_7(VAR_25, VAR_10, 0x00000000);


 VAR_22 = FUNC_4(VAR_25, VAR_18);
 VAR_22 &= 0xffff00ff;
 VAR_22 |= 0x00000100;
 FUNC_7(VAR_25, VAR_18, VAR_22);


 VAR_22 = FUNC_4(VAR_25, VAR_19);
 VAR_22 &= 0xff000000;
 VAR_22 |= 0x00ff0100;
 FUNC_7(VAR_25, VAR_19, VAR_22);


 VAR_22 = FUNC_4(VAR_25, VAR_13);
 VAR_22 &= 0xffff0000;
 VAR_22 |= VAR_14 | VAR_16 |
  VAR_15 | VAR_17;
 FUNC_7(VAR_25, VAR_13, VAR_22);






 if (!VAR_21->ops->rd_other_conf) {
  FUNC_2(VAR_25, VAR_2,
       VAR_5, VAR_21->mem_base,
       VAR_21->mem_bus_addr, VAR_21->mem_size);
  if (VAR_25->num_viewport > 2)
   FUNC_2(VAR_25, VAR_3,
        VAR_4, VAR_21->io_base,
        VAR_21->io_bus_addr, VAR_21->io_size);
 }

 FUNC_6(VAR_21, VAR_9, 4, 0);


 FUNC_6(VAR_21, VAR_12, 2, VAR_11);

 FUNC_3(VAR_21, VAR_6, 4, &VAR_22);
 VAR_22 |= VAR_20;
 FUNC_6(VAR_21, VAR_6, 4, VAR_22);

 FUNC_0(VAR_25);
}
