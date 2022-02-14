
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_svc_avail_ev_arg {void const* service_map_ext; int service_map_ext_len; } ;
struct ath10k {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;


__attribute__((used)) static int FUNC_0(struct ath10k *VAR_1, u16 VAR_2, u16 VAR_3,
       const void *VAR_4, void *VAR_5)
{
 struct wmi_svc_avail_ev_arg *VAR_6 = VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_6->service_map_ext_len = *(__le32 *)VAR_4;
  VAR_6->service_map_ext = VAR_4 + sizeof(__le32);
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
