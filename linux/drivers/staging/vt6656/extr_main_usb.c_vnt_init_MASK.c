
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int mac_hw; int hw; int permanent_net_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vnt_private*) ;
 int FUNC_3 (struct vnt_private*) ;
 int FUNC_4 (struct vnt_private*) ;

int FUNC_5(struct vnt_private *VAR_2)
{
 if (!(FUNC_3(VAR_2)))
  return -VAR_0;

 FUNC_0(VAR_2->hw, VAR_2->permanent_net_addr);

 FUNC_2(VAR_2);

 if (FUNC_1(VAR_2->hw))
  return -VAR_1;

 VAR_2->mac_hw = 1;

 FUNC_4(VAR_2);

 return 0;
}
