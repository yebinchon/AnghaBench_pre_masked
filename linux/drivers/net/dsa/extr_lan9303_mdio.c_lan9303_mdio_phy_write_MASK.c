
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lan9303_mdio {TYPE_1__* device; } ;
struct lan9303 {int dev; } ;
struct TYPE_2__ {int bus; } ;


 struct lan9303_mdio* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct lan9303 *VAR_0, int VAR_1, int VAR_2,
      u16 VAR_3)
{
 struct lan9303_mdio *VAR_4 = FUNC_0(VAR_0->dev);

 return FUNC_1(VAR_4->device->bus, VAR_1, VAR_2, VAR_3);
}
