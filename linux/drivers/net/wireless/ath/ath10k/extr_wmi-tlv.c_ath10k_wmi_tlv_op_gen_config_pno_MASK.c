
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_pno_scan_req {scalar_t__ enable; } ;
struct sk_buff {int dummy; } ;
struct ath10k {int dummy; } ;


 struct sk_buff* FUNC_0 (struct ath10k*,int ,struct wmi_pno_scan_req*) ;
 struct sk_buff* FUNC_1 (struct ath10k*,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct ath10k *VAR_0, u32 VAR_1,
     struct wmi_pno_scan_req *VAR_2)
{
 if (VAR_2->enable)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1);
}
