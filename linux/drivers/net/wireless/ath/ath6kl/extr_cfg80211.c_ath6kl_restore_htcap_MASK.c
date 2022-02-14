
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {TYPE_3__** bands; } ;
struct ath6kl_vif {TYPE_1__* ar; } ;
struct TYPE_5__ {int ht_supported; } ;
struct TYPE_6__ {TYPE_2__ ht_cap; } ;
struct TYPE_4__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl_vif*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ath6kl_vif *VAR_1)
{
 struct wiphy *VAR_2 = VAR_1->ar->wiphy;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_2->bands[VAR_3])
   continue;

  VAR_4 = FUNC_0(VAR_1, VAR_3,
    VAR_2->bands[VAR_3]->ht_cap.ht_supported);
  if (VAR_4)
   return VAR_4;
 }

 return VAR_4;
}
