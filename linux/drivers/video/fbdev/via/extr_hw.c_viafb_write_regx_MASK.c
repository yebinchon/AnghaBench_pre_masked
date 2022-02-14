
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_reg {int mask; int value; int index; int port; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct io_reg VAR_0[], int VAR_1)
{
 int VAR_2;



 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2].port, VAR_0[VAR_2].index,
   VAR_0[VAR_2].value, VAR_0[VAR_2].mask);
}
