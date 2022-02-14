
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int get_link_status; int serdes_has_link; } ;
struct TYPE_3__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int *,int *) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_1)
{
 s32 VAR_2;
 u16 VAR_3, VAR_4;

 if (VAR_1->phy.media_type != VAR_0) {
  VAR_2 = FUNC_3(VAR_1, &VAR_3,
            &VAR_4);




  VAR_1->mac.get_link_status = !VAR_1->mac.serdes_has_link;






  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   FUNC_0("Error configuring flow control\n");
 } else {
  VAR_2 = FUNC_1(VAR_1);
 }

 return VAR_2;
}
