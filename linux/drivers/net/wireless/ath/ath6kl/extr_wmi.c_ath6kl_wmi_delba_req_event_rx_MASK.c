
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_delba_event {int tid; } ;
struct wmi {int dummy; } ;
struct ath6kl_vif {int dummy; } ;


 int FUNC_0 (struct ath6kl_vif*,int ) ;

__attribute__((used)) static int FUNC_1(struct wmi *VAR_0, u8 *VAR_1, int VAR_2,
      struct ath6kl_vif *VAR_3)
{
 struct wmi_delba_event *VAR_4 = (struct wmi_delba_event *) VAR_1;

 FUNC_0(VAR_3, VAR_4->tid);

 return 0;
}
