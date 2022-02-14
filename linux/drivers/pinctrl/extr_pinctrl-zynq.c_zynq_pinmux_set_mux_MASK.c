
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_pinmux_function {int mux; int mux_mask; int mux_shift; int mux_val; } ;
struct zynq_pinctrl {int pctrl_offset; int syscon; struct zynq_pinmux_function* funcs; struct zynq_pctrl_group* groups; } ;
struct zynq_pctrl_group {int* pins; int npins; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct zynq_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8)
{
 int VAR_9, VAR_10;
 struct zynq_pinctrl *VAR_11 = FUNC_0(VAR_6);
 const struct zynq_pctrl_group *VAR_12 = &VAR_11->groups[VAR_8];
 const struct zynq_pinmux_function *VAR_13 = &VAR_11->funcs[VAR_7];





 if (VAR_7 == VAR_2 || VAR_7 == VAR_3 ||
   VAR_7 == VAR_4 ||
   VAR_7 == VAR_5) {
  u32 VAR_14;

  VAR_10 = FUNC_1(VAR_11->syscon,
      VAR_11->pctrl_offset + VAR_13->mux, &VAR_14);
  if (VAR_10)
   return VAR_10;

  VAR_14 &= ~VAR_13->mux_mask;
  VAR_14 |= VAR_12->pins[0] << VAR_13->mux_shift;
  VAR_10 = FUNC_2(VAR_11->syscon,
       VAR_11->pctrl_offset + VAR_13->mux, VAR_14);
  if (VAR_10)
   return VAR_10;
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_12->npins; VAR_9++) {
   unsigned int VAR_15 = VAR_12->pins[VAR_9];
   u32 VAR_16, VAR_17 = VAR_11->pctrl_offset + (4 * VAR_15);

   VAR_10 = FUNC_1(VAR_11->syscon, VAR_17, &VAR_16);
   if (VAR_10)
    return VAR_10;

   VAR_16 &= ~VAR_0;
   VAR_16 |= VAR_13->mux_val << VAR_1;
   VAR_10 = FUNC_2(VAR_11->syscon, VAR_17, VAR_16);
   if (VAR_10)
    return VAR_10;
  }
 }

 return 0;
}
