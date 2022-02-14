
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct phy_device {struct dp83640_private* priv; } ;
struct dp83640_private {TYPE_1__* clock; } ;
struct TYPE_2__ {int page; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ,int) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_1, struct phy_device *VAR_2,
        int VAR_3, u32 VAR_4, u16 VAR_5)
{
 struct dp83640_private *VAR_6 = VAR_2->priv;

 if (VAR_6->clock->page != VAR_3) {
  FUNC_0(VAR_2, VAR_0, VAR_3);
  VAR_6->clock->page = VAR_3;
 }
 if (VAR_1)
  FUNC_0(VAR_2, VAR_4, VAR_5);
 else
  FUNC_1(VAR_2, VAR_4, VAR_5);
}
