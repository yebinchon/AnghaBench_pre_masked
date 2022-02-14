
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {scalar_t__ RxDescRing; int * Rx_skbuff; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sis190_private*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sis190_private *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->Rx_skbuff[VAR_2])
   continue;
  FUNC_0(VAR_1, VAR_1->Rx_skbuff + VAR_2, VAR_1->RxDescRing + VAR_2);
 }
}
