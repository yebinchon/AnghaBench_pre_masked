
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int vlan_id; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_2__ mng_cookie; TYPE_1__ mac; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ,scalar_t__,scalar_t__) ;



 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct e1000_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;

 switch (VAR_5->mac.type) {
 case 130:
 case 129:
 case 128:
  if (VAR_5->mng_cookie.vlan_id != 0) {






   VAR_8 = (VAR_5->mng_cookie.vlan_id >>
           VAR_3) &
       VAR_2;
   VAR_9 =
       FUNC_0(VAR_5->mng_cookie.vlan_id &
    VAR_1);
  }
  break;
 default:
  break;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {




  VAR_7 = (VAR_6 == VAR_8) ? VAR_9 : 0;
  FUNC_1(VAR_5, VAR_0, VAR_6, VAR_7);
  FUNC_2();
 }
}
