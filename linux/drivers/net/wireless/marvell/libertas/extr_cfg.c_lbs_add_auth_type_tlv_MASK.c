
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_auth_type {void* auth; TYPE_1__ header; } ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, enum nl80211_auth_type VAR_2)
{
 struct mrvl_ie_auth_type *VAR_3 = (void *) VAR_1;






 VAR_3->header.type = FUNC_0(VAR_0);
 VAR_3->header.len = FUNC_0(sizeof(*VAR_3)-sizeof(VAR_3->header));
 VAR_3->auth = FUNC_0(FUNC_1(VAR_2));
 return sizeof(*VAR_3);
}
