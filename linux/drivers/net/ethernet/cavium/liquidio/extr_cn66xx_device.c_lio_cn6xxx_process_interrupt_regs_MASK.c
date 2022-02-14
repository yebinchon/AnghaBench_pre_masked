
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_device {int int_status; scalar_t__ chip; } ;
struct octeon_cn6xxx {int intr_sum_reg64; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (struct octeon_device*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

irqreturn_t FUNC_4(void *VAR_9)
{
 struct octeon_device *VAR_10 = (struct octeon_device *)VAR_9;
 struct octeon_cn6xxx *VAR_11 = (struct octeon_cn6xxx *)VAR_10->chip;
 u64 VAR_12;

 VAR_12 = FUNC_2(VAR_11->intr_sum_reg64);





 if (!VAR_12 || (VAR_12 == 0xFFFFFFFFFFFFFFFFULL))
  return VAR_5;

 VAR_10->int_status = 0;

 if (VAR_12 & VAR_2)
  FUNC_1(VAR_10, VAR_12);

 if (VAR_12 & VAR_3) {
  FUNC_0(VAR_10);
  VAR_10->int_status |= VAR_8;
 }

 if (VAR_12 & VAR_0)
  VAR_10->int_status |= VAR_6;

 if (VAR_12 & VAR_1)
  VAR_10->int_status |= VAR_7;


 FUNC_3(VAR_12, VAR_11->intr_sum_reg64);

 return VAR_4;
}
