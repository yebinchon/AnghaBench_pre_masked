
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_start_scan_arg {int dummy; } ;
struct wmi_10x_start_scan_cmd {int tlvs; int common; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_2 (struct ath10k*,size_t) ;
 int FUNC_3 (int *,struct wmi_start_scan_arg const*) ;
 int FUNC_4 (int *,struct wmi_start_scan_arg const*) ;
 int FUNC_5 (struct wmi_start_scan_arg const*) ;
 int FUNC_6 (struct wmi_start_scan_arg const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct ath10k *VAR_2,
     const struct wmi_start_scan_arg *VAR_3)
{
 struct wmi_10x_start_scan_cmd *VAR_4;
 struct sk_buff *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_6 = sizeof(*VAR_4) + FUNC_5(VAR_3);
 VAR_5 = FUNC_2(VAR_2, VAR_6);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_4 = (struct wmi_10x_start_scan_cmd *)VAR_5->data;

 FUNC_3(&VAR_4->common, VAR_3);
 FUNC_4(&VAR_4->tlvs, VAR_3);

 FUNC_1(VAR_2, VAR_0, "wmi 10x start scan\n");
 return VAR_5;
}
