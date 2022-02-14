
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {int * membase; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct ltq_pinmux_info* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static inline int FUNC_7(struct pinctrl_dev *VAR_4,
    int VAR_5, int VAR_6)
{
 struct ltq_pinmux_info *VAR_7 = FUNC_6(VAR_4);
 int VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9 = FUNC_1(VAR_5);

 if (VAR_8 == VAR_3)
  VAR_9 = VAR_0;

 if (VAR_6 & VAR_1)
  FUNC_5(VAR_7->membase[0], FUNC_0(VAR_5), FUNC_3(VAR_5));
 else
  FUNC_4(VAR_7->membase[0], FUNC_0(VAR_5), FUNC_3(VAR_5));

 if (VAR_6 & VAR_2)
  FUNC_5(VAR_7->membase[0], VAR_9, FUNC_3(VAR_5));
 else
  FUNC_4(VAR_7->membase[0], VAR_9, FUNC_3(VAR_5));

 return 0;
}
