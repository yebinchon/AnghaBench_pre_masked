
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_echo_event {int value; } ;
struct wmi_echo_ev_arg {int value; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct ath10k *VAR_0,
          struct sk_buff *VAR_1,
          struct wmi_echo_ev_arg *VAR_2)
{
 struct wmi_echo_event *VAR_3 = (void *)VAR_1->data;

 VAR_2->value = VAR_3->value;

 return 0;
}
