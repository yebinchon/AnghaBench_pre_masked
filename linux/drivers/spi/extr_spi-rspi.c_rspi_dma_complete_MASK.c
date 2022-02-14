
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rspi_data {int dma_callbacked; int wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct rspi_data *VAR_1 = VAR_0;

 VAR_1->dma_callbacked = 1;
 FUNC_0(&VAR_1->wait);
}
