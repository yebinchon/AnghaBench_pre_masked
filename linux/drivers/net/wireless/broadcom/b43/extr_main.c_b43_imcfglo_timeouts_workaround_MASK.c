
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ssb_bus {int chip_id; int chip_rev; } ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_5__ {struct ssb_bus* bus; } ;
struct TYPE_4__ {scalar_t__ bus_type; TYPE_2__* sdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ssb_bus*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_4)
{
 struct ssb_bus *VAR_5;
 u32 VAR_6;





 return;


 VAR_5 = VAR_4->dev->sdev->bus;

 if ((VAR_5->chip_id == 0x4311 && VAR_5->chip_rev == 2) ||
     (VAR_5->chip_id == 0x4312)) {
  VAR_6 = FUNC_1(VAR_4->dev->sdev, VAR_1);
  VAR_6 &= ~VAR_2;
  VAR_6 &= ~VAR_3;
  VAR_6 |= 0x3;
  FUNC_2(VAR_4->dev->sdev, VAR_1, VAR_6);
  FUNC_0(VAR_5);
 }
}
