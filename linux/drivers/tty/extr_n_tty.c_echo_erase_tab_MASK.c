
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,struct n_tty_data*) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2, int VAR_3,
      struct n_tty_data *VAR_4)
{
 FUNC_0(VAR_1, VAR_4);
 FUNC_0(VAR_0, VAR_4);


 VAR_2 &= 7;


 if (VAR_3)
  VAR_2 |= 0x80;

 FUNC_0(VAR_2, VAR_4);
}
