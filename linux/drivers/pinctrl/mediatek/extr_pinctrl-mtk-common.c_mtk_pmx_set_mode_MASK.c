
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct TYPE_2__ {unsigned long port_shf; unsigned long pinmux_offset; int (* spec_pinmux_set ) (int ,unsigned long,unsigned long) ;} ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mtk_pinctrl*,unsigned long) ;
 struct mtk_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned int VAR_5;
 unsigned char VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8 = (1L << VAR_0) - 1;
 struct mtk_pinctrl *VAR_9 = FUNC_1(VAR_2);

 if (VAR_9->devdata->spec_pinmux_set)
  VAR_9->devdata->spec_pinmux_set(FUNC_0(VAR_9, VAR_3),
     VAR_3, VAR_4);

 VAR_5 = ((VAR_3 / VAR_1) << VAR_9->devdata->port_shf)
   + VAR_9->devdata->pinmux_offset;

 VAR_4 &= VAR_8;
 VAR_6 = VAR_3 % VAR_1;
 VAR_8 <<= (VAR_0 * VAR_6);
 VAR_7 = (VAR_4 << (VAR_0 * VAR_6));
 return FUNC_2(FUNC_0(VAR_9, VAR_3),
   VAR_5, VAR_8, VAR_7);
}
