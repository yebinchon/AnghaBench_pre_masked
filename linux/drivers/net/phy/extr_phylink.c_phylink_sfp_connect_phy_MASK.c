
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface; } ;
struct phylink {TYPE_1__ link_config; } ;
struct phy_device {int dummy; } ;


 int FUNC_0 (void*,struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct phy_device *VAR_1)
{
 struct phylink *VAR_2 = VAR_0;

 return FUNC_0(VAR_0, VAR_1, VAR_2->link_config.interface);
}
