
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {int dummy; } ;
struct hostif_stop_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct hostif_stop_request* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ks_wlan_private*,struct hostif_stop_request*,int ) ;

__attribute__((used)) static
void FUNC_3(struct ks_wlan_private *VAR_1)
{
 struct hostif_stop_request *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return;

 FUNC_2(VAR_1, VAR_2, FUNC_0(sizeof(*VAR_2)));
}
