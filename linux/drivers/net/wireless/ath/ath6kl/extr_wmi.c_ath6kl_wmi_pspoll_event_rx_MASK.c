
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_pspoll_event {int aid; } ;
struct wmi {int dummy; } ;
struct ath6kl_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl_vif*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wmi *VAR_1, u8 *VAR_2, int VAR_3,
          struct ath6kl_vif *VAR_4)
{
 struct wmi_pspoll_event *VAR_5;

 if (VAR_3 < sizeof(struct wmi_pspoll_event))
  return -VAR_0;

 VAR_5 = (struct wmi_pspoll_event *) VAR_2;

 FUNC_0(VAR_4, FUNC_1(VAR_5->aid));

 return 0;
}
