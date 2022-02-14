
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int pcie_port; scalar_t__ chip; } ;
struct octeon_cn6xxx {int conf; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
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
 int VAR_11 ;
 int FUNC_3 (struct octeon_device*,int) ;
 int FUNC_4 (struct octeon_device*,int ,int) ;
 int FUNC_5 (struct octeon_device*,int ,int) ;

void FUNC_6(struct octeon_device *VAR_12)
{
 u32 VAR_13;
 struct octeon_cn6xxx *VAR_14 = (struct octeon_cn6xxx *)VAR_12->chip;


 FUNC_5(VAR_12, VAR_8,
      (VAR_12->pcie_port * 0x5555555555555555ULL));

 if (FUNC_0(VAR_14->conf)) {
  FUNC_5(VAR_12, VAR_2, 32);
 } else {

  FUNC_5(VAR_12, VAR_2, 0);
 }


 FUNC_4(VAR_12, VAR_7, 0);




 FUNC_4(VAR_12, VAR_6, 0xFFFFFFFF);




 FUNC_4(VAR_12, VAR_11, 0);
 FUNC_4(VAR_12, VAR_10, 0);






 FUNC_5(VAR_12, VAR_9, 0ULL);



 FUNC_4(VAR_12, VAR_5, 0);
 FUNC_4(VAR_12, VAR_4, 0);
 FUNC_5(VAR_12, VAR_3,
      0x5555555555555555ULL);


 FUNC_4(VAR_12, VAR_0,
    (u32)FUNC_1(VAR_14->conf));
 VAR_13 =
  FUNC_3(VAR_12, (u32)
     FUNC_2(VAR_14->conf));

 FUNC_4(VAR_12, VAR_1, VAR_13);
}
