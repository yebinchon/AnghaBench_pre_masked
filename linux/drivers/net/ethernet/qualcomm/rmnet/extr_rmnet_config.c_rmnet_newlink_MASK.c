
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct rmnet_port {int rmnet_mode; int data_format; int * muxed_ep; } ;
struct rmnet_endpoint {int hlnode; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifla_rmnet_flags {int flags; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct rmnet_endpoint*) ;
 struct rmnet_endpoint* FUNC_3 (int,int ) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct ifla_rmnet_flags* FUNC_5 (struct nlattr*) ;
 size_t FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 struct rmnet_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,struct rmnet_port*) ;
 int FUNC_11 (size_t,struct net_device*,struct rmnet_port*,struct net_device*,struct rmnet_endpoint*) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_9, struct net_device *VAR_10,
    struct nlattr *VAR_11[], struct nlattr *VAR_12[],
    struct netlink_ext_ack *VAR_13)
{
 u32 VAR_14 = VAR_8;
 struct net_device *VAR_15;
 int VAR_16 = VAR_7;
 struct rmnet_endpoint *VAR_17;
 struct rmnet_port *VAR_18;
 int VAR_19 = 0;
 u16 VAR_20;

 VAR_15 = FUNC_0(VAR_9, FUNC_7(VAR_11[VAR_4]));
 if (!VAR_15 || !VAR_10)
  return -VAR_1;

 if (!VAR_12[VAR_6])
  return -VAR_0;

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_20 = FUNC_6(VAR_12[VAR_6]);

 VAR_19 = FUNC_9(VAR_15);
 if (VAR_19)
  goto err0;

 VAR_18 = FUNC_8(VAR_15);
 VAR_19 = FUNC_11(VAR_20, VAR_10, VAR_18, VAR_15, VAR_17);
 if (VAR_19)
  goto err1;

 VAR_18->rmnet_mode = VAR_16;

 FUNC_1(&VAR_17->hlnode, &VAR_18->muxed_ep[VAR_20]);

 if (VAR_12[VAR_5]) {
  struct ifla_rmnet_flags *VAR_21;

  VAR_21 = FUNC_5(VAR_12[VAR_5]);
  VAR_14 = VAR_21->flags & VAR_21->mask;
 }

 FUNC_4(VAR_10, "data format [0x%08X]\n", VAR_14);
 VAR_18->data_format = VAR_14;

 return 0;

err1:
 FUNC_10(VAR_15, VAR_18);
err0:
 FUNC_2(VAR_17);
 return VAR_19;
}
