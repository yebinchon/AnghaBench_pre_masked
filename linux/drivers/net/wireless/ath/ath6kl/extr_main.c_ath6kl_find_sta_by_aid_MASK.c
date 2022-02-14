
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath6kl_sta {size_t aid; } ;
struct ath6kl {struct ath6kl_sta* sta_list; } ;


 size_t VAR_0 ;

struct ath6kl_sta *FUNC_0(struct ath6kl *VAR_1, u8 VAR_2)
{
 struct ath6kl_sta *VAR_3 = ((void*)0);
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->sta_list[VAR_4].aid == VAR_2) {
   VAR_3 = &VAR_1->sta_list[VAR_4];
   break;
  }
 }
 return VAR_3;
}
