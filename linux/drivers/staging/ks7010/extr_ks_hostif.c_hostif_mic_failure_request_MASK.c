
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_wlan_private {int dummy; } ;
struct hostif_mic_failure_request {void* timer; void* failure_count; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct hostif_mic_failure_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ks_wlan_private*,struct hostif_mic_failure_request*,int ) ;

__attribute__((used)) static
void FUNC_4(struct ks_wlan_private *VAR_1,
    u16 VAR_2, u16 VAR_3)
{
 struct hostif_mic_failure_request *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->failure_count = FUNC_0(VAR_2);
 VAR_4->timer = FUNC_0(VAR_3);

 FUNC_3(VAR_1, VAR_4, FUNC_1(sizeof(*VAR_4)));
}
