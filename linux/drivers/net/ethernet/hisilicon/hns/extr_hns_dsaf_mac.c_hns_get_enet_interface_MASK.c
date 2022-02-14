
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int max_speed; size_t phy_if; } ;
typedef enum mac_mode { ____Placeholder_mac_mode } mac_mode ;


 int VAR_0 ;
 int VAR_1 ;



 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static enum mac_mode FUNC_0(const struct hns_mac_cb *VAR_4)
{
 switch (VAR_4->max_speed) {
 case 130:
  return VAR_2[VAR_4->phy_if];
 case 129:
  return VAR_3[VAR_4->phy_if];
 case 128:
  return VAR_1;
 default:
  return VAR_0;
 }
}
