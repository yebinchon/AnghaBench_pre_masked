
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_channel {int hw_value; } ;
struct bcma_device {TYPE_1__* bus; } ;
struct b43_wldev {TYPE_2__* dev; } ;
struct TYPE_4__ {struct bcma_device* bdev; } ;
struct TYPE_3__ {int drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct bcma_device*,int,int,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_6,
      struct ieee80211_channel *VAR_7)
{
 struct bcma_device *VAR_8 = VAR_6->dev->bdev;
 int VAR_9 = 0;


 if (VAR_7->hw_value == 13 || VAR_7->hw_value == 14)
  VAR_9 = 1;
 FUNC_5(VAR_8, VAR_2, 0, 0);
 FUNC_6(&VAR_8->bus->drv_cc, VAR_9);
 FUNC_5(VAR_8,
     VAR_0 |
     VAR_2,
     VAR_1 |
     VAR_3, 0);

 FUNC_0(VAR_6, VAR_9);

 FUNC_4(VAR_6);

 if (VAR_9)
  FUNC_3(VAR_6, VAR_4, VAR_5);
 else
  FUNC_2(VAR_6, VAR_4,
    ~VAR_5 & 0xFFFF);

 FUNC_1(VAR_6);
}
