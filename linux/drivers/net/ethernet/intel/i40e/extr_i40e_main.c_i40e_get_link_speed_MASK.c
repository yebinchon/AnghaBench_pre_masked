
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_4__ {int link_speed; } ;
struct TYPE_5__ {TYPE_1__ link_info; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;
struct i40e_pf {TYPE_3__ hw; } ;


 int VAR_0 ;






__attribute__((used)) static int FUNC_0(struct i40e_vsi *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->back;

 switch (VAR_2->hw.phy.link_info.link_speed) {
 case 128:
  return 40000;
 case 129:
  return 25000;
 case 130:
  return 20000;
 case 132:
  return 10000;
 case 131:
  return 1000;
 default:
  return -VAR_0;
 }
}
