
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct pch_gbe_phy_info {int id; void* revision; } ;
struct pch_gbe_hw {struct pch_gbe_phy_info phy; } ;
struct pch_gbe_adapter {int netdev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,void*) ;
 struct pch_gbe_adapter* FUNC_1 (struct pch_gbe_hw*) ;
 scalar_t__ FUNC_2 (struct pch_gbe_hw*,int ,int*) ;

s32 FUNC_3(struct pch_gbe_hw *VAR_2)
{
 struct pch_gbe_adapter *VAR_3 = FUNC_1(VAR_2);
 struct pch_gbe_phy_info *VAR_4 = &VAR_2->phy;
 s32 VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_6);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_2, VAR_1, &VAR_7);
 if (VAR_5)
  return VAR_5;




 VAR_4->id = (u32)VAR_6;
 VAR_4->id = ((VAR_4->id << 6) | ((VAR_7 & 0xFC00) >> 10));
 VAR_4->revision = (u32) (VAR_7 & 0x000F);
 FUNC_0(VAR_3->netdev,
     "phy->id : 0x%08x  phy->revision : 0x%08x\n",
     VAR_4->id, VAR_4->revision);
 return 0;
}
