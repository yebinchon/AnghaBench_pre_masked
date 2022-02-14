
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ks_wlan_private {int dummy; } ;
struct hostif_power_mgmt_request {void* receive_dtims; void* wake_up; void* mode; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct hostif_power_mgmt_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ks_wlan_private*,struct hostif_power_mgmt_request*,int ) ;

__attribute__((used)) static
void FUNC_4(struct ks_wlan_private *VAR_1,
          u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct hostif_power_mgmt_request *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_5->mode = FUNC_0(VAR_2);
 VAR_5->wake_up = FUNC_0(VAR_3);
 VAR_5->receive_dtims = FUNC_0(VAR_4);

 FUNC_3(VAR_1, VAR_5, FUNC_1(sizeof(*VAR_5)));
}
