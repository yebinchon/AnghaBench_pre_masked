
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct rcar_pwm_chip {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct rcar_pwm_chip *VAR_5, int VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_5->clk);
 u64 VAR_8, VAR_9;

 if (VAR_7 == 0)
  return -VAR_0;

 VAR_8 = (u64)VAR_2 * VAR_3;
 VAR_9 = (u64)VAR_6 * VAR_7 + VAR_8 - 1;
 VAR_9 = FUNC_1(VAR_9, VAR_8);
 VAR_8 = FUNC_2(VAR_9 - 1) + 1;

 return (VAR_8 <= VAR_4) ? VAR_8 : -VAR_1;
}
