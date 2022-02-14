
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_pinctrl {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct bcm2835_pinctrl*,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct bcm2835_pinctrl *VAR_0,
  unsigned VAR_1, unsigned VAR_2)
{
 VAR_1 += FUNC_1(VAR_2) * 4;
 FUNC_3(VAR_0, VAR_1, FUNC_0(FUNC_2(VAR_2)));
}
