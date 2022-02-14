
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sc {int * sa; } ;
struct macsec_tx_sa {scalar_t__ active; } ;
struct macsec_secy {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct macsec_tx_sa*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct macsec_tx_sa*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct macsec_tx_sa*) ;
 int FUNC_4 (struct genl_info*) ;
 struct macsec_tx_sa* FUNC_5 (int ,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**,struct macsec_tx_sc**,size_t*) ;
 scalar_t__ FUNC_6 (struct nlattr**,struct nlattr**) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct nlattr **VAR_6 = VAR_5->attrs;
 struct net_device *VAR_7;
 struct macsec_secy *VAR_8;
 struct macsec_tx_sc *VAR_9;
 struct macsec_tx_sa *VAR_10;
 u8 VAR_11;
 struct nlattr *VAR_12[VAR_3 + 1];

 if (!VAR_6[VAR_2])
  return -VAR_1;

 if (FUNC_6(VAR_6, VAR_12))
  return -VAR_1;

 FUNC_7();
 VAR_10 = FUNC_5(FUNC_4(VAR_5), VAR_6, VAR_12,
     &VAR_7, &VAR_8, &VAR_9, &VAR_11);
 if (FUNC_0(VAR_10)) {
  FUNC_8();
  return FUNC_1(VAR_10);
 }

 if (VAR_10->active) {
  FUNC_8();
  return -VAR_0;
 }

 FUNC_2(VAR_9->sa[VAR_11], ((void*)0));
 FUNC_3(VAR_10);

 FUNC_8();

 return 0;
}
