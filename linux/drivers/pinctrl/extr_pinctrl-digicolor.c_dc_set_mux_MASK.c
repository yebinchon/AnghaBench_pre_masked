
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pinctrl_dev {int dummy; } ;
struct dc_pinmap {scalar_t__ regs; } ;


 int FUNC_0 (unsigned int,int*,int*) ;
 struct dc_pinmap* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0, unsigned VAR_1,
        unsigned VAR_2)
{
 struct dc_pinmap *VAR_3 = FUNC_1(VAR_0);
 int VAR_4, VAR_5;
 u8 VAR_6;

 FUNC_0(VAR_2, &VAR_5, &VAR_4);

 VAR_6 = FUNC_2(VAR_3->regs + VAR_5);
 VAR_6 &= ~(3 << VAR_4);
 VAR_6 |= (VAR_1 << VAR_4);
 FUNC_3(VAR_6, VAR_3->regs + VAR_5);

 return 0;
}
