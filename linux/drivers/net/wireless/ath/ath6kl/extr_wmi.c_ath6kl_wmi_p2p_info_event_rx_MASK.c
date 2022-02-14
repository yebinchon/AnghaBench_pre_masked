
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_p2p_macaddr {int mac_addr; } ;
struct wmi_p2p_info_event {scalar_t__ data; int len; int info_req_flags; } ;
struct wmi_p2p_hmodel {scalar_t__ p2p_model; } ;
struct wmi_p2p_capabilities {int go_power_save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_5, int VAR_6)
{
 struct wmi_p2p_info_event *VAR_7;
 u32 VAR_8;
 u16 VAR_9;

 if (VAR_6 < sizeof(*VAR_7))
  return -VAR_1;

 VAR_7 = (struct wmi_p2p_info_event *) VAR_5;
 VAR_8 = FUNC_2(VAR_7->info_req_flags);
 VAR_9 = FUNC_1(VAR_7->len);
 FUNC_0(VAR_0, "p2p_info: flags=%x len=%d\n", VAR_8, VAR_9);

 if (VAR_8 & VAR_2) {
  struct wmi_p2p_capabilities *VAR_10;
  if (VAR_9 < sizeof(*VAR_10))
   return -VAR_1;
  VAR_10 = (struct wmi_p2p_capabilities *) VAR_7->data;
  FUNC_0(VAR_0, "p2p_info: GO Power Save = %d\n",
      VAR_10->go_power_save);
 }

 if (VAR_8 & VAR_4) {
  struct wmi_p2p_macaddr *VAR_11;
  if (VAR_9 < sizeof(*VAR_11))
   return -VAR_1;
  VAR_11 = (struct wmi_p2p_macaddr *) VAR_7->data;
  FUNC_0(VAR_0, "p2p_info: MAC Address = %pM\n",
      VAR_11->mac_addr);
 }

 if (VAR_8 & VAR_3) {
  struct wmi_p2p_hmodel *VAR_12;
  if (VAR_9 < sizeof(*VAR_12))
   return -VAR_1;
  VAR_12 = (struct wmi_p2p_hmodel *) VAR_7->data;
  FUNC_0(VAR_0, "p2p_info: P2P Model = %d (%s)\n",
      VAR_12->p2p_model,
      VAR_12->p2p_model ? "host" : "firmware");
 }
 return 0;
}
