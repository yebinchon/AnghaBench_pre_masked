
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_secy {scalar_t__ key_len; int icv_len; } ;
struct macsec_rx_sc {int * sa; } ;
struct TYPE_2__ {int id; } ;
struct macsec_rx_sa {int active; struct macsec_rx_sc* sc; TYPE_1__ key; int lock; int next_pn; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct macsec_rx_sc*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (struct macsec_rx_sc*) ;
 int FUNC_2 (struct genl_info*) ;
 struct macsec_rx_sc* FUNC_3 (int ,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**) ;
 int FUNC_4 (struct macsec_rx_sa*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct macsec_rx_sa*) ;
 struct macsec_rx_sa* FUNC_6 (int,int ) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 unsigned char FUNC_9 (struct nlattr*) ;
 scalar_t__ FUNC_10 (struct nlattr*) ;
 int FUNC_11 (int ,struct nlattr*,int ) ;
 scalar_t__ FUNC_12 (struct nlattr**,struct nlattr**) ;
 scalar_t__ FUNC_13 (struct nlattr**,struct nlattr**) ;
 int FUNC_14 (char*,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,struct macsec_rx_sa*) ;
 struct macsec_rx_sa* FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct nlattr**) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_13, struct genl_info *VAR_14)
{
 struct net_device *VAR_15;
 struct nlattr **VAR_16 = VAR_14->attrs;
 struct macsec_secy *VAR_17;
 struct macsec_rx_sc *VAR_18;
 struct macsec_rx_sa *VAR_19;
 unsigned char VAR_20;
 struct nlattr *VAR_21[VAR_6 + 1];
 struct nlattr *VAR_22[VAR_11 + 1];
 int VAR_23;

 if (!VAR_16[VAR_4])
  return -VAR_1;

 if (FUNC_13(VAR_16, VAR_22))
  return -VAR_1;

 if (FUNC_12(VAR_16, VAR_21))
  return -VAR_1;

 if (!FUNC_21(VAR_22))
  return -VAR_1;

 FUNC_17();
 VAR_18 = FUNC_3(FUNC_2(VAR_14), VAR_16, VAR_21, &VAR_15, &VAR_17);
 if (FUNC_0(VAR_18)) {
  FUNC_18();
  return FUNC_1(VAR_18);
 }

 VAR_20 = FUNC_9(VAR_22[VAR_8]);

 if (FUNC_10(VAR_22[VAR_9]) != VAR_17->key_len) {
  FUNC_14("macsec: nl: add_rxsa: bad key length: %d != %d\n",
     FUNC_10(VAR_22[VAR_9]), VAR_17->key_len);
  FUNC_18();
  return -VAR_1;
 }

 VAR_19 = FUNC_16(VAR_18->sa[VAR_20]);
 if (VAR_19) {
  FUNC_18();
  return -VAR_0;
 }

 VAR_19 = FUNC_6(sizeof(*VAR_19), VAR_3);
 if (!VAR_19) {
  FUNC_18();
  return -VAR_2;
 }

 VAR_23 = FUNC_4(VAR_19, FUNC_7(VAR_22[VAR_9]),
    VAR_17->key_len, VAR_17->icv_len);
 if (VAR_23 < 0) {
  FUNC_5(VAR_19);
  FUNC_18();
  return VAR_23;
 }

 if (VAR_22[VAR_12]) {
  FUNC_19(&VAR_19->lock);
  VAR_19->next_pn = FUNC_8(VAR_22[VAR_12]);
  FUNC_20(&VAR_19->lock);
 }

 if (VAR_22[VAR_7])
  VAR_19->active = !!FUNC_9(VAR_22[VAR_7]);

 FUNC_11(VAR_19->key.id, VAR_22[VAR_10], VAR_5);
 VAR_19->sc = VAR_18;
 FUNC_15(VAR_18->sa[VAR_20], VAR_19);

 FUNC_18();

 return 0;
}
