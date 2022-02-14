
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ixgbe_adapter {TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int vf_mac_addresses; int trusted; scalar_t__ pf_set_mac; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ixgbe_adapter*,size_t,int *) ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_1,
     u32 *VAR_2, u32 VAR_3)
{
 u8 *VAR_4 = ((u8 *)(&VAR_2[1]));

 if (!FUNC_2(VAR_4)) {
  FUNC_0(VAR_0, "VF %d attempted to set invalid mac\n", VAR_3);
  return -1;
 }

 if (VAR_1->vfinfo[VAR_3].pf_set_mac && !VAR_1->vfinfo[VAR_3].trusted &&
     !FUNC_1(VAR_1->vfinfo[VAR_3].vf_mac_addresses, VAR_4)) {
  FUNC_0(VAR_0,
         "VF %d attempted to override administratively set MAC address\n"
         "Reload the VF driver to resume operations\n",
         VAR_3);
  return -1;
 }

 return FUNC_3(VAR_1, VAR_3, VAR_4) < 0;
}
