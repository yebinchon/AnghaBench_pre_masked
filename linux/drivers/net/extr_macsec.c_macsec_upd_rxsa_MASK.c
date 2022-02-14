
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_secy {int dummy; } ;
struct macsec_rx_sc {int dummy; } ;
struct macsec_rx_sa {int active; int lock; int next_pn; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct macsec_rx_sa*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct macsec_rx_sa*) ;
 int FUNC_2 (struct genl_info*) ;
 struct macsec_rx_sa* FUNC_3 (int ,struct nlattr**,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**,struct macsec_rx_sc**,int *) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr**,struct nlattr**) ;
 scalar_t__ FUNC_7 (struct nlattr**,struct nlattr**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nlattr**) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct nlattr **VAR_8 = VAR_7->attrs;
 struct net_device *VAR_9;
 struct macsec_secy *VAR_10;
 struct macsec_rx_sc *VAR_11;
 struct macsec_rx_sa *VAR_12;
 u8 VAR_13;
 struct nlattr *VAR_14[VAR_2 + 1];
 struct nlattr *VAR_15[VAR_4 + 1];

 if (!VAR_8[VAR_1])
  return -VAR_0;

 if (FUNC_6(VAR_8, VAR_14))
  return -VAR_0;

 if (FUNC_7(VAR_8, VAR_15))
  return -VAR_0;

 if (!FUNC_12(VAR_15))
  return -VAR_0;

 FUNC_8();
 VAR_12 = FUNC_3(FUNC_2(VAR_7), VAR_8, VAR_14, VAR_15,
     &VAR_9, &VAR_10, &VAR_11, &VAR_13);
 if (FUNC_0(VAR_12)) {
  FUNC_9();
  return FUNC_1(VAR_12);
 }

 if (VAR_15[VAR_5]) {
  FUNC_10(&VAR_12->lock);
  VAR_12->next_pn = FUNC_4(VAR_15[VAR_5]);
  FUNC_11(&VAR_12->lock);
 }

 if (VAR_15[VAR_3])
  VAR_12->active = FUNC_5(VAR_15[VAR_3]);

 FUNC_9();
 return 0;
}
