
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t idx; int seq; scalar_t__ key; int key_len; int alg; scalar_t__ err; } ;
struct TYPE_10__ {TYPE_3__ crypt; } ;
struct prism2_hostapd_param {TYPE_4__ u; int sta_addr; } ;
struct lib80211_crypt_data {int priv; TYPE_2__* ops; } ;
struct TYPE_7__ {size_t tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct TYPE_11__ {int ap; TYPE_1__ crypt_info; } ;
typedef TYPE_5__ local_info_t ;
struct TYPE_8__ {int (* get_key ) (scalar_t__,int,int ,int ) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (int ,int ,int ,struct lib80211_crypt_data***) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(local_info_t *VAR_4,
           struct prism2_hostapd_param *VAR_5,
           int VAR_6)
{
 struct lib80211_crypt_data **VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_5->u.crypt.err = 0;

 VAR_9 = VAR_6 -
  (int) ((char *) VAR_5->u.crypt.key - (char *) VAR_5);
 if (VAR_9 < 0)
  return -VAR_0;

 if (FUNC_2(VAR_5->sta_addr)) {
  VAR_8 = ((void*)0);
  if (VAR_5->u.crypt.idx >= VAR_3)
   VAR_5->u.crypt.idx = VAR_4->crypt_info.tx_keyidx;
  VAR_7 = &VAR_4->crypt_info.crypt[VAR_5->u.crypt.idx];
 } else {
  VAR_5->u.crypt.idx = 0;
  VAR_8 = FUNC_0(VAR_4->ap, VAR_5->sta_addr, 0,
         &VAR_7);

  if (VAR_8 == ((void*)0)) {
   VAR_5->u.crypt.err = VAR_2;
   return -VAR_0;
  }
 }

 if (*VAR_7 == ((void*)0) || (*VAR_7)->ops == ((void*)0)) {
  FUNC_3(VAR_5->u.crypt.alg, "none", 5);
  VAR_5->u.crypt.key_len = 0;
  VAR_5->u.crypt.idx = 0xff;
 } else {
  FUNC_5(VAR_5->u.crypt.alg, (*VAR_7)->ops->name,
   VAR_1);
  VAR_5->u.crypt.key_len = 0;

  FUNC_4(VAR_5->u.crypt.seq, 0, 8);
  if ((*VAR_7)->ops->get_key) {
   VAR_5->u.crypt.key_len =
    (*VAR_7)->ops->get_key(VAR_5->u.crypt.key,
             VAR_9,
             VAR_5->u.crypt.seq,
             (*VAR_7)->priv);
  }
 }

 if (VAR_8)
  FUNC_1(VAR_8);

 return 0;
}
