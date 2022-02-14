
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_secy {int dummy; } ;
struct macsec_rx_sc {int * sa; } ;
struct macsec_rx_sa {scalar_t__ active; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct macsec_rx_sa*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct macsec_rx_sa*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct macsec_rx_sa*) ;
 int FUNC_4 (struct genl_info*) ;
 struct macsec_rx_sa* FUNC_5 (int ,struct nlattr**,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**,struct macsec_rx_sc**,size_t*) ;
 scalar_t__ FUNC_6 (struct nlattr**,struct nlattr**) ;
 scalar_t__ FUNC_7 (struct nlattr**,struct nlattr**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr **VAR_7 = VAR_6->attrs;
 struct net_device *VAR_8;
 struct macsec_secy *VAR_9;
 struct macsec_rx_sc *VAR_10;
 struct macsec_rx_sa *VAR_11;
 u8 VAR_12;
 struct nlattr *VAR_13[VAR_3 + 1];
 struct nlattr *VAR_14[VAR_4 + 1];

 if (!VAR_7[VAR_2])
  return -VAR_1;

 if (FUNC_7(VAR_7, VAR_14))
  return -VAR_1;

 if (FUNC_6(VAR_7, VAR_13))
  return -VAR_1;

 FUNC_8();
 VAR_11 = FUNC_5(FUNC_4(VAR_6), VAR_7, VAR_13, VAR_14,
     &VAR_8, &VAR_9, &VAR_10, &VAR_12);
 if (FUNC_0(VAR_11)) {
  FUNC_9();
  return FUNC_1(VAR_11);
 }

 if (VAR_11->active) {
  FUNC_9();
  return -VAR_0;
 }

 FUNC_2(VAR_10->sa[VAR_12], ((void*)0));
 FUNC_3(VAR_11);

 FUNC_9();

 return 0;
}
