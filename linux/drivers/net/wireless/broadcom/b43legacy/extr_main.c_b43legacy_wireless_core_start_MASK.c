
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_2__* wl; int irq_mask; TYPE_1__* dev; } ;
struct TYPE_5__ {int hw; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (struct b43legacy_wldev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,struct b43legacy_wldev*) ;

__attribute__((used)) static int FUNC_11(struct b43legacy_wldev *VAR_6)
{
 int VAR_7;

 FUNC_0(FUNC_4(VAR_6) != VAR_1);

 FUNC_8(VAR_6);
 VAR_7 = FUNC_10(VAR_6->dev->irq, VAR_5,
     VAR_3, VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_7(VAR_6->wl, "Cannot request IRQ-%d\n",
         VAR_6->dev->irq);
  goto out;
 }

 FUNC_9(VAR_6->wl->hw);
 FUNC_3(VAR_6, VAR_2);


 FUNC_1(VAR_6);
 FUNC_5(VAR_6, VAR_0, VAR_6->irq_mask);


 FUNC_2(VAR_6);

 FUNC_6(VAR_6->wl, "Wireless interface started\n");
out:
 return VAR_7;
}
