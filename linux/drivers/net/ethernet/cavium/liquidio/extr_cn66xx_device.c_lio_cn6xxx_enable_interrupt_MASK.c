
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct octeon_device {scalar_t__ chip; } ;
struct octeon_cn6xxx {int intr_mask64; int intr_enb_reg64; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

void FUNC_1(struct octeon_device *VAR_1,
     u8 VAR_2 __attribute__((unused)))
{
 struct octeon_cn6xxx *VAR_3 = (struct octeon_cn6xxx *)VAR_1->chip;
 u64 VAR_4 = VAR_3->intr_mask64 | VAR_0;


 FUNC_0(VAR_4, VAR_3->intr_enb_reg64);
}
