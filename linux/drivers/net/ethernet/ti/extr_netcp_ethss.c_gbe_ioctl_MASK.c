
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {TYPE_2__* drv; } ;
struct ifreq {int dummy; } ;
struct gbe_intf {TYPE_1__* slave; } ;
struct TYPE_4__ {int hwtstamp; } ;
struct TYPE_3__ {struct phy_device* phy; } ;


 int VAR_0 ;


 int FUNC_0 (struct gbe_intf*,struct ifreq*) ;
 int FUNC_1 (struct gbe_intf*,struct ifreq*) ;
 int FUNC_2 (struct phy_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct gbe_intf *VAR_4 = VAR_1;
 struct phy_device *VAR_5 = VAR_4->slave->phy;

 if (!VAR_5 || !VAR_5->drv->hwtstamp) {
  switch (VAR_3) {
  case 129:
   return FUNC_0(VAR_4, VAR_2);
  case 128:
   return FUNC_1(VAR_4, VAR_2);
  }
 }

 if (VAR_5)
  return FUNC_2(VAR_5, VAR_2, VAR_3);

 return -VAR_0;
}
