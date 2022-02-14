
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct ixgbe_adapter {TYPE_1__* vfinfo; scalar_t__ hw_tcs; } ;
struct TYPE_2__ {scalar_t__ pf_vlan; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct ixgbe_adapter*,size_t,size_t,size_t) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_4,
     u32 *VAR_5, u32 VAR_6)
{
 u32 VAR_7 = (VAR_5[0] & VAR_1) >> VAR_2;
 u32 VAR_8 = (VAR_5[1] & VAR_0);
 u8 VAR_9 = VAR_4->hw_tcs;

 if (VAR_4->vfinfo[VAR_6].pf_vlan || VAR_9) {
  FUNC_0(VAR_3,
         "VF %d attempted to override administratively set VLAN configuration\n"
         "Reload the VF driver to resume operations\n",
         VAR_6);
  return -1;
 }


 if (!VAR_8 && !VAR_7)
  return 0;

 return FUNC_1(VAR_4, VAR_7, VAR_8, VAR_6);
}
