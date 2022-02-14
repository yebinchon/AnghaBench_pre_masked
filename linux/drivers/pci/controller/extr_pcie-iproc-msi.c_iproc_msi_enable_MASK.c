
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_msi {int nr_eq_region; int nr_msi_region; int nr_irqs; scalar_t__ has_inten_reg; scalar_t__ msi_addr; scalar_t__ eq_dma; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct iproc_msi*,int ,int) ;
 int FUNC_2 (struct iproc_msi*,int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct iproc_msi *VAR_11)
{
 int VAR_12, VAR_13;
 u32 VAR_14;


 for (VAR_12 = 0; VAR_12 < VAR_11->nr_eq_region; VAR_12++) {
  dma_addr_t VAR_15 = VAR_11->eq_dma + (VAR_12 * VAR_0);

  FUNC_2(VAR_11, VAR_3, VAR_12,
        FUNC_3(VAR_15));
  FUNC_2(VAR_11, VAR_4, VAR_12,
        FUNC_4(VAR_15));
 }


 for (VAR_12 = 0; VAR_12 < VAR_11->nr_msi_region; VAR_12++) {
  phys_addr_t VAR_16 = VAR_11->msi_addr + (VAR_12 * VAR_10);

  FUNC_2(VAR_11, VAR_8, VAR_12,
        FUNC_3(VAR_16));
  FUNC_2(VAR_11, VAR_9, VAR_12,
        FUNC_4(VAR_16));
 }

 for (VAR_13 = 0; VAR_13 < VAR_11->nr_irqs; VAR_13++) {

  VAR_14 = VAR_5 | VAR_7 |
   VAR_2;
  FUNC_2(VAR_11, VAR_1, VAR_13, VAR_14);





  if (VAR_11->has_inten_reg) {
   VAR_14 = FUNC_1(VAR_11, VAR_6, VAR_13);
   VAR_14 |= FUNC_0(VAR_13);
   FUNC_2(VAR_11, VAR_6, VAR_13, VAR_14);
  }
 }
}
