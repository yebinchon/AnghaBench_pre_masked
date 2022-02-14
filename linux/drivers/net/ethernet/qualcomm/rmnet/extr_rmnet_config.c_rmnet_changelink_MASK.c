
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct rmnet_priv {size_t mux_id; } ;
struct rmnet_port {int data_format; int * muxed_ep; } ;
struct rmnet_endpoint {size_t mux_id; int hlnode; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ifla_rmnet_flags {int flags; int mask; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct rmnet_priv* FUNC_4 (struct net_device*) ;
 struct ifla_rmnet_flags* FUNC_5 (struct nlattr*) ;
 size_t FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 struct rmnet_endpoint* FUNC_8 (struct rmnet_port*,size_t) ;
 struct rmnet_port* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4, struct nlattr *VAR_5[],
       struct nlattr *VAR_6[],
       struct netlink_ext_ack *VAR_7)
{
 struct rmnet_priv *VAR_8 = FUNC_4(VAR_4);
 struct net_device *VAR_9;
 struct rmnet_endpoint *VAR_10;
 struct rmnet_port *VAR_11;
 u16 VAR_12;

 if (!VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_0(FUNC_1(VAR_4),
          FUNC_7(VAR_5[VAR_1]));

 if (!VAR_9 || !FUNC_10(VAR_9))
  return -VAR_0;

 VAR_11 = FUNC_9(VAR_9);

 if (VAR_6[VAR_3]) {
  VAR_12 = FUNC_6(VAR_6[VAR_3]);
  VAR_10 = FUNC_8(VAR_11, VAR_8->mux_id);
  if (!VAR_10)
   return -VAR_0;

  FUNC_3(&VAR_10->hlnode);
  FUNC_2(&VAR_10->hlnode, &VAR_11->muxed_ep[VAR_12]);

  VAR_10->mux_id = VAR_12;
  VAR_8->mux_id = VAR_12;
 }

 if (VAR_6[VAR_2]) {
  struct ifla_rmnet_flags *VAR_13;

  VAR_13 = FUNC_5(VAR_6[VAR_2]);
  VAR_11->data_format = VAR_13->flags & VAR_13->mask;
 }

 return 0;
}
