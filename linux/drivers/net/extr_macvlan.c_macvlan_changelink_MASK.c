
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct macvlan_dev {int mode; int flags; int lowerdev; int port; } ;
typedef enum macvlan_mode { ____Placeholder_macvlan_mode } macvlan_mode ;
typedef enum macvlan_macaddr_mode { ____Placeholder_macvlan_macaddr_mode } macvlan_macaddr_mode ;
typedef int __u16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct macvlan_dev*,int,struct nlattr**) ;
 int FUNC_2 (int ,struct macvlan_dev*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct macvlan_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7,
         struct nlattr *VAR_8[], struct nlattr *VAR_9[],
         struct netlink_ext_ack *VAR_10)
{
 struct macvlan_dev *VAR_11 = FUNC_4(VAR_7);
 enum macvlan_mode VAR_12;
 bool VAR_13 = 0;
 enum macvlan_macaddr_mode VAR_14;
 int VAR_15;


 if (VAR_9 && VAR_9[VAR_3]) {
  VAR_13 = 1;
  VAR_12 = FUNC_6(VAR_9[VAR_3]);

  if ((VAR_12 == VAR_5) !=
      (VAR_11->mode == VAR_5))
   return -VAR_0;
  if (VAR_11->mode == VAR_6 &&
      VAR_11->mode != VAR_12)
   FUNC_2(VAR_11->port, VAR_11);
 }

 if (VAR_9 && VAR_9[VAR_1]) {
  __u16 VAR_16 = FUNC_5(VAR_9[VAR_1]);
  bool VAR_17 = (VAR_16 ^ VAR_11->flags) & VAR_4;
  if (FUNC_3(VAR_11->port) && VAR_17) {
   int VAR_18;

   if (VAR_16 & VAR_4)
    VAR_18 = FUNC_0(VAR_11->lowerdev, -1);
   else
    VAR_18 = FUNC_0(VAR_11->lowerdev, 1);
   if (VAR_18 < 0)
    return VAR_18;
  }
  VAR_11->flags = VAR_16;
 }
 if (VAR_13)
  VAR_11->mode = VAR_12;
 if (VAR_9 && VAR_9[VAR_2]) {
  if (VAR_11->mode != VAR_6)
   return -VAR_0;
  VAR_14 = FUNC_6(VAR_9[VAR_2]);
  VAR_15 = FUNC_1(VAR_11, VAR_14, VAR_9);
  if (VAR_15)
   return VAR_15;
 }
 return 0;
}
