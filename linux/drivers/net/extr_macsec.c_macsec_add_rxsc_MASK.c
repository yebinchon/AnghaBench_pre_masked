
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int active; } ;
struct macsec_rx_sc {int active; } ;
struct genl_info {struct nlattr** attrs; } ;
typedef int sci_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct genl_info*) ;
 struct net_device* FUNC_4 (int ,struct nlattr**) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (struct nlattr**,struct nlattr**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct nlattr**) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct net_device *VAR_8;
 sci_t VAR_9 = VAR_5;
 struct nlattr **VAR_10 = VAR_7->attrs;
 struct macsec_rx_sc *VAR_11;
 struct nlattr *VAR_12[VAR_3 + 1];

 if (!VAR_10[VAR_1])
  return -VAR_0;

 if (FUNC_7(VAR_10, VAR_12))
  return -VAR_0;

 if (!FUNC_10(VAR_12))
  return -VAR_0;

 FUNC_8();
 VAR_8 = FUNC_4(FUNC_3(VAR_7), VAR_10);
 if (FUNC_0(VAR_8)) {
  FUNC_9();
  return FUNC_1(VAR_8);
 }

 VAR_9 = FUNC_5(VAR_12[VAR_4]);

 VAR_11 = FUNC_2(VAR_8, VAR_9);
 if (FUNC_0(VAR_11)) {
  FUNC_9();
  return FUNC_1(VAR_11);
 }

 if (VAR_12[VAR_2])
  VAR_11->active = !!FUNC_6(VAR_12[VAR_2]);

 FUNC_9();

 return 0;
}
