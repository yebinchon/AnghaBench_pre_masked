
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int media_type; int get_link_status; int serdes_has_link; int mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;



 int FUNC_1 (int ) ;

bool FUNC_2(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 bool VAR_5 = 0;







 switch (VAR_4->media_type) {
 case 130:
  if (VAR_4->mac_type == VAR_2)
   VAR_4->get_link_status = 1;
  if (VAR_4->get_link_status) {
   FUNC_0(VAR_4);
   VAR_5 = !VAR_4->get_link_status;
  } else {
   VAR_5 = 1;
  }
  break;
 case 129:
  FUNC_0(VAR_4);
  VAR_5 = !!(FUNC_1(VAR_1) & VAR_0);
  break;
 case 128:
  FUNC_0(VAR_4);
  VAR_5 = VAR_4->serdes_has_link;
  break;
 default:
  break;
 }

 return VAR_5;
}
