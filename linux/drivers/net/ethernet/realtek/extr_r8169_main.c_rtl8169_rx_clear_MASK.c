
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {TYPE_1__* RxDescArray; int ** Rx_databuff; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1 && VAR_3->Rx_databuff[VAR_4]; VAR_4++) {
  FUNC_1(FUNC_5(VAR_3),
          FUNC_3(VAR_3->RxDescArray[VAR_4].addr),
          VAR_2, VAR_0);
  FUNC_0(VAR_3->Rx_databuff[VAR_4], FUNC_2(VAR_2));
  VAR_3->Rx_databuff[VAR_4] = ((void*)0);
  FUNC_4(VAR_3->RxDescArray + VAR_4);
 }
}
