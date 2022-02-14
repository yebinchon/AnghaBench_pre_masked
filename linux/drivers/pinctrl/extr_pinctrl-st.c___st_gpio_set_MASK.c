
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_gpio_bank {scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct st_gpio_bank *VAR_2,
 unsigned VAR_3, int VAR_4)
{
 if (VAR_4)
  FUNC_1(FUNC_0(VAR_3), VAR_2->base + VAR_1);
 else
  FUNC_1(FUNC_0(VAR_3), VAR_2->base + VAR_0);
}
