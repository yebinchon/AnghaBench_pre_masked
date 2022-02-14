
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct dw_pcie {int dev; } ;
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
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*,int,int ) ;
 int FUNC_2 (struct dw_pcie*,int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dw_pcie *VAR_12, int VAR_13,
        int VAR_14, u64 VAR_15,
        enum dw_pcie_as_type VAR_16)
{
 int VAR_17;
 u32 VAR_18, VAR_19;

 FUNC_2(VAR_12, VAR_13, VAR_8,
     FUNC_3(VAR_15));
 FUNC_2(VAR_12, VAR_13, VAR_11,
     FUNC_5(VAR_15));

 switch (VAR_16) {
 case 128:
  VAR_17 = VAR_7;
  break;
 case 129:
  VAR_17 = VAR_6;
  break;
 default:
  return -VAR_1;
 }

 FUNC_2(VAR_12, VAR_13, VAR_9, VAR_17);
 FUNC_2(VAR_12, VAR_13, VAR_10,
     VAR_5 |
     VAR_4 | (VAR_14 << 8));





 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  VAR_19 = FUNC_1(VAR_12, VAR_13,
           VAR_10);
  if (VAR_19 & VAR_5)
   return 0;

  FUNC_4(VAR_2);
 }
 FUNC_0(VAR_12->dev, "Inbound iATU is not being enabled\n");

 return -VAR_0;
}
