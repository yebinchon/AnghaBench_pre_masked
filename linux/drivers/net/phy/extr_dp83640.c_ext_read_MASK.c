
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {struct dp83640_private* priv; } ;
struct dp83640_private {TYPE_1__* clock; } ;
struct TYPE_2__ {int page; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ,int) ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_1, int VAR_2, u32 VAR_3)
{
 struct dp83640_private *VAR_4 = VAR_1->priv;
 int VAR_5;

 if (VAR_4->clock->page != VAR_2) {
  FUNC_0(VAR_1, VAR_0, VAR_2);
  VAR_4->clock->page = VAR_2;
 }
 VAR_5 = FUNC_1(VAR_1, VAR_3);

 return VAR_5;
}
