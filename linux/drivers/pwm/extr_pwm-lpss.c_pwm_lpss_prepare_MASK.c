
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct pwm_lpss_chip {TYPE_1__* info; } ;
struct pwm_device {int dummy; } ;
struct TYPE_2__ {unsigned long clk_rate; int base_unit_bits; } ;


 int FUNC_0 (int ) ;
 unsigned long long FUNC_1 (unsigned long long,unsigned long) ;
 unsigned long long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (unsigned long long,int) ;
 unsigned long FUNC_3 (struct pwm_device*) ;
 int FUNC_4 (struct pwm_device*,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pwm_lpss_chip *VAR_4, struct pwm_device *VAR_5,
        int VAR_6, int VAR_7)
{
 unsigned long long VAR_8;
 unsigned long VAR_9 = VAR_4->info->clk_rate, VAR_10;
 unsigned long long VAR_11, VAR_12 = VAR_0;
 u32 VAR_13, VAR_14;

 FUNC_2(VAR_12, VAR_7);





 VAR_10 = FUNC_0(VAR_4->info->base_unit_bits) - 1;
 VAR_12 *= VAR_10;

 VAR_11 = FUNC_1(VAR_12, VAR_9);

 VAR_8 = 255ULL * VAR_6;
 FUNC_2(VAR_8, VAR_7);
 VAR_8 = 255ULL - VAR_8;

 VAR_13 = VAR_14 = FUNC_3(VAR_5);
 VAR_14 &= ~VAR_2;
 VAR_14 &= ~(VAR_10 << VAR_1);
 VAR_11 &= VAR_10;
 VAR_14 |= (u32) VAR_11 << VAR_1;
 VAR_14 |= VAR_8;

 if (VAR_13 != VAR_14) {
  FUNC_4(VAR_5, VAR_14);
  FUNC_4(VAR_5, VAR_14 | VAR_3);
 }
}
