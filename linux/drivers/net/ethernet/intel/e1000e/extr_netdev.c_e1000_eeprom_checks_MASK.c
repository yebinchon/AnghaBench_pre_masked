
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct e1000_adapter {TYPE_1__* pdev; struct e1000_hw hw; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 int VAR_4;
 u16 VAR_5 = 0;

 if (VAR_3->mac.type != VAR_1)
  return;

 VAR_4 = FUNC_2(VAR_3, VAR_0, 1, &VAR_5);
 FUNC_3(&VAR_5);
 if (!VAR_4 && (!(VAR_5 & FUNC_0(0)))) {

  FUNC_1(&VAR_2->pdev->dev,
    "Warning: detected DSPD enabled in EEPROM\n");
 }
}
