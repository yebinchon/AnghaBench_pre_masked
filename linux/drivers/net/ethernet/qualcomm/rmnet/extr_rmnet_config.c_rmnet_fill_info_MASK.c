
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rmnet_priv {int mux_id; struct net_device* real_dev; } ;
struct rmnet_port {scalar_t__ data_format; } ;
struct net_device {int dummy; } ;
struct ifla_rmnet_flags {int mask; scalar_t__ flags; } ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rmnet_priv* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct ifla_rmnet_flags*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct rmnet_port* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, const struct net_device *VAR_4)
{
 struct rmnet_priv *VAR_5 = FUNC_0(VAR_4);
 struct net_device *VAR_6;
 struct ifla_rmnet_flags VAR_7;
 struct rmnet_port *VAR_8;

 VAR_6 = VAR_5->real_dev;

 if (FUNC_2(VAR_3, VAR_2, VAR_5->mux_id))
  goto nla_put_failure;

 if (FUNC_4(VAR_6)) {
  VAR_8 = FUNC_3(VAR_6);
  VAR_7.flags = VAR_8->data_format;
 } else {
  VAR_7.flags = 0;
 }

 VAR_7.mask = ~0;

 if (FUNC_1(VAR_3, VAR_1, sizeof(VAR_7), &VAR_7))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
