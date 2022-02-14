
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_device {scalar_t__ chip; } ;
struct octeon_cn6xxx {int intr_enb_reg64; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct octeon_device *VAR_0,
      u8 VAR_1 __attribute__((unused)))
{
 struct octeon_cn6xxx *VAR_2 = (struct octeon_cn6xxx *)VAR_0->chip;


 FUNC_0(0, VAR_2->intr_enb_reg64);
}
