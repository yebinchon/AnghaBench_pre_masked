
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * transfer_buffer; int * setup_packet; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->setup_packet);
 VAR_0->setup_packet = ((void*)0);

 FUNC_0(VAR_0->transfer_buffer);
 VAR_0->transfer_buffer = ((void*)0);

 FUNC_1(VAR_0);
}
