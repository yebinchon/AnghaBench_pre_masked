
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_transaction_argresp {size_t size; } ;
struct file {struct simple_transaction_argresp* private_data; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 () ;

void FUNC_2(struct file *VAR_1, size_t VAR_2)
{
 struct simple_transaction_argresp *VAR_3 = VAR_1->private_data;

 FUNC_0(VAR_2 > VAR_0);





 FUNC_1();
 VAR_3->size = VAR_2;
}
