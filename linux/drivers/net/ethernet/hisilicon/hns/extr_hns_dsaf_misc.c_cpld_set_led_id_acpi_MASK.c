
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int dev; int mac_id; } ;
typedef enum hnae_led_state { ____Placeholder_hnae_led_state } hnae_led_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hns_mac_cb*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hns_mac_cb *VAR_4,
    enum hnae_led_state VAR_5)
{
 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_4,
           VAR_3,
           VAR_1,
           VAR_4->mac_id);
  break;
 case 128:
  FUNC_1(VAR_4,
           VAR_3,
           VAR_0,
           VAR_4->mac_id);
  break;
 default:
  FUNC_0(VAR_4->dev, "invalid led state: %d!", VAR_5);
  return -VAR_2;
 }

 return 0;
}
