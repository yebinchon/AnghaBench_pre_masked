
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wil6210_priv {int max_assoc_sta; TYPE_1__* sta; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ mid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct wil6210_priv *VAR_2, u8 VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->max_assoc_sta; VAR_5++) {
  if (VAR_2->sta[VAR_5].status == VAR_1)
   continue;
  if (VAR_2->sta[VAR_5].mid != VAR_3)
   continue;
  if (VAR_4 == 0)
   return VAR_5;
  VAR_4--;
 }

 return -VAR_0;
}
