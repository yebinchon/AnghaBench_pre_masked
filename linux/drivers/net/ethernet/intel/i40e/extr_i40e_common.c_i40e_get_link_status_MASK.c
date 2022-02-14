
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_info; } ;
struct TYPE_4__ {TYPE_1__ link_info; scalar_t__ get_link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct i40e_hw*) ;

i40e_status FUNC_2(struct i40e_hw *VAR_2, bool *VAR_3)
{
 i40e_status VAR_4 = 0;

 if (VAR_2->phy.get_link_info) {
  VAR_4 = FUNC_1(VAR_2);

  if (VAR_4)
   FUNC_0(VAR_2, VAR_1, "get link failed: status %d\n",
       VAR_4);
 }

 *VAR_3 = VAR_2->phy.link_info.link_info & VAR_0;

 return VAR_4;
}
