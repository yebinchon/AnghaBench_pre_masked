
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1c_hw {int device_id; int nic_type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct atl1c_hw *VAR_6)
{
 switch (VAR_6->device_id) {
 case 128:
  VAR_6->nic_type = VAR_3;
  break;
 case 129:
  VAR_6->nic_type = VAR_0;
  break;
 case 131:
  VAR_6->nic_type = VAR_4;
  break;
 case 130:
  VAR_6->nic_type = VAR_5;
  break;
 case 133:
  VAR_6->nic_type = VAR_1;
  break;
 case 132:
  VAR_6->nic_type = VAR_2;
  break;
 default:
  break;
 }
}
