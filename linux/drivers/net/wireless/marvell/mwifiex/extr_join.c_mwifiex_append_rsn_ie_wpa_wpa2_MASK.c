
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_private {scalar_t__* wpa_ie; } ;
struct TYPE_2__ {void* len; void* type; } ;
struct mwifiex_ie_types_rsn_param_set {TYPE_1__ header; int rsn_ie; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_0,
       u8 **VAR_1)
{
 struct mwifiex_ie_types_rsn_param_set *VAR_2;
 int VAR_3;

 if (!VAR_1 || !(*VAR_1))
  return 0;

 VAR_2 = (struct mwifiex_ie_types_rsn_param_set *) (*VAR_1);
 VAR_2->header.type = FUNC_0((u16) VAR_0->wpa_ie[0]);
 VAR_2->header.type = FUNC_0(
     FUNC_1(VAR_2->header.type) & 0x00FF);
 VAR_2->header.len = FUNC_0((u16) VAR_0->wpa_ie[1]);
 VAR_2->header.len = FUNC_0(FUNC_1(VAR_2->header.len)
        & 0x00FF);
 if (FUNC_1(VAR_2->header.len) <= (sizeof(VAR_0->wpa_ie) - 2))
  FUNC_2(VAR_2->rsn_ie, &VAR_0->wpa_ie[2],
         FUNC_1(VAR_2->header.len));
 else
  return -1;

 VAR_3 = sizeof(VAR_2->header) +
     FUNC_1(VAR_2->header.len);
 *VAR_1 += VAR_3;

 return VAR_3;
}
