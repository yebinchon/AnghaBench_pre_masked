
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int num_sgs; scalar_t__ transfer_buffer; int * sg; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_sgs; VAR_1++)
  FUNC_1(FUNC_0(&VAR_0->sg[VAR_1]));

 if (VAR_0->transfer_buffer)
  FUNC_1(VAR_0->transfer_buffer);

 FUNC_2(VAR_0);
}
