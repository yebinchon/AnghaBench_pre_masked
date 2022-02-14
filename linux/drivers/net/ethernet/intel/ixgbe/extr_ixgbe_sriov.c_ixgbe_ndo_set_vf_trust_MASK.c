
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_vfs; TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int trusted; int clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (struct ixgbe_adapter*,int) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_2, int VAR_3, bool VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 >= VAR_5->num_vfs)
  return -VAR_0;


 if (VAR_5->vfinfo[VAR_3].trusted == VAR_4)
  return 0;

 VAR_5->vfinfo[VAR_3].trusted = VAR_4;


 VAR_5->vfinfo[VAR_3].clear_to_send = 0;
 FUNC_1(VAR_5, VAR_3);

 FUNC_0(VAR_1, "VF %u is %strusted\n", VAR_3, VAR_4 ? "" : "not ");

 return 0;
}
