
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int name; } ;
struct ndmsg {int ndm_state; } ;
struct i40e_pf {int flags; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,unsigned char const*) ;
 int FUNC_1 (struct net_device*,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 scalar_t__ FUNC_4 (unsigned char const*) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct i40e_netdev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct ndmsg *VAR_6, struct nlattr *VAR_7[],
       struct net_device *VAR_8,
       const unsigned char *VAR_9, u16 VAR_10,
       u16 VAR_11,
       struct netlink_ext_ack *VAR_12)
{
 struct i40e_netdev_priv *VAR_13 = FUNC_6(VAR_8);
 struct i40e_pf *VAR_14 = VAR_13->vsi->back;
 int VAR_15 = 0;

 if (!(VAR_14->flags & VAR_3))
  return -VAR_2;

 if (VAR_10) {
  FUNC_7("%s: vlans aren't supported yet for dev_uc|mc_add()\n", VAR_8->name);
  return -VAR_1;
 }




 if (VAR_6->ndm_state && !(VAR_6->ndm_state & VAR_5)) {
  FUNC_5(VAR_8, "FDB only supports static addresses\n");
  return -VAR_1;
 }

 if (FUNC_4(VAR_9) || FUNC_2(VAR_9))
  VAR_15 = FUNC_1(VAR_8, VAR_9);
 else if (FUNC_3(VAR_9))
  VAR_15 = FUNC_0(VAR_8, VAR_9);
 else
  VAR_15 = -VAR_1;


 if (VAR_15 == -VAR_0 && !(VAR_11 & VAR_4))
  VAR_15 = 0;

 return VAR_15;
}
