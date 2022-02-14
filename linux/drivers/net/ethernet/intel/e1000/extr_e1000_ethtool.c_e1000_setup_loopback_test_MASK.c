
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ media_type; int mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct e1000_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7;

 if (VAR_6->media_type == VAR_3 ||
     VAR_6->media_type == VAR_4) {
  switch (VAR_6->mac_type) {
  case 131:
  case 129:
  case 130:
  case 128:
   return FUNC_0(VAR_5);
  default:
   VAR_7 = FUNC_1(VAR_1);
   VAR_7 |= VAR_0;
   FUNC_2(VAR_1, VAR_7);
   return 0;
  }
 } else if (VAR_6->media_type == VAR_2) {
  return FUNC_0(VAR_5);
 }

 return 7;
}
