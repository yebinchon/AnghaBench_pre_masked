
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int dummy; } ;
struct hnae_handle {int dummy; } ;
typedef enum hnae_led_state { ____Placeholder_hnae_led_state } hnae_led_state ;


 int FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hns_mac_cb*,int) ;
 struct hns_mac_cb* FUNC_2 (struct hnae_handle*) ;

__attribute__((used)) static int FUNC_3(struct hnae_handle *VAR_0,
      enum hnae_led_state VAR_1)
{
 struct hns_mac_cb *VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
