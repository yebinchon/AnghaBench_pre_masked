
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int hw_addr; TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_1 (int ) ;

u16 FUNC_2(struct ixgbe_hw *VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;

 switch (VAR_5->mac.type) {
 case 133:
  VAR_8 = VAR_2;
  VAR_7 = VAR_0;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_8 = VAR_3;
  VAR_7 = VAR_1;
  break;
 default:
  return 1;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_8);
 if (FUNC_1(VAR_5->hw_addr))
  VAR_6 = 0;
 VAR_6 &= VAR_4;


 VAR_6++;

 if (VAR_6 > VAR_7)
  VAR_6 = VAR_7;

 return VAR_6;
}
