
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct armada375_cluster_phy {int reg; scalar_t__ use_usb3; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct armada375_cluster_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_2)
{
 struct armada375_cluster_phy *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3->reg);
 if (VAR_3->use_usb3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_3->reg);

 return 0;
}
