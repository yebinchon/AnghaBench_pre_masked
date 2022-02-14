
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {int read_head; } ;


 unsigned char* FUNC_0 (struct n_tty_data*,int ) ;

__attribute__((used)) static inline void FUNC_1(unsigned char VAR_0, struct n_tty_data *VAR_1)
{
 *FUNC_0(VAR_1, VAR_1->read_head) = VAR_0;
 VAR_1->read_head++;
}
