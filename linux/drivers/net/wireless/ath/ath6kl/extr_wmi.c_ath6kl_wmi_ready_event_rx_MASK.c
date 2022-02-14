
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_ready_event_2 {int phy_cap; int abi_version; int sw_version; int mac_addr; } ;
struct wmi {int parent_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wmi *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct wmi_ready_event_2 *VAR_4 = (struct wmi_ready_event_2 *) VAR_2;

 if (VAR_3 < sizeof(struct wmi_ready_event_2))
  return -VAR_0;

 FUNC_0(VAR_1->parent_dev, VAR_4->mac_addr,
      FUNC_1(VAR_4->sw_version),
      FUNC_1(VAR_4->abi_version), VAR_4->phy_cap);

 return 0;
}
