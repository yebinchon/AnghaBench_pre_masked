
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucan_priv {int * context_array; scalar_t__ available_tx_urbs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ucan_priv *VAR_0)
{
 if (!VAR_0->context_array)
  return;


 VAR_0->available_tx_urbs = 0;

 FUNC_0(VAR_0->context_array);
 VAR_0->context_array = ((void*)0);
}
