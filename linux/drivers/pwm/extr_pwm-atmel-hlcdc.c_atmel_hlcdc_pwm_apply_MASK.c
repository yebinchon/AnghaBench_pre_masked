
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pwm_state {int duty_cycle; int period; scalar_t__ polarity; scalar_t__ enabled; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct clk {int dummy; } ;
struct atmel_hlcdc_pwm {struct clk* cur_clk; TYPE_1__* errata; struct atmel_hlcdc* hlcdc; } ;
struct atmel_hlcdc {int regmap; struct clk* sys_clk; struct clk* slow_clk; } ;
struct TYPE_2__ {scalar_t__ div1_clk_erratum; scalar_t__ slow_clk_erratum; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct clk*) ;
 unsigned long FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (int,unsigned long) ;
 int FUNC_7 (int ,int ,unsigned int,int,int,int ) ;
 int FUNC_8 (int ,int ,int,int) ;
 int FUNC_9 (int ,int ,unsigned int) ;
 struct atmel_hlcdc_pwm* FUNC_10 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_12, struct pwm_device *VAR_13,
     const struct pwm_state *VAR_14)
{
 struct atmel_hlcdc_pwm *VAR_15 = FUNC_10(VAR_12);
 struct atmel_hlcdc *VAR_16 = VAR_15->hlcdc;
 unsigned int VAR_17;
 int VAR_18;

 if (VAR_14->enabled) {
  struct clk *VAR_19 = VAR_16->slow_clk;
  u64 VAR_20 = VAR_14->duty_cycle * 256;
  unsigned long VAR_21;
  u64 VAR_22;
  u32 VAR_23;
  int VAR_24;

  if (!VAR_15->errata || !VAR_15->errata->slow_clk_erratum) {
   VAR_21 = FUNC_4(VAR_19);
   if (!VAR_21)
    return -VAR_9;

   VAR_22 = (u64)VAR_10 * 256;
   FUNC_6(VAR_22, VAR_21);
  }


  if ((VAR_15->errata && VAR_15->errata->slow_clk_erratum) ||
      VAR_22 > VAR_14->period) {
   VAR_19 = VAR_16->sys_clk;
   VAR_21 = FUNC_4(VAR_19);
   if (!VAR_21)
    return -VAR_9;

   VAR_22 = (u64)VAR_10 * 256;
   FUNC_6(VAR_22, VAR_21);
  }

  for (VAR_24 = 0; VAR_24 <= VAR_7; VAR_24++) {

   if (!VAR_24 && VAR_15->errata &&
       VAR_15->errata->div1_clk_erratum)
    continue;

   if ((VAR_22 << VAR_24) >= VAR_14->period)
    break;
  }

  if (VAR_24 > VAR_7)
   return -VAR_9;

  VAR_23 = FUNC_2(VAR_24);

  if (VAR_19 != VAR_15->cur_clk) {
   u32 VAR_25 = 0;
   int VAR_26;

   VAR_26 = FUNC_5(VAR_19);
   if (VAR_26)
    return VAR_26;

   FUNC_3(VAR_15->cur_clk);
   VAR_15->cur_clk = VAR_19;

   if (VAR_19 == VAR_16->sys_clk)
    VAR_25 = VAR_0;

   VAR_26 = FUNC_8(VAR_16->regmap,
       FUNC_0(0),
       VAR_0,
       VAR_25);
   if (VAR_26)
    return VAR_26;
  }

  FUNC_6(VAR_20, VAR_14->period);







  if (VAR_20 > 255)
   VAR_20 = 255;

  VAR_23 |= FUNC_1(VAR_20);

  if (VAR_14->polarity == VAR_11)
   VAR_23 |= VAR_5;

  VAR_18 = FUNC_8(VAR_16->regmap, FUNC_0(6),
      VAR_4 |
      VAR_6 |
      VAR_5,
      VAR_23);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_9(VAR_16->regmap, VAR_2,
       VAR_3);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_7(VAR_16->regmap, VAR_8,
            VAR_17,
            VAR_17 & VAR_3,
            10, 0);
  if (VAR_18)
   return VAR_18;
 } else {
  VAR_18 = FUNC_9(VAR_16->regmap, VAR_1,
       VAR_3);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_7(VAR_16->regmap, VAR_8,
            VAR_17,
            !(VAR_17 & VAR_3),
            10, 0);
  if (VAR_18)
   return VAR_18;

  FUNC_3(VAR_15->cur_clk);
  VAR_15->cur_clk = ((void*)0);
 }

 return 0;
}
