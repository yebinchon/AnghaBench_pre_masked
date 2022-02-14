
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; } ;
struct TYPE_2__ {int RGMII_CTRL; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;



 int FUNC_0 (unsigned long,int *) ;

__attribute__((used)) static void FUNC_1(struct pch_gbe_adapter *VAR_4, u16 VAR_5,
        u16 VAR_6)
{
 struct pch_gbe_hw *VAR_7 = &VAR_4->hw;
 unsigned long VAR_8 = 0;


 switch (VAR_5) {
 case 130:
  VAR_8 = (VAR_3 |
    VAR_0);
  break;
 case 129:
  VAR_8 = (VAR_2 |
    VAR_0);
  break;
 case 128:
  VAR_8 = (VAR_1 |
    VAR_0);
  break;
 }
 FUNC_0(VAR_8, &VAR_7->reg->RGMII_CTRL);
}
