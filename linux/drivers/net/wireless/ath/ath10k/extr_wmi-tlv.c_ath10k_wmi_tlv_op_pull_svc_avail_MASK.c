
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_svc_avail_ev_arg {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,struct wmi_svc_avail_ev_arg*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_1,
         struct sk_buff *VAR_2,
         struct wmi_svc_avail_ev_arg *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2->data, VAR_2->len,
      VAR_0, VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_1, "failed to parse svc_avail tlv: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
