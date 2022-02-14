
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {scalar_t__ erasing; } ;


 int FUNC_0 (char,struct n_tty_data*) ;

__attribute__((used)) static inline void FUNC_1(struct n_tty_data *VAR_0)
{
 if (VAR_0->erasing) {
  FUNC_0('/', VAR_0);
  VAR_0->erasing = 0;
 }
}
