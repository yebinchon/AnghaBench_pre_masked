
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ hw; scalar_t__ pcid; scalar_t__ PortOffset; scalar_t__ mac_hw; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct vnt_private *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->mac_hw)
  FUNC_1(VAR_0->hw);

 if (VAR_0->PortOffset)
  FUNC_2(VAR_0->PortOffset);

 if (VAR_0->pcid)
  FUNC_3(VAR_0->pcid);

 if (VAR_0->hw)
  FUNC_0(VAR_0->hw);
}
