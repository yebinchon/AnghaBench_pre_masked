
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct mwifiex_bssdescriptor {TYPE_1__* bcn_wpa_ie; } ;
struct ie_body {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct ie_body*,scalar_t__*) ;
 scalar_t__** VAR_3 ;

__attribute__((used)) static u8
FUNC_2(struct mwifiex_bssdescriptor *VAR_4, u32 VAR_5)
{
 u8 *VAR_6;
 struct ie_body *VAR_7;
 u8 VAR_8 = VAR_0;

 if (FUNC_0(VAR_4->bcn_wpa_ie, VAR_1)) {
  VAR_7 = (struct ie_body *)((u8 *)VAR_4->bcn_wpa_ie->data +
         VAR_2);
  VAR_6 = &VAR_3[VAR_5][0];
  VAR_8 = FUNC_1(VAR_7, VAR_6);
  if (VAR_8)
   return VAR_8;
 }
 return VAR_8;
}
