
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wil6210_priv {int max_assoc_sta; TYPE_1__* sta; } ;
struct TYPE_2__ {scalar_t__ mid; scalar_t__ status; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct wil6210_priv *VAR_1, u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_assoc_sta; VAR_3++) {
  if (VAR_1->sta[VAR_3].mid == VAR_2 &&
      VAR_1->sta[VAR_3].status == VAR_0)
   return 1;
 }

 return 0;
}
