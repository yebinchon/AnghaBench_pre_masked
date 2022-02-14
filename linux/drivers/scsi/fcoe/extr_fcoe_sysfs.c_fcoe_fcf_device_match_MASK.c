
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {scalar_t__ switch_name; scalar_t__ fabric_name; scalar_t__ fc_map; int mac; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fcoe_fcf_device *VAR_0,
     struct fcoe_fcf_device *VAR_1)
{
 if (VAR_0->switch_name == VAR_1->switch_name &&
     VAR_0->fabric_name == VAR_1->fabric_name &&
     VAR_0->fc_map == VAR_1->fc_map &&
     FUNC_0(VAR_0->mac, VAR_1->mac))
  return 1;
 return 0;
}
