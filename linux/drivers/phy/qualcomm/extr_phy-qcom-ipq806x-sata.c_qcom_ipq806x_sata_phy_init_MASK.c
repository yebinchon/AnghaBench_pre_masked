
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_ipq806x_sata_phy {scalar_t__ mmio; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 () ;
 struct qcom_ipq806x_sata_phy* FUNC_6 (struct phy*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_15)
{
 struct qcom_ipq806x_sata_phy *VAR_16 = FUNC_6(VAR_15);
 u32 VAR_17;


 VAR_17 = FUNC_7(VAR_16->mmio + VAR_10);
 VAR_17 = VAR_17 | VAR_14;
 FUNC_9(VAR_17, VAR_16->mmio + VAR_10);

 VAR_17 = FUNC_7(VAR_16->mmio + VAR_0) &
   ~(VAR_3 |
     VAR_2 |
     VAR_1);
 VAR_17 |= FUNC_0(0xf);
 FUNC_9(VAR_17, VAR_16->mmio + VAR_0);

 VAR_17 = FUNC_7(VAR_16->mmio + VAR_4) &
   ~(VAR_7 |
     VAR_6 |
     VAR_5);
 VAR_17 |= FUNC_3(0x55) |
  FUNC_2(0x55) |
  FUNC_1(0x55);
 FUNC_9(VAR_17, VAR_16->mmio + VAR_4);

 VAR_17 = FUNC_7(VAR_16->mmio + VAR_8) &
  ~VAR_9;
 VAR_17 |= FUNC_4(0x3);
 FUNC_9(VAR_17, VAR_16->mmio + VAR_8);


 VAR_17 = FUNC_7(VAR_16->mmio + VAR_11);
 VAR_17 = VAR_17 | VAR_13;
 FUNC_9(VAR_17, VAR_16->mmio + VAR_11);


 VAR_17 = FUNC_7(VAR_16->mmio + VAR_11);
 VAR_17 = VAR_17 | VAR_12 | VAR_13;
 FUNC_9(VAR_17, VAR_16->mmio + VAR_11);


 FUNC_5();


 FUNC_8(20, 20 + 50);


 VAR_17 = FUNC_7(VAR_16->mmio + VAR_11);
 VAR_17 = VAR_17 & ~VAR_13;
 FUNC_9(VAR_17, VAR_16->mmio + VAR_11);

 return 0;
}
