
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_vfs; TYPE_1__* vfinfo; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {scalar_t__ pf_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_adapter*,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int,int,int) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_3, int VAR_4, u16 VAR_5,
     u8 VAR_6, __be16 VAR_7)
{
 int VAR_8 = 0;
 struct ixgbe_adapter *VAR_9 = FUNC_3(VAR_3);

 if ((VAR_4 >= VAR_9->num_vfs) || (VAR_5 > 4095) || (VAR_6 > 7))
  return -VAR_0;
 if (VAR_7 != FUNC_0(VAR_2))
  return -VAR_1;
 if (VAR_5 || VAR_6) {







  if (VAR_9->vfinfo[VAR_4].pf_vlan)
   VAR_8 = FUNC_1(VAR_9, VAR_4);
  if (VAR_8)
   goto out;
  VAR_8 = FUNC_2(VAR_9, VAR_4, VAR_5, VAR_6);
 } else {
  VAR_8 = FUNC_1(VAR_9, VAR_4);
 }

out:
 return VAR_8;
}
