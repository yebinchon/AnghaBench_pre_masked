
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int rx_handler; scalar_t__ mtu; int priv_flags; } ;
struct net {int dummy; } ;
struct macsec_dev {struct net_device* real_dev; } ;
typedef int sci_t ;
typedef int rx_handler_func_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,scalar_t__) ;
 int FUNC_4 (struct net_device*,struct nlattr**) ;
 int FUNC_5 (struct macsec_dev*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_10 ;
 int * VAR_11 ;
 struct macsec_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_9 (struct net_device*,struct net_device*) ;
 int FUNC_10 (struct net_device*,struct net_device*) ;
 int FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr*) ;
 scalar_t__ FUNC_14 (struct nlattr*) ;
 int FUNC_15 (struct net_device*,struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int * FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct net_device*,int ) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static int FUNC_20(struct net *VAR_12, struct net_device *VAR_13,
     struct nlattr *VAR_14[], struct nlattr *VAR_15[],
     struct netlink_ext_ack *VAR_16)
{
 struct macsec_dev *VAR_17 = FUNC_7(VAR_13);
 struct net_device *VAR_18;
 int VAR_19;
 sci_t VAR_20;
 u8 VAR_21 = VAR_0;
 rx_handler_func_t *VAR_22;

 if (!VAR_14[VAR_5])
  return -VAR_2;
 VAR_18 = FUNC_0(VAR_12, FUNC_13(VAR_14[VAR_5]));
 if (!VAR_18)
  return -VAR_3;

 VAR_13->priv_flags |= VAR_4;

 VAR_17->real_dev = VAR_18;

 if (VAR_15 && VAR_15[VAR_6])
  VAR_21 = FUNC_14(VAR_15[VAR_6]);
 VAR_13->mtu = VAR_18->mtu - VAR_21 - FUNC_6(1);

 VAR_22 = FUNC_17(VAR_18->rx_handler);
 if (VAR_22 && VAR_22 != VAR_11)
  return -VAR_1;

 VAR_19 = FUNC_16(VAR_13);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_8(VAR_18, VAR_13, VAR_16);
 if (VAR_19 < 0)
  goto unregister;




 if (VAR_15 && VAR_15[VAR_8])
  VAR_20 = FUNC_12(VAR_15[VAR_8]);
 else if (VAR_15 && VAR_15[VAR_7])
  VAR_20 = FUNC_1(VAR_13, FUNC_11(VAR_15[VAR_7]));
 else
  VAR_20 = FUNC_1(VAR_13, VAR_9);

 if (VAR_22 && FUNC_18(VAR_18, VAR_20)) {
  VAR_19 = -VAR_1;
  goto unlink;
 }

 VAR_19 = FUNC_3(VAR_13, VAR_20, VAR_21);
 if (VAR_19)
  goto unlink;

 if (VAR_15) {
  VAR_19 = FUNC_4(VAR_13, VAR_15);
  if (VAR_19)
   goto del_dev;
 }

 VAR_19 = FUNC_15(VAR_18, VAR_13);
 if (VAR_19 < 0)
  goto del_dev;

 FUNC_10(VAR_18, VAR_13);
 FUNC_2(VAR_13);

 VAR_10++;

 return 0;

del_dev:
 FUNC_5(VAR_17);
unlink:
 FUNC_9(VAR_18, VAR_13);
unregister:
 FUNC_19(VAR_13);
 return VAR_19;
}
