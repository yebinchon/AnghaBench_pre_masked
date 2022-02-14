
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int mac_hw; int hw; int abyCurrentNetAddr; } ;


 int FUNC_0 (struct vnt_private*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vnt_private*) ;

__attribute__((used)) static int FUNC_4(struct vnt_private *VAR_1)
{
 FUNC_1(VAR_1->hw, VAR_1->abyCurrentNetAddr);

 FUNC_3(VAR_1);

 if (FUNC_2(VAR_1->hw))
  return -VAR_0;

 VAR_1->mac_hw = 1;

 FUNC_0(VAR_1);

 return 0;
}
