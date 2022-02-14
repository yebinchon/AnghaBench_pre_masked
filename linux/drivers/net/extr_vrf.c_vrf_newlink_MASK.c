
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_vrf {scalar_t__ tb_id; } ;
struct net_device {int priv_flags; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 scalar_t__ VAR_3 ;
 struct net* FUNC_2 (struct net_device*) ;
 int* FUNC_3 (struct net*,int ) ;
 struct net_vrf* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct net *VAR_5, struct net_device *VAR_6,
         struct nlattr *VAR_7[], struct nlattr *VAR_8[],
         struct netlink_ext_ack *VAR_9)
{
 struct net_vrf *VAR_10 = FUNC_4(VAR_6);
 bool *VAR_11;
 struct net *VAR_12;
 int VAR_13;

 if (!VAR_8 || !VAR_8[VAR_2]) {
  FUNC_0(VAR_9, "VRF table id is missing");
  return -VAR_0;
 }

 VAR_10->tb_id = FUNC_5(VAR_8[VAR_2]);
 if (VAR_10->tb_id == VAR_3) {
  FUNC_1(VAR_9, VAR_8[VAR_2],
        "Invalid VRF table id");
  return -VAR_0;
 }

 VAR_6->priv_flags |= VAR_1;

 VAR_13 = FUNC_6(VAR_6);
 if (VAR_13)
  goto out;

 VAR_12 = FUNC_2(VAR_6);
 VAR_11 = FUNC_3(VAR_12, VAR_4);
 if (*VAR_11) {
  VAR_13 = FUNC_8(VAR_6);
  if (VAR_13) {
   FUNC_7(VAR_6);
   goto out;
  }
  *VAR_11 = 0;
 }

out:
 return VAR_13;
}
