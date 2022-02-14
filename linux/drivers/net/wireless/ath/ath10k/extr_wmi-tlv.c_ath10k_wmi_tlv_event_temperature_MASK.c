
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_pdev_temperature_event {int temperature; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1,
         struct sk_buff *VAR_2)
{
 const struct wmi_tlv_pdev_temperature_event *VAR_3;

 VAR_3 = (struct wmi_tlv_pdev_temperature_event *)VAR_2->data;
 if (FUNC_0(VAR_2->len < sizeof(*VAR_3)))
  return -VAR_0;

 FUNC_2(VAR_1, FUNC_1(VAR_3->temperature));
 return 0;
}
