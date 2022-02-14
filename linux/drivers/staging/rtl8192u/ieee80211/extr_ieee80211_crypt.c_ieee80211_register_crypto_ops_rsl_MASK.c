
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_crypto_ops {int name; } ;
struct ieee80211_crypto_alg {int list; struct ieee80211_crypto_ops* ops; } ;
struct TYPE_2__ {int lock; int algs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct ieee80211_crypto_alg* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ieee80211_crypto_ops *VAR_3)
{
 unsigned long VAR_4;
 struct ieee80211_crypto_alg *VAR_5;

 if (!VAR_2)
  return -1;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->ops = VAR_3;

 FUNC_3(&VAR_2->lock, VAR_4);
 FUNC_1(&VAR_5->list, &VAR_2->algs);
 FUNC_4(&VAR_2->lock, VAR_4);

 FUNC_2("ieee80211_crypt: registered algorithm '%s'\n",
        VAR_3->name);

 return 0;
}
