
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_pwm_chip {int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 int FUNC_2 (struct rcar_pwm_chip*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct rcar_pwm_chip *VAR_6, int VAR_7, int VAR_8,
    int VAR_9)
{
 unsigned long long VAR_10, VAR_11;
 unsigned long VAR_12 = FUNC_0(VAR_6->clk);
 u32 VAR_13, VAR_14;

 VAR_10 = (unsigned long long)VAR_1 * 100ULL * (1 << VAR_7);
 FUNC_1(VAR_10, VAR_12);

 VAR_11 = VAR_9 * 100ULL;
 FUNC_1(VAR_11, VAR_10);
 VAR_13 = (VAR_11 << VAR_4) & VAR_3;

 VAR_11 = VAR_8 * 100ULL;
 FUNC_1(VAR_11, VAR_10);
 VAR_14 = VAR_11 & VAR_5;


 if (VAR_13 == 0 || VAR_14 == 0)
  return -VAR_0;

 FUNC_2(VAR_6, VAR_13 | VAR_14, VAR_2);

 return 0;
}
