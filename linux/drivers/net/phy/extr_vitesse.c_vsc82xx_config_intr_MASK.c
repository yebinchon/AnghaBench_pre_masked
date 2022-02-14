
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ interrupts; TYPE_1__* drv; } ;
struct TYPE_2__ {scalar_t__ phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_9)
{
 int VAR_10;

 if (VAR_9->interrupts == VAR_8)
  VAR_10 = FUNC_1(VAR_9, VAR_1,
   (VAR_9->drv->phy_id == VAR_4 ||
    VAR_9->drv->phy_id == VAR_5 ||
    VAR_9->drv->phy_id == VAR_6 ||
    VAR_9->drv->phy_id == VAR_7) ?
    VAR_2 :
    VAR_0);
 else {



  VAR_10 = FUNC_0(VAR_9, VAR_3);

  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_9, VAR_1, 0);
 }

 return VAR_10;
}
