
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int original_ms_type; int ms_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;


 VAR_4 = FUNC_0(VAR_3, VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;


 VAR_3->phy.original_ms_type = (VAR_5 & VAR_1) ?
     ((VAR_5 & VAR_0) ?
      129 : 128) : 130;

 switch (VAR_3->phy.ms_type) {
 case 129:
  VAR_5 |= (VAR_1 | VAR_0);
  break;
 case 128:
  VAR_5 |= VAR_1;
  VAR_5 &= ~(VAR_0);
  break;
 case 130:
  VAR_5 &= ~VAR_1;

 default:
  break;
 }

 return FUNC_1(VAR_3, VAR_2, VAR_5);
}
