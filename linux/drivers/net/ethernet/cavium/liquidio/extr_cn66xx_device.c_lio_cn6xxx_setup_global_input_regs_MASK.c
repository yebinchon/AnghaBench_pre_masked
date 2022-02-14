
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int pcie_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct octeon_device*,int ,int ) ;
 int FUNC_1 (struct octeon_device*,int ,int) ;

void FUNC_2(struct octeon_device *VAR_4)
{

 FUNC_0(VAR_4, VAR_2,
    VAR_0);


 FUNC_1(VAR_4, VAR_3,
      0xFFFFFFFFFFFFFFFFULL);


 FUNC_1(VAR_4, VAR_1,
      (VAR_4->pcie_port * 0x5555555555555555ULL));
}
