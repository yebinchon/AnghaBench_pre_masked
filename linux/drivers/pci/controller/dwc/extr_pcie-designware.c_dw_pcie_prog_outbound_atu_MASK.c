
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct dw_pcie {int dev; scalar_t__ iatu_unroll_enabled; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* cpu_addr_fixup ) (struct dw_pcie*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie*,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct dw_pcie*,int ) ;
 int FUNC_3 (struct dw_pcie*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct dw_pcie*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

void FUNC_8(struct dw_pcie *VAR_12, int VAR_13, int VAR_14,
          u64 VAR_15, u64 VAR_16, u32 VAR_17)
{
 u32 VAR_18, VAR_19;

 if (VAR_12->ops->cpu_addr_fixup)
  VAR_15 = VAR_12->ops->cpu_addr_fixup(VAR_12, VAR_15);

 if (VAR_12->iatu_unroll_enabled) {
  FUNC_1(VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_16, VAR_17);
  return;
 }

 FUNC_3(VAR_12, VAR_11,
      VAR_8 | VAR_13);
 FUNC_3(VAR_12, VAR_6,
      FUNC_4(VAR_15));
 FUNC_3(VAR_12, VAR_9,
      FUNC_7(VAR_15));
 FUNC_3(VAR_12, VAR_5,
      FUNC_4(VAR_15 + VAR_17 - 1));
 FUNC_3(VAR_12, VAR_7,
      FUNC_4(VAR_16));
 FUNC_3(VAR_12, VAR_10,
      FUNC_7(VAR_16));
 FUNC_3(VAR_12, VAR_2, VAR_14);
 FUNC_3(VAR_12, VAR_3, VAR_4);





 for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
  VAR_19 = FUNC_2(VAR_12, VAR_3);
  if (VAR_19 & VAR_4)
   return;

  FUNC_5(VAR_0);
 }
 FUNC_0(VAR_12->dev, "Outbound iATU is not being enabled\n");
}
