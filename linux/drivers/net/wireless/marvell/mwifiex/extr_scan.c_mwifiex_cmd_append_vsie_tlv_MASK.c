
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_private {TYPE_1__* vs_ie; } ;
struct TYPE_4__ {void* len; void* type; } ;
struct mwifiex_ie_types_vendor_param_set {TYPE_2__ header; int ie; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_3__ {int mask; scalar_t__* ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__) ;

int
FUNC_3(struct mwifiex_private *VAR_2,
       u16 VAR_3, u8 **VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct mwifiex_ie_types_vendor_param_set *VAR_7;

 if (!VAR_4)
  return 0;
 if (!(*VAR_4))
  return 0;





 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->vs_ie[VAR_5].mask & VAR_3) {
   VAR_7 =
    (struct mwifiex_ie_types_vendor_param_set *)
    *VAR_4;
   VAR_7->header.type =
    FUNC_0(VAR_1);
   VAR_7->header.len =
    FUNC_0((((u16) VAR_2->vs_ie[VAR_5].ie[1])
    & 0x00FF) + 2);
   FUNC_2(VAR_7->ie, VAR_2->vs_ie[VAR_5].ie,
          FUNC_1(VAR_7->header.len));
   *VAR_4 += FUNC_1(VAR_7->header.len) +
       sizeof(struct mwifiex_ie_types_header);
   VAR_6 += FUNC_1(VAR_7->header.len) +
       sizeof(struct mwifiex_ie_types_header);
  }
 }
 return VAR_6;
}
