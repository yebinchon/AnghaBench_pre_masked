
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sc {unsigned char encoding_sa; int * sa; } ;
struct TYPE_3__ {int id; } ;
struct macsec_tx_sa {int active; int lock; int next_pn; TYPE_1__ key; } ;
struct macsec_secy {scalar_t__ key_len; int operational; int icv_len; struct macsec_tx_sc tx_sc; } ;
struct genl_info {struct nlattr** attrs; } ;
struct TYPE_4__ {struct macsec_secy secy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct genl_info*) ;
 struct net_device* FUNC_3 (int ,struct nlattr**) ;
 int FUNC_4 (struct macsec_tx_sa*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct macsec_tx_sa*) ;
 struct macsec_tx_sa* FUNC_6 (int,int ) ;
 TYPE_2__* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 unsigned char FUNC_10 (struct nlattr*) ;
 scalar_t__ FUNC_11 (struct nlattr*) ;
 int FUNC_12 (int ,struct nlattr*,int ) ;
 scalar_t__ FUNC_13 (struct nlattr**,struct nlattr**) ;
 int FUNC_14 (char*,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,struct macsec_tx_sa*) ;
 struct macsec_tx_sa* FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct nlattr**) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_12, struct genl_info *VAR_13)
{
 struct net_device *VAR_14;
 struct nlattr **VAR_15 = VAR_13->attrs;
 struct macsec_secy *VAR_16;
 struct macsec_tx_sc *VAR_17;
 struct macsec_tx_sa *VAR_18;
 unsigned char VAR_19;
 struct nlattr *VAR_20[VAR_10 + 1];
 int VAR_21;

 if (!VAR_15[VAR_4])
  return -VAR_1;

 if (FUNC_13(VAR_15, VAR_20))
  return -VAR_1;

 if (!FUNC_21(VAR_20))
  return -VAR_1;

 FUNC_17();
 VAR_14 = FUNC_3(FUNC_2(VAR_13), VAR_15);
 if (FUNC_0(VAR_14)) {
  FUNC_18();
  return FUNC_1(VAR_14);
 }

 VAR_16 = &FUNC_7(VAR_14)->secy;
 VAR_17 = &VAR_16->tx_sc;

 VAR_19 = FUNC_10(VAR_20[VAR_7]);

 if (FUNC_11(VAR_20[VAR_8]) != VAR_16->key_len) {
  FUNC_14("macsec: nl: add_txsa: bad key length: %d != %d\n",
     FUNC_11(VAR_20[VAR_8]), VAR_16->key_len);
  FUNC_18();
  return -VAR_1;
 }

 VAR_18 = FUNC_16(VAR_17->sa[VAR_19]);
 if (VAR_18) {
  FUNC_18();
  return -VAR_0;
 }

 VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_3);
 if (!VAR_18) {
  FUNC_18();
  return -VAR_2;
 }

 VAR_21 = FUNC_4(VAR_18, FUNC_8(VAR_20[VAR_8]),
    VAR_16->key_len, VAR_16->icv_len);
 if (VAR_21 < 0) {
  FUNC_5(VAR_18);
  FUNC_18();
  return VAR_21;
 }

 FUNC_12(VAR_18->key.id, VAR_20[VAR_9], VAR_5);

 FUNC_19(&VAR_18->lock);
 VAR_18->next_pn = FUNC_9(VAR_20[VAR_11]);
 FUNC_20(&VAR_18->lock);

 if (VAR_20[VAR_6])
  VAR_18->active = !!FUNC_10(VAR_20[VAR_6]);

 if (VAR_19 == VAR_17->encoding_sa && VAR_18->active)
  VAR_16->operational = 1;

 FUNC_15(VAR_17->sa[VAR_19], VAR_18);

 FUNC_18();

 return 0;
}
