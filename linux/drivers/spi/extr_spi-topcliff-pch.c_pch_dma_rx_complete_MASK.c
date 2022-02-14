
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_spi_data {int transfer_complete; int wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct pch_spi_data *VAR_1 = VAR_0;


 VAR_1->transfer_complete = 1;
 FUNC_0(&VAR_1->wait);
}
