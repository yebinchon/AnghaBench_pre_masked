
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta_info {int users; struct lib80211_crypt_data* crypt; } ;
struct lib80211_crypt_data {int dummy; } ;
struct ieee80211_hdr {int addr2; } ;
struct TYPE_4__ {TYPE_3__* ap; } ;
typedef TYPE_1__ local_info_t ;
struct TYPE_5__ {int sta_table_lock; } ;


 struct sta_info* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(local_info_t *VAR_0,
        struct ieee80211_hdr *VAR_1,
        struct lib80211_crypt_data **VAR_2,
        void **VAR_3)
{
 struct sta_info *VAR_4;

 FUNC_3(&VAR_0->ap->sta_table_lock);
 VAR_4 = FUNC_0(VAR_0->ap, VAR_1->addr2);
 if (VAR_4)
  FUNC_2(&VAR_4->users);
 FUNC_4(&VAR_0->ap->sta_table_lock);

 if (!VAR_4)
  return -1;

 if (VAR_4->crypt) {
  *VAR_2 = VAR_4->crypt;
  *VAR_3 = VAR_4;


 } else
  FUNC_1(&VAR_4->users);

 return 0;
}
