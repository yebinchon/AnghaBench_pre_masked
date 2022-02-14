
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct slcan* disc_data; } ;
struct slcan {int tx_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct slcan *VAR_1 = VAR_0->disc_data;

 FUNC_0(&VAR_1->tx_work);
}
