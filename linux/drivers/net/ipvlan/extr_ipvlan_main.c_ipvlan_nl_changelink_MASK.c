
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_port {int dummy; } ;
struct ipvl_dev {int phy_dev; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct ipvl_port*) ;
 int FUNC_2 (struct ipvl_port*) ;
 int FUNC_3 (struct ipvl_port*) ;
 int FUNC_4 (struct ipvl_port*) ;
 struct ipvl_port* FUNC_5 (int ) ;
 int FUNC_6 (struct ipvl_port*,int,struct netlink_ext_ack*) ;
 struct ipvl_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6,
    struct nlattr *VAR_7[], struct nlattr *VAR_8[],
    struct netlink_ext_ack *VAR_9)
{
 struct ipvl_dev *VAR_10 = FUNC_7(VAR_6);
 struct ipvl_port *VAR_11 = FUNC_5(VAR_10->phy_dev);
 int VAR_12 = 0;

 if (!VAR_8)
  return 0;
 if (!FUNC_9(FUNC_0(VAR_10->phy_dev)->user_ns, VAR_0))
  return -VAR_1;

 if (VAR_8[VAR_3]) {
  u16 VAR_13 = FUNC_8(VAR_8[VAR_3]);

  VAR_12 = FUNC_6(VAR_11, VAR_13, VAR_9);
 }

 if (!VAR_12 && VAR_8[VAR_2]) {
  u16 VAR_14 = FUNC_8(VAR_8[VAR_2]);

  if (VAR_14 & VAR_4)
   FUNC_3(VAR_11);
  else
   FUNC_1(VAR_11);

  if (VAR_14 & VAR_5)
   FUNC_4(VAR_11);
  else
   FUNC_2(VAR_11);
 }

 return VAR_12;
}
