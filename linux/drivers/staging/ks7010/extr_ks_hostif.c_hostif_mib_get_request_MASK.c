
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ks_wlan_private {int dummy; } ;
struct hostif_mib_get_request {int mib_attribute; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct hostif_mib_get_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ks_wlan_private*,struct hostif_mib_get_request*,int ) ;

__attribute__((used)) static void FUNC_4(struct ks_wlan_private *VAR_1,
       u32 VAR_2)
{
 struct hostif_mib_get_request *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->mib_attribute = FUNC_0(VAR_2);

 FUNC_3(VAR_1, VAR_3, FUNC_1(sizeof(*VAR_3)));
}
