
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ type; int flags; int dev_id; int priv_flags; int dev_addr; } ;
struct net {int dummy; } ;
struct ipvl_port {int dev_id_start; int ida; int ipvlans; void* flags; } ;
struct ipvl_dev {int pnode; struct ipvl_port* port; int addrs_lock; int addrs; int sfeatures; struct net_device* dev; struct net_device* phy_dev; } ;
struct TYPE_2__ {int user_ns; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (int *) ;
 int VAR_14 ;
 void* VAR_15 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ipvl_dev*,struct net_device*) ;
 struct ipvl_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ipvl_port*,void*,struct netlink_ext_ack*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct net_device*,char*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 struct ipvl_dev* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_14 (struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,struct net_device*) ;
 void* FUNC_18 (struct nlattr*) ;
 int FUNC_19 (struct nlattr*) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct net_device*) ;

int FUNC_24(struct net *VAR_16, struct net_device *VAR_17,
      struct nlattr *VAR_18[], struct nlattr *VAR_19[],
      struct netlink_ext_ack *VAR_20)
{
 struct ipvl_dev *VAR_21 = FUNC_12(VAR_17);
 struct ipvl_port *VAR_22;
 struct net_device *VAR_23;
 int VAR_24;
 u16 VAR_25 = VAR_15;

 if (!VAR_18[VAR_12])
  return -VAR_3;

 VAR_23 = FUNC_1(VAR_16, FUNC_19(VAR_18[VAR_12]));
 if (!VAR_23)
  return -VAR_4;

 if (FUNC_15(VAR_23)) {
  struct ipvl_dev *VAR_26 = FUNC_12(VAR_23);

  VAR_23 = VAR_26->phy_dev;
  if (!FUNC_20(FUNC_2(VAR_23)->user_ns, VAR_1))
   return -VAR_5;
 } else if (!FUNC_16(VAR_23)) {

  if (VAR_23->type != VAR_0 ||
      VAR_23->flags & VAR_8) {
   FUNC_10(VAR_23,
       "Master is either lo or non-ether device\n");
   return -VAR_3;
  }

  if (FUNC_11(VAR_23)) {
   FUNC_10(VAR_23, "Device is already in use.\n");
   return -VAR_2;
  }
 }

 VAR_21->phy_dev = VAR_23;
 VAR_21->dev = VAR_17;
 VAR_21->sfeatures = VAR_14;
 if (!VAR_18[VAR_13])
  FUNC_5(VAR_21, VAR_23);
 FUNC_0(&VAR_21->addrs);
 FUNC_22(&VAR_21->addrs_lock);





 FUNC_9(VAR_17->dev_addr, VAR_23->dev_addr, VAR_6);

 VAR_17->priv_flags |= VAR_9;

 VAR_24 = FUNC_21(VAR_17);
 if (VAR_24 < 0)
  return VAR_24;


 VAR_22 = FUNC_6(VAR_23);
 VAR_21->port = VAR_22;





 if (VAR_22->dev_id_start == 0xFFFE)
  VAR_22->dev_id_start = 0x1;






 VAR_24 = FUNC_3(&VAR_22->ida, VAR_22->dev_id_start, 0xFFFE,
        VAR_7);
 if (VAR_24 < 0)
  VAR_24 = FUNC_3(&VAR_22->ida, 0x1, VAR_22->dev_id_start,
         VAR_7);
 if (VAR_24 < 0)
  goto unregister_netdev;
 VAR_17->dev_id = VAR_24;


 VAR_22->dev_id_start = VAR_24 + 1;

 VAR_24 = FUNC_13(VAR_23, VAR_17, VAR_20);
 if (VAR_24)
  goto remove_ida;




 if (VAR_19 && VAR_19[VAR_10])
  VAR_22->flags = FUNC_18(VAR_19[VAR_10]);

 if (VAR_19 && VAR_19[VAR_11])
  VAR_25 = FUNC_18(VAR_19[VAR_11]);

 VAR_24 = FUNC_7(VAR_22, VAR_25, VAR_20);
 if (VAR_24)
  goto unlink_netdev;

 FUNC_8(&VAR_21->pnode, &VAR_22->ipvlans);
 FUNC_17(VAR_23, VAR_17);
 return 0;

unlink_netdev:
 FUNC_14(VAR_23, VAR_17);
remove_ida:
 FUNC_4(&VAR_22->ida, VAR_17->dev_id);
unregister_netdev:
 FUNC_23(VAR_17);
 return VAR_24;
}
