
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_adapter {TYPE_1__* vfinfo; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int vf_mac_addresses; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_adapter*,unsigned char*,int) ;
 int FUNC_1 (struct ixgbe_adapter*,int ,int) ;
 int FUNC_2 (int ,unsigned char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_1,
       int VAR_2, unsigned char *VAR_3)
{
 s32 VAR_4;

 FUNC_1(VAR_1, VAR_1->vfinfo[VAR_2].vf_mac_addresses, VAR_2);
 VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);
 if (VAR_4 >= 0)
  FUNC_2(VAR_1->vfinfo[VAR_2].vf_mac_addresses, VAR_3,
         VAR_0);
 else
  FUNC_3(VAR_1->vfinfo[VAR_2].vf_mac_addresses, 0, VAR_0);

 return VAR_4;
}
