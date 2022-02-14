
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sc {scalar_t__ encoding_sa; } ;
struct macsec_tx_sa {int active; int lock; int next_pn; } ;
struct macsec_secy {int operational; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct macsec_tx_sa*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct macsec_tx_sa*) ;
 int FUNC_2 (struct genl_info*) ;
 struct macsec_tx_sa* FUNC_3 (int ,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**,struct macsec_tx_sc**,scalar_t__*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr**,struct nlattr**) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nlattr**) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr **VAR_7 = VAR_6->attrs;
 struct net_device *VAR_8;
 struct macsec_secy *VAR_9;
 struct macsec_tx_sc *VAR_10;
 struct macsec_tx_sa *VAR_11;
 u8 VAR_12;
 struct nlattr *VAR_13[VAR_3 + 1];

 if (!VAR_7[VAR_1])
  return -VAR_0;

 if (FUNC_6(VAR_7, VAR_13))
  return -VAR_0;

 if (!FUNC_11(VAR_13))
  return -VAR_0;

 FUNC_7();
 VAR_11 = FUNC_3(FUNC_2(VAR_6), VAR_7, VAR_13,
     &VAR_8, &VAR_9, &VAR_10, &VAR_12);
 if (FUNC_0(VAR_11)) {
  FUNC_8();
  return FUNC_1(VAR_11);
 }

 if (VAR_13[VAR_4]) {
  FUNC_9(&VAR_11->lock);
  VAR_11->next_pn = FUNC_4(VAR_13[VAR_4]);
  FUNC_10(&VAR_11->lock);
 }

 if (VAR_13[VAR_2])
  VAR_11->active = FUNC_5(VAR_13[VAR_2]);

 if (VAR_12 == VAR_10->encoding_sa)
  VAR_9->operational = VAR_11->active;

 FUNC_8();

 return 0;
}
