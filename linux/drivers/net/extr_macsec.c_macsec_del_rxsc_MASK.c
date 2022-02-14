
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_secy {int dummy; } ;
struct macsec_rx_sc {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
typedef int sci_t ;
struct TYPE_2__ {struct macsec_secy secy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 struct macsec_rx_sc* FUNC_2 (struct macsec_secy*,int ) ;
 int FUNC_3 (struct macsec_rx_sc*) ;
 int FUNC_4 (struct genl_info*) ;
 struct net_device* FUNC_5 (int ,struct nlattr**) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct nlattr*) ;
 scalar_t__ FUNC_8 (struct nlattr**,struct nlattr**) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr **VAR_7 = VAR_6->attrs;
 struct net_device *VAR_8;
 struct macsec_secy *VAR_9;
 struct macsec_rx_sc *VAR_10;
 sci_t VAR_11;
 struct nlattr *VAR_12[VAR_3 + 1];

 if (!VAR_7[VAR_2])
  return -VAR_0;

 if (FUNC_8(VAR_7, VAR_12))
  return -VAR_0;

 if (!VAR_12[VAR_4])
  return -VAR_0;

 FUNC_9();
 VAR_8 = FUNC_5(FUNC_4(VAR_6), VAR_6->attrs);
 if (FUNC_0(VAR_8)) {
  FUNC_10();
  return FUNC_1(VAR_8);
 }

 VAR_9 = &FUNC_6(VAR_8)->secy;
 VAR_11 = FUNC_7(VAR_12[VAR_4]);

 VAR_10 = FUNC_2(VAR_9, VAR_11);
 if (!VAR_10) {
  FUNC_10();
  return -VAR_1;
 }

 FUNC_3(VAR_10);
 FUNC_10();

 return 0;
}
