
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {int OutEpQueueSel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct adapter*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_3)
{
 u16 VAR_4 = 0;

 switch (VAR_3->HalData->OutEpQueueSel) {
 case 130:
  VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = VAR_1;
  break;
 case 128:
  VAR_4 = VAR_2;
  break;
 default:
  break;
 }
 FUNC_0(VAR_3, VAR_4, VAR_4, VAR_4, VAR_4,
       VAR_4, VAR_4);
}
