
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_rates_param_set {TYPE_1__ header; } ;
struct cfg80211_bss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int const*,int*) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 (struct cfg80211_bss*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(u8 *VAR_3, struct cfg80211_bss *VAR_4)
{
 struct mrvl_ie_rates_param_set *VAR_5 = (void *)VAR_3;
 const u8 *VAR_6, *VAR_7;
 int VAR_8 = 0;

 FUNC_4();
 VAR_6 = FUNC_2(VAR_4, VAR_2);
 VAR_7 = FUNC_2(VAR_4, VAR_1);






 VAR_5->header.type = FUNC_1(VAR_0);
 VAR_3 += sizeof(VAR_5->header);


 if (VAR_6) {
  VAR_3 = FUNC_0(VAR_3, VAR_6, &VAR_8);


  if (VAR_7)
   VAR_3 = FUNC_0(VAR_3, VAR_7, &VAR_8);
 } else {
  FUNC_3("assoc: bss had no basic rate IE\n");

  *VAR_3++ = 0x82;
  *VAR_3++ = 0x84;
  *VAR_3++ = 0x8b;
  *VAR_3++ = 0x96;
  VAR_8 = 4;
 }
 FUNC_5();

 VAR_5->header.len = FUNC_1(VAR_8);
 return sizeof(VAR_5->header) + VAR_8;
}
