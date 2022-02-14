
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct mtk_pcie_soc {int device_id; scalar_t__ need_fix_device_id; scalar_t__ need_fix_class_id; } ;
struct mtk_pcie_port {scalar_t__ base; int slot; struct mtk_pcie* pcie; } ;
struct mtk_pcie {scalar_t__ base; struct mtk_pcie_soc* soc; struct resource mem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mtk_pcie_port*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int,int,int,int) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct mtk_pcie_port *VAR_25)
{
 struct mtk_pcie *VAR_26 = VAR_25->pcie;
 struct resource *VAR_27 = &VAR_26->mem;
 const struct mtk_pcie_soc *VAR_28 = VAR_25->pcie->soc;
 u32 VAR_29;
 int VAR_30;


 if (VAR_26->base) {
  VAR_29 = FUNC_7(VAR_26->base + VAR_20);
  VAR_29 |= FUNC_3(VAR_25->slot) |
         FUNC_2(VAR_25->slot);
  FUNC_11(VAR_29, VAR_26->base + VAR_20);
 }


 FUNC_11(0, VAR_25->base + VAR_19);






 FUNC_11(VAR_12, VAR_25->base + VAR_19);


 VAR_29 = FUNC_7(VAR_25->base + VAR_19);
 VAR_29 |= VAR_16 | VAR_15 | VAR_17 |
        VAR_14 | VAR_10;
 FUNC_11(VAR_29, VAR_25->base + VAR_19);


 if (VAR_28->need_fix_class_id) {
  VAR_29 = VAR_22;
  FUNC_12(VAR_29, VAR_25->base + VAR_9);

  VAR_29 = VAR_21;
  FUNC_12(VAR_29, VAR_25->base + VAR_7);
 }

 if (VAR_28->need_fix_device_id)
  FUNC_12(VAR_28->device_id, VAR_25->base + VAR_8);


 VAR_30 = FUNC_8(VAR_25->base + VAR_13, VAR_29,
     !!(VAR_29 & VAR_18), 20,
     100 * VAR_23);
 if (VAR_30)
  return -VAR_1;


 VAR_29 = FUNC_7(VAR_25->base + VAR_11);
 VAR_29 &= ~VAR_2;
 FUNC_11(VAR_29, VAR_25->base + VAR_11);

 if (FUNC_1(VAR_0))
  FUNC_6(VAR_25);


 VAR_29 = FUNC_5(VAR_27->start) |
       FUNC_0(FUNC_4(FUNC_9(VAR_27)));
 FUNC_11(VAR_29, VAR_25->base + VAR_5);

 VAR_29 = FUNC_10(VAR_27->start);
 FUNC_11(VAR_29, VAR_25->base + VAR_4);


 VAR_29 = VAR_3 | VAR_24;
 FUNC_11(VAR_29, VAR_25->base + VAR_6);

 return 0;
}
