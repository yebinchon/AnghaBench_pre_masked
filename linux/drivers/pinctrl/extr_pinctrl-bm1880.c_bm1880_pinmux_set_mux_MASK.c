
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct bm1880_pinmux_function {int mux_val; } ;
struct bm1880_pinctrl {int base; struct bm1880_pinmux_function* funcs; struct bm1880_pctrl_group* groups; } ;
struct bm1880_pctrl_group {int npins; unsigned int* pins; } ;


 int VAR_0 ;
 struct bm1880_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct bm1880_pinctrl *VAR_4 = FUNC_0(VAR_1);
 const struct bm1880_pctrl_group *VAR_5 = &VAR_4->groups[VAR_3];
 const struct bm1880_pinmux_function *VAR_6 = &VAR_4->funcs[VAR_2];
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->npins; VAR_7++) {
  unsigned int VAR_8 = VAR_5->pins[VAR_7];
  u32 VAR_9 = (VAR_8 >> 1) << 2;
  u32 VAR_10 = ((!((VAR_8 + 1) & 1) << 4) + 4);
  u32 VAR_11 = FUNC_1(VAR_4->base + VAR_0 +
        VAR_9);

  VAR_11 &= ~(0x03 << VAR_10);
  VAR_11 |= VAR_6->mux_val << VAR_10;

  FUNC_2(VAR_11, VAR_4->base + VAR_0 + VAR_9);
 }

 return 0;
}
