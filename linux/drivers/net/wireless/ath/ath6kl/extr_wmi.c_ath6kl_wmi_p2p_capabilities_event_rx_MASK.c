
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_p2p_capabilities_event {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_2, int VAR_3)
{
 struct wmi_p2p_capabilities_event *VAR_4;
 u16 VAR_5;

 if (VAR_3 < sizeof(*VAR_4))
  return -VAR_1;

 VAR_4 = (struct wmi_p2p_capabilities_event *) VAR_2;
 VAR_5 = FUNC_1(VAR_4->len);
 FUNC_0(VAR_0, "p2p_capab: len=%u\n", VAR_5);

 return 0;
}
