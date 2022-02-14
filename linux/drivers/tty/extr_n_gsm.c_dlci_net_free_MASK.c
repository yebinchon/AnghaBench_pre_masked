
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_dlci {int * net; int prev_data; int data; int prev_adaption; int adaption; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gsm_dlci *VAR_0)
{
 if (!VAR_0->net) {
  FUNC_0(1);
  return;
 }
 VAR_0->adaption = VAR_0->prev_adaption;
 VAR_0->data = VAR_0->prev_data;
 FUNC_1(VAR_0->net);
 VAR_0->net = ((void*)0);
}
