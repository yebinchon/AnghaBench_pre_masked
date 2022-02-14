
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct e1000_adapter*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct e1000_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10, VAR_11, VAR_12;

 if (VAR_9->mac.type >= VAR_7) {
  VAR_11 = FUNC_4(VAR_2);
  VAR_11 |= VAR_0;
  FUNC_5(VAR_2, VAR_11);
  VAR_12 = FUNC_4(FUNC_0(0));

  VAR_12 &= 0xcfffffff;

  VAR_12 |= 0x20000000;
  FUNC_5(FUNC_0(0), VAR_12);
 }
 if (VAR_9->phy.media_type == VAR_5 ||
     VAR_9->phy.media_type == VAR_6) {
  switch (VAR_9->mac.type) {
  case 130:
   return FUNC_3(VAR_8);
  case 129:
  case 128:
   return FUNC_2(VAR_8);
  default:
   VAR_10 = FUNC_4(VAR_3);
   VAR_10 |= VAR_1;
   FUNC_5(VAR_3, VAR_10);
   return 0;
  }
 } else if (VAR_9->phy.media_type == VAR_4) {
  return FUNC_1(VAR_8);
 }

 return 7;
}
