
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sunxi_pinctrl {int lock; scalar_t__ membase; TYPE_1__* desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ pin_base; } ;


 int VAR_0 ;
 struct sunxi_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct pinctrl_dev *VAR_1,
     unsigned VAR_2,
     u8 VAR_3)
{
 struct sunxi_pinctrl *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_1(&VAR_4->lock, VAR_5);

 VAR_2 -= VAR_4->desc->pin_base;
 VAR_6 = FUNC_3(VAR_4->membase + FUNC_5(VAR_2));
 VAR_7 = VAR_0 << FUNC_4(VAR_2);
 FUNC_6((VAR_6 & ~VAR_7) | VAR_3 << FUNC_4(VAR_2),
  VAR_4->membase + FUNC_5(VAR_2));

 FUNC_2(&VAR_4->lock, VAR_5);
}
