
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct dw_pcie {int dev; scalar_t__ iatu_unroll_enabled; } ;
typedef enum dw_pcie_as_type { ____Placeholder_dw_pcie_as_type } dw_pcie_as_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie*,int,int,int ,int) ;
 scalar_t__ FUNC_2 (struct dw_pcie*,int ) ;
 int FUNC_3 (struct dw_pcie*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct dw_pcie *VAR_14, int VAR_15, int VAR_16,
        u64 VAR_17, enum dw_pcie_as_type VAR_18)
{
 int VAR_19;
 u32 VAR_20, VAR_21;

 if (VAR_14->iatu_unroll_enabled)
  return FUNC_1(VAR_14, VAR_15, VAR_16,
             VAR_17, VAR_18);

 FUNC_3(VAR_14, VAR_13, VAR_9 |
      VAR_15);
 FUNC_3(VAR_14, VAR_8, FUNC_4(VAR_17));
 FUNC_3(VAR_14, VAR_12, FUNC_6(VAR_17));

 switch (VAR_18) {
 case 128:
  VAR_19 = VAR_11;
  break;
 case 129:
  VAR_19 = VAR_10;
  break;
 default:
  return -VAR_1;
 }

 FUNC_3(VAR_14, VAR_5, VAR_19);
 FUNC_3(VAR_14, VAR_6, VAR_7
      | VAR_4 | (VAR_16 << 8));





 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
  VAR_21 = FUNC_2(VAR_14, VAR_6);
  if (VAR_21 & VAR_7)
   return 0;

  FUNC_5(VAR_2);
 }
 FUNC_0(VAR_14->dev, "Inbound iATU is not being enabled\n");

 return -VAR_0;
}
