
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {int echo_head; } ;


 unsigned char* FUNC_0 (struct n_tty_data*,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(unsigned char VAR_0, struct n_tty_data *VAR_1)
{
 *FUNC_0(VAR_1, VAR_1->echo_head) = VAR_0;
 FUNC_1();
 VAR_1->echo_head++;
}
