
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_secy {int n_rx_sc; } ;
struct macsec_rx_sc {int active; } ;
struct genl_info {struct nlattr** attrs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct macsec_rx_sc*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct macsec_rx_sc*) ;
 int FUNC_2 (struct genl_info*) ;
 struct macsec_rx_sc* FUNC_3 (int ,struct nlattr**,struct nlattr**,struct net_device**,struct macsec_secy**) ;
 int FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr**,struct nlattr**) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct nlattr**) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct nlattr **VAR_6 = VAR_5->attrs;
 struct net_device *VAR_7;
 struct macsec_secy *VAR_8;
 struct macsec_rx_sc *VAR_9;
 struct nlattr *VAR_10[VAR_3 + 1];

 if (!VAR_6[VAR_1])
  return -VAR_0;

 if (FUNC_5(VAR_6, VAR_10))
  return -VAR_0;

 if (!FUNC_8(VAR_10))
  return -VAR_0;

 FUNC_6();
 VAR_9 = FUNC_3(FUNC_2(VAR_5), VAR_6, VAR_10, &VAR_7, &VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_7();
  return FUNC_1(VAR_9);
 }

 if (VAR_10[VAR_2]) {
  bool VAR_11 = !!FUNC_4(VAR_10[VAR_2]);

  if (VAR_9->active != VAR_11)
   VAR_8->n_rx_sc += VAR_11 ? 1 : -1;

  VAR_9->active = VAR_11;
 }

 FUNC_7();

 return 0;
}
