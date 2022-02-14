
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct phy_device {scalar_t__ interrupts; TYPE_1__* drv; } ;
struct kszphy_type {int interrupt_level_mask; } ;
struct TYPE_2__ {struct kszphy_type* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5)
{
 const struct kszphy_type *VAR_6 = VAR_5->drv->driver_data;
 int VAR_7;
 u16 VAR_8;

 if (VAR_6 && VAR_6->interrupt_level_mask)
  VAR_8 = VAR_6->interrupt_level_mask;
 else
  VAR_8 = VAR_0;


 VAR_7 = FUNC_0(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 &= ~VAR_8;
 FUNC_1(VAR_5, VAR_2, VAR_7);


 if (VAR_5->interrupts == VAR_4)
  VAR_7 = VAR_1;
 else
  VAR_7 = 0;

 return FUNC_1(VAR_5, VAR_3, VAR_7);
}
