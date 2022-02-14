
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_pinctrl {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct bcm2835_pinctrl*,scalar_t__,unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct bcm2835_pinctrl *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_3);

 FUNC_3(VAR_2, VAR_0, VAR_4 & 3);






 FUNC_4(1);
 FUNC_3(VAR_2, VAR_1 + (VAR_5 * 4), FUNC_0(VAR_6));
 FUNC_4(1);
 FUNC_3(VAR_2, VAR_1 + (VAR_5 * 4), 0);
}
