
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mdix; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;

s32 FUNC_3(struct e1000_hw *VAR_7)
{
 s32 VAR_8;
 u16 VAR_9;


 VAR_8 = FUNC_1(VAR_7, VAR_2, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_9 |= VAR_0;


 VAR_9 |= VAR_1;

 VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_1(VAR_7, VAR_6, &VAR_9);
 if (VAR_8)
  return VAR_8;
 VAR_9 &= ~VAR_5;





 switch (VAR_7->phy.mdix) {
 case 1:
  break;
 case 2:
  VAR_9 |= VAR_4;
  break;
 case 0:
 default:
  VAR_9 |= VAR_3;
  break;
 }
 VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_9);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_7);
}
