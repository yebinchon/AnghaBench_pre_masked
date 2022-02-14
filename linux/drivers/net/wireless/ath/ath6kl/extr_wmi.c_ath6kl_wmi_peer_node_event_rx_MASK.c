
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_peer_node_event {scalar_t__ event_code; int peer_mac_addr; } ;
struct wmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct wmi *VAR_4, u8 *VAR_5, int VAR_6)
{
 struct wmi_peer_node_event *VAR_7;

 if (VAR_6 < sizeof(struct wmi_peer_node_event))
  return -VAR_1;

 VAR_7 = (struct wmi_peer_node_event *) VAR_5;

 if (VAR_7->event_code == VAR_2)
  FUNC_0(VAR_0, "joined node with mac addr: %pM\n",
      VAR_7->peer_mac_addr);
 else if (VAR_7->event_code == VAR_3)
  FUNC_0(VAR_0, "left node with mac addr: %pM\n",
      VAR_7->peer_mac_addr);

 return 0;
}
