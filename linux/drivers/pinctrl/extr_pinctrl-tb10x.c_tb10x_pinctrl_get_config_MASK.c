
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb10x_pinctrl {int base; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(
    struct tb10x_pinctrl *VAR_1,
    unsigned int VAR_2)
{
 return (FUNC_1(VAR_1->base) & FUNC_0(VAR_2))
  >> (VAR_0 * VAR_2);
}
