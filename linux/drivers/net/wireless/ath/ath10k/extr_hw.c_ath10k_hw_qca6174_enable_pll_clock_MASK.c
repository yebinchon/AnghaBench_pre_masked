
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_hw_params {int target_cpu_freq; struct ath10k_hw_clk_params* hw_clk; } ;
struct ath10k_hw_clk_params {int rnfrac; int outdiv; int settle_time; int refdiv; int div; } ;
struct ath10k {TYPE_1__* regs; struct ath10k_hw_params hw_params; } ;
typedef int mem_val ;
struct TYPE_2__ {scalar_t__ core_clk_div_address; scalar_t__ cpu_pll_init_address; scalar_t__ cpu_speed_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (struct ath10k*,int,int*) ;
 int FUNC_3 (struct ath10k*,int,int*,int) ;
 int FUNC_4 (struct ath10k*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_29)
{
 int VAR_30, VAR_31;
 u32 VAR_32, VAR_33, VAR_34;
 u32 VAR_35, VAR_36, VAR_37;
 struct ath10k_hw_params *VAR_38;
 const struct ath10k_hw_clk_params *VAR_39;

 VAR_38 = &VAR_29->hw_params;

 if (VAR_29->regs->core_clk_div_address == 0 ||
     VAR_29->regs->cpu_pll_init_address == 0 ||
     VAR_29->regs->cpu_speed_address == 0)
  return -VAR_8;

 VAR_32 = VAR_29->regs->core_clk_div_address;
 VAR_33 = VAR_29->regs->cpu_pll_init_address;
 VAR_34 = VAR_29->regs->cpu_speed_address;


 VAR_35 = (VAR_9 | VAR_6);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;


 if (FUNC_0(VAR_36, VAR_7) > VAR_0)
  return -VAR_8;

 VAR_39 = &VAR_38->hw_clk[FUNC_0(VAR_36, VAR_7)];


 VAR_35 = (VAR_9 | VAR_3);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 &= ~(VAR_2 | VAR_5);
 VAR_36 |= (FUNC_1(VAR_39->rnfrac, VAR_1) |
      FUNC_1(VAR_39->outdiv, VAR_4));
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_35 = (VAR_12 | VAR_26);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 &= ~VAR_28;
 VAR_36 |= FUNC_1(VAR_39->settle_time, VAR_27);
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_35 = (VAR_9 | VAR_15);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 &= ~VAR_14;
 VAR_36 |= FUNC_1(1, VAR_13);
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_37 = 1;
 VAR_30 = FUNC_3(VAR_29, VAR_32, &VAR_37,
          sizeof(VAR_37));
 if (VAR_30)
  return -VAR_8;


 VAR_35 = (VAR_12 | VAR_24);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 |= (FUNC_1(VAR_39->refdiv, VAR_25) |
      FUNC_1(VAR_39->div, VAR_21) |
      FUNC_1(1, VAR_22));
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_31 = 100000;
 VAR_35 = (VAR_12 | VAR_10);
 do {
  VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
  if (VAR_30)
   return -VAR_8;

  if (!FUNC_0(VAR_36, VAR_11))
   break;

  VAR_31--;
  FUNC_5(10);

 } while (VAR_31 > 0);

 if (FUNC_0(VAR_36, VAR_11))
  return -VAR_8;


 VAR_35 = (VAR_12 | VAR_24);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 &= ~VAR_20;
 VAR_36 |= FUNC_1(0, VAR_19);
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_31 = 100000;
 VAR_35 = (VAR_12 | VAR_10);
 do {
  VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
  if (VAR_30)
   return -VAR_8;

  if (!FUNC_0(VAR_36, VAR_11))
   break;

  VAR_31--;
  FUNC_5(10);

 } while (VAR_31 > 0);

 if (FUNC_0(VAR_36, VAR_11))
  return -VAR_8;


 VAR_35 = (VAR_9 | VAR_16);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 &= ~VAR_18;
 VAR_36 |= FUNC_1(1, VAR_17);
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_35 = (VAR_12 | VAR_24);
 VAR_30 = FUNC_2(VAR_29, VAR_35, &VAR_36);
 if (VAR_30)
  return -VAR_8;

 VAR_36 &= ~VAR_23;
 VAR_30 = FUNC_4(VAR_29, VAR_35, VAR_36);
 if (VAR_30)
  return -VAR_8;


 VAR_37 = 1;
 VAR_30 = FUNC_3(VAR_29, VAR_33, &VAR_37,
          sizeof(VAR_37));
 if (VAR_30)
  return -VAR_8;


 VAR_30 = FUNC_3(VAR_29, VAR_34, &VAR_38->target_cpu_freq,
          sizeof(VAR_38->target_cpu_freq));
 if (VAR_30)
  return -VAR_8;

 return 0;
}
