
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct dw_pcie {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*,int,int ) ;
 int FUNC_2 (struct dw_pcie*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct dw_pcie *VAR_10, int VAR_11,
          int VAR_12, u64 VAR_13,
          u64 VAR_14, u32 VAR_15)
{
 u32 VAR_16, VAR_17;

 FUNC_2(VAR_10, VAR_11, VAR_4,
     FUNC_3(VAR_13));
 FUNC_2(VAR_10, VAR_11, VAR_8,
     FUNC_5(VAR_13));
 FUNC_2(VAR_10, VAR_11, VAR_3,
     FUNC_3(VAR_13 + VAR_15 - 1));
 FUNC_2(VAR_10, VAR_11, VAR_5,
     FUNC_3(VAR_14));
 FUNC_2(VAR_10, VAR_11, VAR_9,
     FUNC_5(VAR_14));
 FUNC_2(VAR_10, VAR_11, VAR_6,
     VAR_12);
 FUNC_2(VAR_10, VAR_11, VAR_7,
     VAR_2);





 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
  VAR_17 = FUNC_1(VAR_10, VAR_11,
           VAR_7);
  if (VAR_17 & VAR_2)
   return;

  FUNC_4(VAR_0);
 }
 FUNC_0(VAR_10->dev, "Outbound iATU is not being enabled\n");
}
