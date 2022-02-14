
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int mac_type; scalar_t__ media_type; } ;
struct e1000_adapter {int wol; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int ,int *) ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;







 if (!VAR_5->wol && VAR_6->mac_type >= 137 &&
    VAR_6->media_type == VAR_4) {
  u16 VAR_7 = 0;

  switch (VAR_6->mac_type) {
  case 137:
  case 134:
  case 133:
  case 132:
  case 128:
  case 131:
  case 136:
  case 135:
  case 130:
  case 129:
   if (FUNC_2(VAR_1) & VAR_0)
    goto out;
   break;
  default:
   goto out;
  }
  FUNC_0(VAR_6, VAR_3, &VAR_7);
  VAR_7 |= VAR_2;
  FUNC_1(VAR_6, VAR_3, VAR_7);
  FUNC_3(1);
 }
out:
 return;
}
